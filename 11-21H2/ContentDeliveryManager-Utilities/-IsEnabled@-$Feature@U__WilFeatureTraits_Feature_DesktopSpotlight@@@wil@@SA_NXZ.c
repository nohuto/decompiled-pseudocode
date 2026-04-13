/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DesktopSpotlight@@@wil@@SA_NXZ @ 0x18005F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAA_NXZ @ 0x180069864 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@Q.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl) != 0;
}
