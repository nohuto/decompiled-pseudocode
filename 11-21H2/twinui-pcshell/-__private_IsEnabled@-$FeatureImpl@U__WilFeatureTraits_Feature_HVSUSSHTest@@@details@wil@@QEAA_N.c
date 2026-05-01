/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_NXZ @ 0x18011999C
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801199E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011A3A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wi.c)
 */

bool __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::__private_IsEnabled(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::GetCachedFeatureEnabledState(a1, &v5);
  v3 = (v5 & 8) != 0;
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::ReportUsage(a1, v2);
  }
  return v3;
}
