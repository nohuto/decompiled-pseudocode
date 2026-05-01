/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x180248A18
 * Callers:
 *     _lambda_bdc0369aff36f5007facc09437a0c890_::operator() @ 0x1802373BC (_lambda_bdc0369aff36f5007facc09437a0c890_--operator().c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x18023BE40 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x180244470 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_180244470.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023B190 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManag.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802421F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVC.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
