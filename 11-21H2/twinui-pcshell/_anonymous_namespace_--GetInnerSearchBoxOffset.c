/*
 * XREFs of _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1801A59F0
 * Callers:
 *     ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A51C4 (-CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Win.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1801A57E0 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A5C84 (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 * Callees:
 *     _o_ceil_0 @ 0x180188EC4 (_o_ceil_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 */

__int64 __fastcall anonymous_namespace_::GetInnerSearchBoxOffset(__int64 a1)
{
  unsigned __int8 IsEnabled; // al
  int v3; // edx
  int v4; // ebx
  double v6; // xmm0_8

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl);
  v3 = *(_DWORD *)(a1 + 56);
  if ( IsEnabled )
  {
    v4 = MulDiv(12, v3, 96);
    return (unsigned int)(v4 - MulDiv(2, *(_DWORD *)(a1 + 56), 96));
  }
  else
  {
    v6 = (double)(9 * v3) / 96.0;
    o_ceil_0();
    return (unsigned int)(int)v6;
  }
}
