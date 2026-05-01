/*
 * XREFs of ??$WidgetsOSState@AEAK_NAEAK_N_N_N_N@DashboardManagerTelemetry@@SAXAEAK$$QEA_N01111@Z @ 0x1801C1F5C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N00000@Z @ 0x1801CE374 (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N00000@Z.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState<unsigned long &,bool,unsigned long &,bool,bool,bool,bool>(
        unsigned int *a1,
        bool *a2,
        _DWORD *a3,
        bool *a4,
        bool *a5,
        bool *a6,
        bool *a7)
{
  __int64 *v11; // rax
  __int64 v12; // rcx
  DashboardManagerTelemetry *v13; // rcx

  v11 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
          (__int64)a1,
          _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v11, 0) )
  {
    wil::details::static_lazy<DashboardManagerTelemetry>::get(
      v12,
      _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
    LOBYTE(v13) = *a5;
    DashboardManagerTelemetry::WidgetsOSState_(v13, *a1, *a2, *a3 != 0, *a4, *a5, *a6, *a7);
  }
}
