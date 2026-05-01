/*
 * XREFs of ?IsTouchGestureComponentEnabled@@YA_NXZ @ 0x18014F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGlobalTouchGestureDisabledOnSKU@@YA_NXZ @ 0x18014F438 (-IsGlobalTouchGestureDisabledOnSKU@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 */

char __fastcall IsTouchGestureComponentEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = 1;
  LOBYTE(a2) = 1;
  LOBYTE(a3) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( IsGlobalTouchGestureDisabledOnSKU() || !IsComponentEnabledInProfile((GUID *)&stru_18081A3F0) )
    return 0;
  return v3;
}
