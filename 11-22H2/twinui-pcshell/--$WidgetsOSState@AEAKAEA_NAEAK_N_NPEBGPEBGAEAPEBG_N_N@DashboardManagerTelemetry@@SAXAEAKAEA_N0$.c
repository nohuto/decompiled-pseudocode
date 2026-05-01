/*
 * XREFs of ??$WidgetsOSState@AEAKAEA_NAEAK_N_NPEBGPEBGAEAPEBG_N_N@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N2$$QEAPEBG3AEAPEBG22@Z @ 0x18022F0C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100@Z @ 0x180247C9C (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100@Z.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState<unsigned long &,bool &,unsigned long &,bool,bool,unsigned short const *,unsigned short const *,unsigned short const * &,bool,bool>(
        unsigned int *a1,
        bool *a2,
        _DWORD *a3,
        bool *a4,
        bool *a5,
        const unsigned __int16 **a6,
        const unsigned __int16 **a7,
        const unsigned __int16 **a8,
        bool *a9,
        bool *a10)
{
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int16 *v16; // rcx

  v14 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v14, 0) )
  {
    wil::details::static_lazy<DashboardManagerTelemetry>::get(
      v15,
      (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
    v16 = (unsigned __int16 *)*a6;
    LOBYTE(v16) = *a5;
    DashboardManagerTelemetry::WidgetsOSState_(
      (DashboardManagerTelemetry *)v16,
      *a1,
      *a2,
      *a3 != 0,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10);
  }
}
