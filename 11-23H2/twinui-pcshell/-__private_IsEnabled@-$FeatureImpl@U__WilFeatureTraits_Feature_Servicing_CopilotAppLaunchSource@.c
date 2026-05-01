/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource@@@details@wil@@QEAA_NXZ @ 0x180274C98
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180262534 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotAppLaun.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802728E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotAppLaunchSource>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
