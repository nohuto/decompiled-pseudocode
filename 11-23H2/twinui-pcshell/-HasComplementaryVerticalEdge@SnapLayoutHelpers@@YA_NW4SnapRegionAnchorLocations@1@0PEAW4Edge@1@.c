/*
 * XREFs of ?HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x180673B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::HasComplementaryVerticalEdge(char a1, char a2, int *a3)
{
  int v3; // r9d

  if ( a3 )
    *a3 = 0;
  v3 = 0;
  if ( (a1 & 0xA) != 0xA && (a2 & 0xA) != 0xA )
  {
    if ( (a1 & 2) != 0 && (a2 & 2) == 0 )
    {
      v3 = 2;
    }
    else if ( (a1 & 8) != 0 && (a2 & 8) == 0 )
    {
      v3 = 3;
    }
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
