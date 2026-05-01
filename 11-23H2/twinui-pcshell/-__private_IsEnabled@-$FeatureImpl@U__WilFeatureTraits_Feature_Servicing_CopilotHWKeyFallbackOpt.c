/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@details@wil@@QEAA_NXZ @ 0x180274D10
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802626EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802729E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
