/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@wil@@QEAA_NXZ @ 0x180069900
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@SA_NXZ @ 0x18005F910 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C244 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@.c)
 */

bool __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinuteZeroExperiences>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  volatile unsigned __int32 v2; // r8d
  bool v3; // bl
  int v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  signed __int32 v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetCachedFeatureEnabledState(
    a1,
    (signed __int32 *)&v7);
  v2 = *a1;
  v3 = (v7 & 8) != 0;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetCachedFeatureEnabledState(
                      a1,
                      &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x81AA4Au,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    v3,
    3);
  return v3;
}
