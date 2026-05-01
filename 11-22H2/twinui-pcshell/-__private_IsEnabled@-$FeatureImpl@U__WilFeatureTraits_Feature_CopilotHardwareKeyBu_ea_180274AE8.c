/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAA_NXZ @ 0x180274AE8
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180271830 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180261FF4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802725B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
