/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@SA_NXZ @ 0x18005FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005CDBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@det.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  signed __int32 v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 4;
  v3 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF210,
    0xA836A7u,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 1;
}
