/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x1403989E8
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x140398970 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14081C068 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v7; // eax
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C6F240, &LockHandle);
  if ( qword_140C6B568 )
  {
    v0 = MiState[0];
    v1 = qword_140C65488;
    if ( qword_140C65488 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140C6B568->Header.SignalState )
        KeResetEvent(qword_140C6B568);
    }
    else if ( !qword_140C6B568->Header.SignalState )
    {
      KeSetEvent(qword_140C6B568, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140C6B560->Header.SignalState )
        KeSetEvent(qword_140C6B560, 0, 0);
    }
    else if ( qword_140C6B560->Header.SignalState )
    {
      KeResetEvent(qword_140C6B560);
    }
  }
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
      v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
