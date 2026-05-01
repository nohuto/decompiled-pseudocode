/*
 * XREFs of ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1801A4EBC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ @ 0x1801A60A0 (-Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ.c)
 *     ?LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z @ 0x1801A6498 (-LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(struct tagRECT *a1)
{
  wil::TraceLoggingProvider *v2; // rax
  SearchBoxOnTaskbarSearchAppPositionerTelemetry *v3; // rcx
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance();
  if ( wil::TraceLoggingProvider::IsEnabled_(v2, 0) )
  {
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance();
    v4 = *a1;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect_(v3, &v4);
  }
}
