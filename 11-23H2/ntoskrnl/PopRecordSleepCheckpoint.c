/*
 * XREFs of PopRecordSleepCheckpoint @ 0x140981610
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140AAA358 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
