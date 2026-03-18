/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x140397BB4
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140989F5C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  PVOID *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( !a2 )
  {
    a1 &= ~PopPowerRequestGlobalOverrideMask;
    if ( !a1 )
      goto LABEL_10;
    PopPowerRequestGlobalOverrideMask |= a1;
  }
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( a2 )
    {
      if ( (a1 & *((_DWORD *)i + 7)) == a1 )
        continue;
      *((_DWORD *)i + 7) |= a1;
    }
    PopPowerRequestEvaluatePendingRequestStatus(i, 0LL);
  }
  PopQueueWorkItem((__int64)&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
LABEL_10:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
