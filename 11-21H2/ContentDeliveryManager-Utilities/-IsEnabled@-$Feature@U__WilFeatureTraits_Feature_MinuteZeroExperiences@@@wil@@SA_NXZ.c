/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@SA_NXZ @ 0x18005F910
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@wil@@QEAA_NXZ @ 0x180069900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@details@w.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinuteZeroExperiences>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetImpl'::`2'::impl) != 0;
}
