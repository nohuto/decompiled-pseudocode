/*
 * XREFs of ?GetWebSignInMay23Exclusion@@YA?AW4ImmersiveComponentScenarios@@W41@@Z @ 0x180175A00
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@QEAA_NXZ @ 0x180175A30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@detail.c)
 */

__int64 __fastcall GetWebSignInMay23Exclusion(char a1)
{
  return a1 & 1 & (unsigned int)-((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::GetImpl'::`2'::impl) != 0);
}
