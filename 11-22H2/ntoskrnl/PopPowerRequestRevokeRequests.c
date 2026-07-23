/*
 * XREFs of PopPowerRequestRevokeRequests @ 0x140583C54
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140981980 (PopPowerRequestRevokeRequestsForSleep.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CB34 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopPowerRequestRevokeRequests(int a1, char a2)
{
  PVOID *i; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-28h] BYREF

  memset(&v11, 0, sizeof(v11));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &v11);
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
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v11);
  OldIrql = v11.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (v11.OldIrql + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}
