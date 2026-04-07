/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B5A14
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4C4C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@A.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F12C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B4B1C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEA.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile unsigned __int32 v4; // r8d
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::GetCachedFeatureEnabledState(a1, v7);
    v4 = v10;
  }
  v9 = 3;
  v8 = 0;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x1DA1929u,
           (v4 >> 10) & 1,
           (v4 >> 11) & 1,
           (__int64)&v8,
           1u,
           0);
}
