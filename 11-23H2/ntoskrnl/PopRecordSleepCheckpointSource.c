/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x140801394
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (4 * a1)) & 0xC;
  PopBsdHandleRequest(0xAu);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
