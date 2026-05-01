/*
 * XREFs of ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4
 * Callers:
 *     ??R_lambda_376cdae45175a47ad8184ea3fe0886a7_@@QEBA@XZ @ 0x1801A4828 (--R_lambda_376cdae45175a47ad8184ea3fe0886a7_@@QEBA@XZ.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::GetWebExperiencePackage @ 0x1801C8AC8 (_anonymous_namespace_--GetWebExperiencePackage.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1801CC24C (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(
        winrt::param::hstring *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // r8

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::param::hstring::create_string_reference(this, a2, v3);
  return this;
}
