/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudBackupRestoreSvc@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18075EDA8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180755144 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AppRestorePlaceholders@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudBackupRestoreSvc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudBackupRestoreSvc@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudBackupRestoreSvc@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AAEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudBackupRestoreSvc@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudBackupRestoreSvc>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudBackupRestoreSvc>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudBackupRestoreSvc>::ReportUsage(a1, v4 & 1);
  return v2;
}
