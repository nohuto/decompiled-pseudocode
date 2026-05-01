/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x18074931C
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801809D0 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 * Callees:
 *     <none>
 */

int __fastcall ExperienceManagerUtils::ScaleByDPI(ExperienceManagerUtils *this, int a2)
{
  return MulDiv((int)this, a2, 96);
}
