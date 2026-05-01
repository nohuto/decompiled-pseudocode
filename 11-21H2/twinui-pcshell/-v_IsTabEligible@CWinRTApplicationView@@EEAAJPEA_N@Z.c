/*
 * XREFs of ?v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z @ 0x18003EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 */

__int64 __fastcall CWinRTApplicationView::v_IsTabEligible(CWinRTApplicationView *this, bool *a2, __int64 a3)
{
  *a2 = 0;
  LOBYTE(a3) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0LL,
    a3);
  return 0LL;
}
