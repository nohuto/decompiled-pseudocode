/*
 * XREFs of PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BD98
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A6E44 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CFA4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerRequestTableLookupEntry @ 0x1407A6EE0 (PopPowerRequestTableLookupEntry.c)
 *     PopReleasePowerRequestPushLock @ 0x1407A6F1C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestHandleRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int *v1; // rbx
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquirePowerRequestPushLock(a1);
  v2 = (_DWORD *)PopPowerRequestTableLookupEntry(*v1);
  if ( v2 )
  {
    v3 = v1[2];
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v2[6] = v3;
    PopPowerRequestEvaluatePendingRequestStatus(v2);
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
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
  }
  return PopReleasePowerRequestPushLock();
}
