/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@QEAA_NXZ @ 0x180197AA4
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180197AE0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180197C68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_OobeLaunchDevHome>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OobeLaunchDevHome>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OobeLaunchDevHome>::ReportUsage(a1, v3);
  return v2;
}
