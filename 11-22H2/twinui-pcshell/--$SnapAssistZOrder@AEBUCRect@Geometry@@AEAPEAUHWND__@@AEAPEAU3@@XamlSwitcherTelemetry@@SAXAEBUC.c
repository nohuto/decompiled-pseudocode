/*
 * XREFs of ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1807692D8
 * Callers:
 *     ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18076CC48 (-GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x18076E504 (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::SnapAssistZOrder<Geometry::CRect const &,HWND__ * &,HWND__ * &>(
        struct tagRECT *a1,
        HWND *a2,
        HWND *a3)
{
  __int64 v6; // rcx
  XamlSwitcherTelemetry *v7; // rcx

  if ( XamlSwitcherTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v6,
      (void (__cdecl *)())_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::SnapAssistZOrder_(v7, a1, *a2, *a3);
  }
}
