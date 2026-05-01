/*
 * XREFs of ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x1805A2900
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805A1DC4 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x1805AB400 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 <= 0 )
  {
LABEL_13:
    if ( a1 == 1 )
    {
LABEL_22:
      v4 |= 1u;
      return v4;
    }
    if ( a1 == 2 )
      goto LABEL_20;
    if ( a1 <= 2 )
      return v4;
LABEL_16:
    if ( a1 <= 5 )
    {
      v4 |= 2u;
      return v4;
    }
    if ( a1 == 6 )
      goto LABEL_20;
LABEL_18:
    if ( a1 > 8 )
      return v4;
    goto LABEL_22;
  }
  if ( a1 <= 3 )
  {
    v4 = 4;
    goto LABEL_13;
  }
  if ( a1 == 4 )
    goto LABEL_11;
  if ( a1 <= 7 )
  {
    v4 = 8;
    goto LABEL_16;
  }
  if ( a1 == 8 )
  {
LABEL_11:
    v4 = 12;
    goto LABEL_16;
  }
  if ( a1 != 9 )
  {
    if ( a1 == 10 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
        1u,
        a3,
        a4);
LABEL_20:
      v4 |= 3u;
      return v4;
    }
    goto LABEL_18;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 12;
}
