/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x1409806A8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
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
