/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18025C0C4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18025A2CC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Commercial_ea_18025A2CC.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatInfo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18025A3C4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Commercial_ea_18025A3C4.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180259BEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18025BDC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
