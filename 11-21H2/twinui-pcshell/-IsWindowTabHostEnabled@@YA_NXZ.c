/*
 * XREFs of ?IsWindowTabHostEnabled@@YA_NXZ @ 0x1800CB120
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x1800CB4A0 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 */

bool __fastcall IsWindowTabHostEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
    a2,
    a3);
  return IsWindowTabHostEnabledOnSKU();
}
