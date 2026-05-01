/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAA_NXZ @ 0x180186E54
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F15A0 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180186E90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180187034 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTCUXD>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTCUXD>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTCUXD>::ReportUsage(a1, v3);
  return v2;
}
