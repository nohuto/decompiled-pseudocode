/*
 * XREFs of s_AreAeroUpdatesAvailable @ 0x1805F5804
 * Callers:
 *     s_DrawGlyph @ 0x1805F5834 (s_DrawGlyph.c)
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118FA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall s_AreAeroUpdatesAvailable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r9

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XXTests>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XXTests>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  return 1;
}
