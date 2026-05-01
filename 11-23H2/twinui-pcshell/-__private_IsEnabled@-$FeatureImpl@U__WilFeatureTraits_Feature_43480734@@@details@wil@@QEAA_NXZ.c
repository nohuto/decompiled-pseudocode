/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAA_NXZ @ 0x180198948
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180198984 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180198B14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_43480734>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_43480734>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_43480734>::ReportUsage(a1, v3);
  return v2;
}
