/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801F0644
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1801AC7E0 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801EC918 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801EB974 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EEAA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
