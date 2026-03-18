/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x14058E5E0
 * Callers:
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140987574 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140987674 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA107C (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopGetMostRecentWakeInfo()
{
  __int64 v0; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v5; // edx
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( PopWakeInfoCount )
  {
    v0 = qword_140C3E708;
    _InterlockedIncrement((volatile signed __int32 *)(qword_140C3E708 + 16));
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
      v5 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v0;
}
