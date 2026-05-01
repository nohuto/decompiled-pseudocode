/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAA_NXZ @ 0x18052E914
 * Callers:
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180522C74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052AA18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
