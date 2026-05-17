/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x180111CB8
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
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
