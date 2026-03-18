/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140981410
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
