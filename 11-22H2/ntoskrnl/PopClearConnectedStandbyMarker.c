/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140980758
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 */

void __fastcall PopClearConnectedStandbyMarker(int a1)
{
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (BYTE11(PopBsdPowerTransition) ^ a1) & 0x3F;
    BYTE7(xmmword_140CF7C90) = BYTE7(xmmword_140CF7C90) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
}
