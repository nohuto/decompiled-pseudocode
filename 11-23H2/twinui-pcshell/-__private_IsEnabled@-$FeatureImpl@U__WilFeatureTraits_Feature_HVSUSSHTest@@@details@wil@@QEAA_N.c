/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_NXZ @ 0x180115084
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800B2628 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180112830 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801150C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::__private_IsEnabled(_DWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // bl
  char v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::GetCachedFeatureEnabledState(a1, &v6);
  v4 = v6 & 1;
  if ( (v6 & 1) != 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::ReportUsage(a1, v6 & 1, v2, v3);
  return v4;
}
