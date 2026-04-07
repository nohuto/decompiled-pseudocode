/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057314
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180056B4C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXaml.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuirksForShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800570B0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlIslandsDisablesQuir.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005717C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WUIOD@@@details@wil@@AE.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057248 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUXEMP@@@details@wil@@A.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057390 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DTests@@@details@wil@@AE.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DTests>::ReportUsage(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r8d
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DTests>::GetCachedFeatureEnabledState(a1, v7);
    v4 = v10;
  }
  v9 = 3;
  v8 = 0;
  return wil::details::ReportUsageToService(a1 + 2, 31565736LL, (v4 >> 8) & 1, (v4 >> 9) & 1, &v8, 1, 0);
}
