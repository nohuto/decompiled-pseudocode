/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018D638
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180111D6C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivitie.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801160A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180117D48 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180175BB4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay2.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801AD3C4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@A.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180115EB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile unsigned __int32 v4; // r8d
  int v6; // [rsp+30h] [rbp-28h]
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::GetCachedFeatureEnabledState(
                       a1,
                       v7);
    v4 = v10;
  }
  v9 = 3;
  v6 = 0;
  v8 = 0;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x27B9BC4u,
    (v4 >> 10) & 1,
    (v4 >> 11) & 1,
    (__int64)&v8,
    1u,
    v6);
}
