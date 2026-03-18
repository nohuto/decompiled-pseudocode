/*
 * XREFs of PopPowerRequestReferenceAcquire @ 0x14032B828
 * Callers:
 *     PoSetPowerRequest @ 0x14032B610 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036EF74 (PpmBeginHighPerfRequest.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1407A5CC4 (PopPowerRequestActionInfo.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTracePowerRequestChange @ 0x14032B970 (PopDiagTracePowerRequestChange.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BBB0 (PopPowerRequestCallbackWorker.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CD14 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestReferenceAcquire(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = (int)a2;
  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v14 + 1) = &v14;
    *(_QWORD *)&v14 = &v14;
  }
  v5 = (_QWORD *)((unsigned __int64)&v14 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && ((1 << a2) & Object[5]) != 0
    && (a2 != 3 || (_KPROCESS *)*((_QWORD *)Object + 17) == KeGetCurrentThread()->ApcState.Process) )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( Object[v2 + 10] == -1 )
    {
      v6 = -1073741675;
    }
    else
    {
      Object[7] &= ~(1 << v2);
      ++Object[v2 + 10];
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopDiagTracePowerRequestChange(Object);
      v6 = 0;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        if ( (_QWORD *)*v5 != v5 )
          PopPowerRequestCallbackWorker(v5);
      }
      else
      {
        PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
