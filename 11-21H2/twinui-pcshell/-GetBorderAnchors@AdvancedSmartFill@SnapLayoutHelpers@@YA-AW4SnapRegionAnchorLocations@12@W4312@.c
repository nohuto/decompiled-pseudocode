/*
 * XREFs of ?GetBorderAnchors@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@W4312@@Z @ 0x1805A39E8
 * Callers:
 *     ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8 (-DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::GetBorderAnchors(unsigned int a1)
{
  if ( a1 != 7 )
  {
    if ( a1 == 11 )
      return 10LL;
    if ( a1 != 13 )
    {
      if ( a1 != 14 )
        return a1;
      return 10LL;
    }
  }
  return 5LL;
}
