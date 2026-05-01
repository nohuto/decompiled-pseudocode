/*
 * XREFs of ?IsAILPositionerEnabled@@YA_NXZ @ 0x18014E250
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E3F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall IsAILPositionerEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
    a2);
  return IsComponentEnabledInProfile(&GUID_d4833e76_ec83_4e0c_af91_06a5bc5adaa5);
}
