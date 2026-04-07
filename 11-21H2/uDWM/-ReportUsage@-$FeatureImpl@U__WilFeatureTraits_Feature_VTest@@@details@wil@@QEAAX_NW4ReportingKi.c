/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005808C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800568B4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@AEAA.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057C68 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@AEAA-.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057D34 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@A.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057F08 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057FD4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-AT.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B09EC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@A.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180058108 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEA.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
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
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::GetCachedFeatureEnabledState(a1, v7);
    v4 = v10;
  }
  v9 = 3;
  v8 = 0;
  return wil::details::ReportUsageToService(a1 + 2, 31070505LL, (v4 >> 8) & 1, (v4 >> 9) & 1, &v8, 1, 0);
}
