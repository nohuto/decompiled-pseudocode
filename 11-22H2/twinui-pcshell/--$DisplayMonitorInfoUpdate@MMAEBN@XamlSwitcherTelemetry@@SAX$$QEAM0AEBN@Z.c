/*
 * XREFs of ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x180785EF0
 * Callers:
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x18028CE68 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ?DisplayMonitorInfoUpdate_@XamlSwitcherTelemetry@@QEAAXMMN@Z @ 0x180786698 (-DisplayMonitorInfoUpdate_@XamlSwitcherTelemetry@@QEAAXMMN@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::DisplayMonitorInfoUpdate<float,float,double const &>(
        float *a1,
        float *a2,
        double *a3)
{
  __int64 v6; // rcx
  XamlSwitcherTelemetry *v7; // rcx

  if ( XamlSwitcherTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v6,
      (void (__cdecl *)())_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::DisplayMonitorInfoUpdate_(v7, *a1, *a2, *a3);
  }
}
