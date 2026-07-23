/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x1405840B4
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409819CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140981AD0 (PopPowerRequestRevokeRequestsForSleep.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CFA4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  PVOID *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-28h] BYREF

  memset(&v10, 0, sizeof(v10));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &v10);
  if ( a2 )
    goto LABEL_4;
  a1 &= ~PopPowerRequestGlobalOverrideMask;
  if ( a1 )
  {
    PopPowerRequestGlobalOverrideMask |= a1;
LABEL_4:
    for ( i = (PVOID *)PopPowerRequestObjectList; ; i = (PVOID *)*i )
    {
      if ( i == &PopPowerRequestObjectList )
      {
        PopQueueWorkItem((__int64)&PopPowerRequestUpdateWorkItem, CriticalWorkQueue);
        break;
      }
      if ( a2 )
      {
        if ( (a1 & *((_DWORD *)i + 7)) == a1 )
          continue;
        *((_DWORD *)i + 7) |= a1;
      }
      PopPowerRequestEvaluatePendingRequestStatus(i, 0LL);
    }
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v10.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v10.OldIrql + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
