/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x140808480
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140809180 (PopPdcAreAllPhasesDisengaged.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v3; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    v3 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
    if ( v3 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 3;
      PopPowerAggregatorSetCurrentState(a1, v4);
    }
  }
  else
  {
    PopPowerAggregatorEnterScreenOff();
  }
  return 0LL;
}
