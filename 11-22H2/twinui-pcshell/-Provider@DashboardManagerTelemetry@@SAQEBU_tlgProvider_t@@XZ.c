/*
 * XREFs of ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087710 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     _lambda_8f44ff5c8977fc530aba29e054e0c967_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x18022EDEC (_lambda_8f44ff5c8977fc530aba29e054e0c967_--operator()_winrt--Windows--Foundation--IInspectable_.c)
 *     ??$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z @ 0x18022EFEC (--$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z.c)
 *     ??$TaskbarContext@PEBGAEA_N_N@DashboardManagerTelemetry@@SAX$$QEAPEBGAEA_N$$QEA_N@Z @ 0x18022F048 (--$TaskbarContext@PEBGAEA_N_N@DashboardManagerTelemetry@@SAX$$QEAPEBGAEA_N$$QEA_N@Z.c)
 *     ??$WidgetsOverwatchTriggered@_NAEAK@DashboardManagerTelemetry@@SAX$$QEA_NAEAK@Z @ 0x18022F19C (--$WidgetsOverwatchTriggered@_NAEAK@DashboardManagerTelemetry@@SAX$$QEA_NAEAK@Z.c)
 *     _lambda_a7ff001bd589f864b6844592adbd9d86_::operator() @ 0x180236C54 (_lambda_a7ff001bd589f864b6844592adbd9d86_--operator().c)
 *     _lambda_eb4cd3094334dda46300329bfc912a3e_::operator() @ 0x180237734 (_lambda_eb4cd3094334dda46300329bfc912a3e_--operator().c)
 *     _lambda_fa22f7386584b172c2544cf81792da3a_::operator() @ 0x1802378EC (_lambda_fa22f7386584b172c2544cf81792da3a_--operator().c)
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18023930C (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?RunWidgetCanvasDelayedInitializeAsync@DashboardManagerTelemetry@@SAXXZ @ 0x180242B54 (-RunWidgetCanvasDelayedInitializeAsync@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?RunWidgetCanvasDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ @ 0x180242B80 (-RunWidgetCanvasDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?RunWidgetCanvasDisabledByUser@DashboardManagerTelemetry@@SAXXZ @ 0x180242BAC (-RunWidgetCanvasDisabledByUser@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WidgetDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ @ 0x180247C70 (-WidgetDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100@Z @ 0x180247C9C (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 */

const struct _tlgProvider_t *__fastcall DashboardManagerTelemetry::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<DashboardManagerTelemetry>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)[1];
}
