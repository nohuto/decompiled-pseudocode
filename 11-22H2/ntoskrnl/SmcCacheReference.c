/*
 * XREFs of SmcCacheReference @ 0x1409DAEA0
 * Callers:
 *     SmcGetCacheStats @ 0x1409DB190 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1409DB304 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1409DB568 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1409DB824 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1409DBD60 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 */

__int64 __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = 0LL;
  v4 = a1 + 32LL * (a2 & 0xF);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8)) )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0xFFF) == a2 >> 4 )
      return *(_QWORD *)v4;
    else
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8));
  }
  return v3;
}
