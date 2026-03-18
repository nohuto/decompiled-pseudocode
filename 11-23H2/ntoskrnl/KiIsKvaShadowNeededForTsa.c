/*
 * XREFs of KiIsKvaShadowNeededForTsa @ 0x1404109F4
 * Callers:
 *     KiDetectKvaLeakage @ 0x140A8DFD8 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsTsaMitigationDesired @ 0x140410B94 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x140410BB0 (KiIsTsaMitigationSupported.c)
 */

__int64 __fastcall KiIsKvaShadowNeededForTsa(__int64 a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)&v4, 0LL);
  if ( (v4 & 0x2000000) == 0 )
    return 0LL;
  v2 = 0;
  if ( !(unsigned int)KiIsTsaMitigationDesired() )
    return 0LL;
  LOBYTE(v2) = (unsigned int)KiIsTsaMitigationSupported(a1) != 0;
  return v2;
}
