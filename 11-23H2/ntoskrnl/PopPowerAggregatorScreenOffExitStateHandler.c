/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x1409940A0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874C48 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140878028 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140883BD8 (PopPdcAreAllPhasesDisengaged.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(LARGE_INTEGER *a1)
{
  char v2; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1[8].QuadPart == a1[4].QuadPart )
  {
    PopReleaseRwLock(&PopPowerAggregatorLock);
    v2 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
    if ( v2 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 3;
      PopPowerAggregatorSetCurrentState(a1, (__int64)v4);
    }
  }
  else
  {
    PopPowerAggregatorEnterScreenOff((__int64)a1);
  }
  return 0LL;
}
