/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140993E50
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140877DE8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993B24 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v3);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
