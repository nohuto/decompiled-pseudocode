/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18075EDE4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180755848 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarWin32RestorePlac.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754A3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AB84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExtendedPlaceholders>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExtendedPlaceholders>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExtendedPlaceholders>::ReportUsage(a1, v4 & 1);
  return v2;
}
