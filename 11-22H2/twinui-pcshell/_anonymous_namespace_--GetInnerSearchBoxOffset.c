/*
 * XREFs of _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180180BC4
 * Callers:
 *     ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180052D6C (-CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Win.c)
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180090DDC (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180180AD8 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetInnerSearchBoxOffset(__int64 a1)
{
  int v2; // ebx

  v2 = MulDiv(12, *(_DWORD *)(a1 + 56), 96);
  return (unsigned int)(v2 - MulDiv(2, *(_DWORD *)(a1 + 56), 96));
}
