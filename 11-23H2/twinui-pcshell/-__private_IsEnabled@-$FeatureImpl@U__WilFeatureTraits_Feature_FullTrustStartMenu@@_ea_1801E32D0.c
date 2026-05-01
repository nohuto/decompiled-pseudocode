/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NXZ @ 0x1801E32D0
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D0D3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D4FF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAAX_N.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
