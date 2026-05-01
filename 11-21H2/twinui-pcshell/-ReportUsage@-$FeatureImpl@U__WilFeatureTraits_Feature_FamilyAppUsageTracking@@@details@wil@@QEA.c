/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180563710
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18015DE00 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingA.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180562F08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile unsigned __int32 v4; // r8d
  signed __int32 v6[6]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+64h] [rbp+Ch]
  __int64 v9; // [rsp+78h] [rbp+20h]

  v9 = a4;
  v4 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetCachedFeatureEnabledState(
                      a1,
                      v6);
    v4 = v9;
  }
  v8 = 3;
  v7 = 0;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x135AED7u,
    (v4 >> 8) & 1,
    (v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    1,
    0);
}
