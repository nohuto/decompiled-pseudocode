/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180274AA8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID51025379@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180262ED0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID51025379@@@details@wi.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID54380617@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802630D4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID54380617@@@details@wi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180261FF4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802725B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
