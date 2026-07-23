/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1801135A4
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x18000A690 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015750 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180088080 (RtlpLoadMachineUIByPolicy.c)
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
