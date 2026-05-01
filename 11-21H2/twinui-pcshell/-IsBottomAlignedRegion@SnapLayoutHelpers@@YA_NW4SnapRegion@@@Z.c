/*
 * XREFs of ?IsBottomAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6E24
 * Callers:
 *     ?HasComplementaryHorizontalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A6740 (-HasComplementaryHorizontalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 */

bool __fastcall SnapLayoutHelpers::IsBottomAlignedRegion(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl

  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( (unsigned int)(a1 - 5) > 2 )
    return a1 == 9;
  return v5;
}
