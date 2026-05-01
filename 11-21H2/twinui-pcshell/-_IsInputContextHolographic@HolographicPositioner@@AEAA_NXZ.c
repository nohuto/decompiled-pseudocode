/*
 * XREFs of ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1803D2450
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099A4C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803D17A8 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ??$_QueryAndCompareWNFContext@W4UserInputContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserInputContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803CC740 (--$_QueryAndCompareWNFContext@W4UserInputContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_.c)
 */

bool __fastcall HolographicPositioner::_IsInputContextHolographic(HolographicPositioner *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 114) )
    return 0;
  v2 = 1;
  return _QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserInputContext>((__int64)this, &v2);
}
