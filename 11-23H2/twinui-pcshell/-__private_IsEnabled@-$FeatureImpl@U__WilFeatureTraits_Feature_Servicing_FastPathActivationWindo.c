/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck@@@details@wil@@QEAA_NXZ @ 0x180274D4C
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802627C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActiva.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180272A6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleC.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
