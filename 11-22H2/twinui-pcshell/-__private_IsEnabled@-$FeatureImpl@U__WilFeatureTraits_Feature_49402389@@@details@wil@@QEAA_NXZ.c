/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x1801E3294
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1801AE890 (-Close@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x1804459B0 (-ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801E1F4C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E2E40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
