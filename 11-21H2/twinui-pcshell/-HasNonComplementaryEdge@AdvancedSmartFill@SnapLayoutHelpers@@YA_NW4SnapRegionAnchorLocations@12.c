/*
 * XREFs of ?HasNonComplementaryEdge@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@12@0PEAW4Edge@2@@Z @ 0x1805A69B4
 * Callers:
 *     ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8 (-DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV.c)
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::AdvancedSmartFill::HasNonComplementaryEdge(int a1, int a2, int *a3)
{
  int v3; // r9d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( a3 )
    *a3 = 0;
  v3 = 0;
  v4 = (a2 & a1) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 == 4 )
          v3 = ~(_BYTE)a2 & 2;
      }
      else
      {
        v3 = (a2 & 1) == 0;
      }
    }
    else
    {
      v3 = (a2 & 8) == 0 ? 3 : 0;
    }
  }
  else
  {
    v3 = ~(_BYTE)a2 & 4;
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
