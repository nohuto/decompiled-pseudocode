/*
 * XREFs of MiPulseLowAvailableEvent @ 0x140653D70
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402201BC (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  __int64 result; // rax
  struct _KEVENT *v3; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 304);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_DWORD *)(result + 4) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15872), &LockHandle);
    v3 = *(struct _KEVENT **)(a1 + 304);
    if ( !v3->Header.SignalState )
      KePulseEvent(v3, 0, 0);
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
