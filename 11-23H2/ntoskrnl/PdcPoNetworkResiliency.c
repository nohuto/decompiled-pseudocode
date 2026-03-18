/*
 * XREFs of PdcPoNetworkResiliency @ 0x140997930
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x140598F80 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x140996564 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopNetUpdateDsAccounting(v1);
  if ( v1 )
  {
    PopNetResiliencyEngaged = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    PopNetArmDsEvaluationTimer();
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140C3A288, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v3, v2, v4);
}
