/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140993F00
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1408782B8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993BD4 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(LARGE_INTEGER *a1)
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
