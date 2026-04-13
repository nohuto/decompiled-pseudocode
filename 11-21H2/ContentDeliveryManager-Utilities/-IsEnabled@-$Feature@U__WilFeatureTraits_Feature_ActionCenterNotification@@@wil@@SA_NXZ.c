/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ @ 0x18005F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005BC5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  signed __int32 v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterNotification>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 2;
  v3 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF200,
    0x83333Eu,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 1;
}
