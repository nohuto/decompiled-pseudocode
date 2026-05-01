/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x18003E560 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18005FA70 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800AA420 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x1800B0754 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800DB690 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DBFC0 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180113A30 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 *     ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180127D20 (-OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z.c)
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x1804B4440 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804B44B0 (-OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805951F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x180596100 (-SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@.c)
 *     ?GetForDisplayRegion@DesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x1805B3D24 (-GetForDisplayRegion@DesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005FBE0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v4;
  }
  v9 = 3;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           27924070LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
