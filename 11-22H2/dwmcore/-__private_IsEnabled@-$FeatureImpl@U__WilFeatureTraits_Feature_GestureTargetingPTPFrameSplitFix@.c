/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAA_NXZ @ 0x180117F2C
 * Callers:
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801166B0 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011199C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrame.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116BC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
