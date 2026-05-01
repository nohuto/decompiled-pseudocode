/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18075ED6C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1807553B0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ExtendedPlaceholders@@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SparkPlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180755658 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SparkPlaceholders@@@det.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180755750 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlacehold.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754740 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075A9AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppRestorePlaceholders>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppRestorePlaceholders>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppRestorePlaceholders>::ReportUsage(a1, v4 & 1);
  return v2;
}
