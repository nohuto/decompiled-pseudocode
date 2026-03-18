/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140398808
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x140398790 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14081BD98 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
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
