/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180274A28
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180262DC4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFi.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18026359C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyF.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180261F18 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180272528 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfiguringSettingsCopilotHardwareKey>::ReportUsage(
    a1,
    v5 & 1,
    0,
    v3);
  return v2;
}
