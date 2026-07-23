/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x1408786BC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 */

void __fastcall PopSetConnectedStandbyMarker(__int64 a1, int a2)
{
  __int64 v3; // rdi

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_QWORD *)&xmmword_140CF7BD0 + 1) = v3;
    BYTE10(PopBsdPowerTransition) ^= (BYTE10(PopBsdPowerTransition) ^ a2) & 0x3F;
    BYTE7(xmmword_140CF7BD0) ^= (BYTE7(xmmword_140CF7BD0) ^ HIBYTE(a2)) & 0xF;
    PopBsdHandleRequest(3u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
}
