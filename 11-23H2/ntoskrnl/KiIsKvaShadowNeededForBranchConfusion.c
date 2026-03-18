/*
 * XREFs of KiIsKvaShadowNeededForBranchConfusion @ 0x140381760
 * Callers:
 *     KiDetectKvaLeakage @ 0x140A8DFD8 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140573D00 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140573D40 (KiIsBranchConfusionMitigationSupported.c)
 */

__int64 __fastcall KiIsKvaShadowNeededForBranchConfusion(__int64 a1)
{
  unsigned int v3; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0LL, &v4, 0LL);
  if ( (v4 & 0x8000) == 0 )
    return 0LL;
  v3 = 0;
  if ( !(unsigned int)KiIsBranchConfusionMitigationDesired(a1, &v4) )
    return 0LL;
  LOBYTE(v3) = (unsigned int)KiIsBranchConfusionMitigationSupported(a1, &v4) != 0;
  return v3;
}
