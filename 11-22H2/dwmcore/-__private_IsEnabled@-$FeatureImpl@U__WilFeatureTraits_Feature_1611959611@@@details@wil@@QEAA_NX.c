/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1611959611@@@details@wil@@QEAA_NXZ @ 0x18011A2C8
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1802343A4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1611959611@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011A074 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1611959611@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_1611959611@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011A244 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_1611959611@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_1611959611>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1611959611>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1611959611>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
