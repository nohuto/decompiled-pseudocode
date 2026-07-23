/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x1409808A8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 */

void __fastcall PopClearConnectedStandbyMarker(int a1)
{
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (BYTE11(PopBsdPowerTransition) ^ a1) & 0x3F;
    BYTE7(xmmword_140CF7BD0) = BYTE7(xmmword_140CF7BD0) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
}
