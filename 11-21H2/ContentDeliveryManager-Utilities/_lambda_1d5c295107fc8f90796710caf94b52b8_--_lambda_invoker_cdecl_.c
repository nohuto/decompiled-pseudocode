/*
 * XREFs of _lambda_1d5c295107fc8f90796710caf94b52b8_::_lambda_invoker_cdecl_ @ 0x180051860
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest05@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C61C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest05@@@details@wil@@A.c)
 */

char lambda_1d5c295107fc8f90796710caf94b52b8_::_lambda_invoker_cdecl_()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_STest05>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_STest05>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest05>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_STest05>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 0;
  v3 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF198,
    0x1E9AB23u,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 0;
}
