/*
 * XREFs of ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x180673BAC
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x180670EA8 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::HasNonComplementaryEdge(int a1, int a2, int *a3)
{
  int v3; // r9d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( a3 )
    *a3 = 0;
  v3 = 0;
  if ( (a1 & 0xA) != 0xA && (a2 & 0xA) != 0xA && (a1 & 5) != 5 && (a2 & 5) != 5 )
  {
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
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
