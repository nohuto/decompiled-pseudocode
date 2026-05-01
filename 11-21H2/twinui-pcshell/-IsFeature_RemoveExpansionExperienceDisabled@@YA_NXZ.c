/*
 * XREFs of ?IsFeature_RemoveExpansionExperienceDisabled@@YA_NXZ @ 0x18015F720
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveExpansionExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015F744 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveExpansionExperience@@@details@wil@@.c)
 */

char IsFeature_RemoveExpansionExperienceDisabled(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveExpansionExperience>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RemoveExpansionExperience>::GetImpl'::`2'::impl,
    0LL,
    0LL);
  return 1;
}
