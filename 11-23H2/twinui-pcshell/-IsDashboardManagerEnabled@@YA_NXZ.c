/*
 * XREFs of ?IsDashboardManagerEnabled@@YA_NXZ @ 0x18014E610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DSCTrial@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E640 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DSCTrial@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall IsDashboardManagerEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DSCTrial>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DSCTrial>::GetImpl'::`2'::impl,
    a2);
  return IsComponentEnabledInProfile((GUID *)&stru_18081A3B0);
}
