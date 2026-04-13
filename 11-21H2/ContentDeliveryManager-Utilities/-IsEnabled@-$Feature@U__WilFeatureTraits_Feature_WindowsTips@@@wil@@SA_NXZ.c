/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ @ 0x18005FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAA_NXZ @ 0x180069A38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAA_N.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsTips>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl) != 0;
}
