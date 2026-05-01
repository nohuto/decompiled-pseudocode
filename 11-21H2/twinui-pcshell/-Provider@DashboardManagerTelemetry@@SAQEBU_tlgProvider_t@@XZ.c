/*
 * XREFs of ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80
 * Callers:
 *     _lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x1801C163C (_lambda_7e117e86fbbf7389a420f5618d976754_--operator()_winrt--Windows--Foundation--IInspectable_.c)
 *     ??$DashboardInteracted@Uguid@winrt@@I_NPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAI$$QEA_N$$QEAPEBG@Z @ 0x1801C1C74 (--$DashboardInteracted@Uguid@winrt@@I_NPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QE.c)
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x1801C1D60 (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     ??$WebExperienceInstallerPackageDetectedInstalled@AEA_N@DashboardManagerTelemetry@@SAXAEA_N@Z @ 0x1801C1DC0 (--$WebExperienceInstallerPackageDetectedInstalled@AEA_N@DashboardManagerTelemetry@@SAXAEA_N@Z.c)
 *     ??$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@SAXAEB_N00@Z @ 0x1801C1E04 (--$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@.c)
 *     ??$WebExperienceInstallerPackageInstallWaitComplete@AEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@DashboardManagerTelemetry@@SAXAEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x1801C1ED4 (--$WebExperienceInstallerPackageInstallWaitComplete@AEBW4AppInstallState@InstallControl@Preview@.c)
 *     ??$WebExperienceInstallerRestartingPackageInstall@W4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@DashboardManagerTelemetry@@SAX$$QEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x1801C1F18 (--$WebExperienceInstallerRestartingPackageInstall@W4AppInstallState@InstallControl@Preview@Store.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed @ 0x1801C8F68 (_anonymous_namespace_--IsAppInstallOnMeteredNetworkAllowed.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE240 (-WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperienceInstallerPackageInstalledCheckStarting@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE26C (-WebExperienceInstallerPackageInstalledCheckStarting@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperienceInstallerPackagePreviouslyInstalled@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE298 (-WebExperienceInstallerPackagePreviouslyInstalled@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperienceInstallerPackageUninstallCompleted@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE2C4 (-WebExperienceInstallerPackageUninstallCompleted@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperienceInstallerPackageUninstallFailed@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE2F0 (-WebExperienceInstallerPackageUninstallFailed@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperienceInstallerStartingPackageInstall@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE31C (-WebExperienceInstallerStartingPackageInstall@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WebExperiencePackageUninstall@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE348 (-WebExperiencePackageUninstall@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N00000@Z @ 0x1801CE374 (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N00000@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 */

const struct _tlgProvider_t *__fastcall DashboardManagerTelemetry::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<DashboardManagerTelemetry>::get(
                                          a1,
                                          _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)[1];
}
