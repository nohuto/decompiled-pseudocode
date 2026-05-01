/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C288
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18020A2DC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@de.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180209974 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelega.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18020B5F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
