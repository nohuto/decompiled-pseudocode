/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x140993EA0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140877DE8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140883998 (PopPdcAreAllPhasesDisengaged.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v2; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
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
    PopPowerAggregatorEnterScreenOff(a1);
  }
  return 0LL;
}
