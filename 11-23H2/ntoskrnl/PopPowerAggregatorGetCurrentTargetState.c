/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x140993AD8
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099BAC4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v2 = xmmword_140C3AA60;
  *(_OWORD *)a1 = xmmword_140C3AA50;
  v3 = qword_140C3AA70;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
