/*
 * XREFs of SmcCacheReference @ 0x1409DAFF0
 * Callers:
 *     SmcGetCacheStats @ 0x1409DB2E0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1409DB454 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1409DB6B8 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1409DB974 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1409DBEB0 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
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
