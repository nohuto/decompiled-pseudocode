/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C300
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18020A2DC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@de.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180209B2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclu.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18020B6F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XInputHidExclusive>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XInputHidExclusive>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XInputHidExclusive>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
