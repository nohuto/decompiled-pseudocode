/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@QEAA_NXZ @ 0x180175A30
 * Callers:
 *     ?GetWebSignInMay23Exclusion@@YA?AW4ImmersiveComponentScenarios@@W41@@Z @ 0x180175A00 (-GetWebSignInMay23Exclusion@@YA-AW4ImmersiveComponentScenarios@@W41@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180175A6C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180175B3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::ReportUsage(a1, v3);
  return v2;
}
