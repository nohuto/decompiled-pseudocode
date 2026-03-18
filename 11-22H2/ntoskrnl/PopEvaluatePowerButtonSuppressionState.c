/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x14099CB0C
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140824440 (PopLidSwitchReliabilityUpdateCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // esi
  unsigned __int8 v2; // bl

  v0 = byte_140C398E0;
  v1 = 0;
  v2 = byte_140C398E0;
  if ( !BYTE1(PopPowerButtonSuppression) && byte_140C398E0 == 1 )
    v2 = 2;
  if ( HIDWORD(PopPowerButtonSuppression) == v2 )
  {
    PopReleaseRwLock((__int64 *)&xmmword_140C398D0);
  }
  else
  {
    HIDWORD(PopPowerButtonSuppression) = v2;
    PopReleaseRwLock((__int64 *)&xmmword_140C398D0);
    v1 = -1073741822;
    if ( qword_140C6B0B0 )
      v1 = qword_140C6B0B0(v2);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
  }
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE3(PopBsdPowerTransitionExtension) = v0;
    BYTE4(PopBsdPowerTransitionExtension) = v2;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return v1;
}
