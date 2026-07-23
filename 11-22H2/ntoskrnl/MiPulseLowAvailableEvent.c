/*
 * XREFs of MiPulseLowAvailableEvent @ 0x140653890
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402201DC (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KePulseEvent @ 0x1402206C0 (KePulseEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  __int64 v2; // rax
  struct _KEVENT *v3; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 304);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_DWORD *)(v2 + 4) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15872), &LockHandle);
    v3 = *(struct _KEVENT **)(a1 + 304);
    if ( !v3->Header.SignalState )
      KePulseEvent(v3, 0, 0);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
}
