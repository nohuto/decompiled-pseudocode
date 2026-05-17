/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x180112124
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGrowLanguageList(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageList();
  return a1;
}
