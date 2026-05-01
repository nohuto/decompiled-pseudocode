/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@QEAA_NXZ @ 0x180274A68
 * Callers:
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806FDA20 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180261F18 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180272528 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::ReportUsage(
    a1,
    v5 & 1,
    3u,
    v3);
  return v2;
}
