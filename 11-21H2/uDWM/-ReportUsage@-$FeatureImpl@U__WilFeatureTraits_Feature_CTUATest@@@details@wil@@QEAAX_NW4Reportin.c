/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800137D4
 * Callers:
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000734C (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA-A.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005C938 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005CFEC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005D698 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005E97C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CTUATest>::ReportUsage(
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
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CTUATest>::GetCachedFeatureEnabledState(
                       a1,
                       v7);
    v4 = v10;
  }
  v9 = 3;
  v8 = 0;
  return wil::details::ReportUsageToService(a1 + 2, 30013509LL, (v4 >> 8) & 1, (v4 >> 9) & 1, &v8, 1, 0);
}
