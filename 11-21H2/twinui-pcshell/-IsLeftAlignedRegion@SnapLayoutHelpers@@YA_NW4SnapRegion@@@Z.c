/*
 * XREFs of ?IsLeftAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6EC8
 * Callers:
 *     ?HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A68C0 (-HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall SnapLayoutHelpers::IsLeftAlignedRegion(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  int v6; // eax

  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( a1 > 0xA )
    return 0;
  v6 = 1410;
  if ( !_bittest(&v6, a1) )
    return 0;
  return v5;
}
