/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x140998380
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1409983B0 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
