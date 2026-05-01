/*
 * XREFs of ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHH@Z @ 0x1805A3460
 * Callers:
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x180593DF8 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(
        SnapLayoutHelpers *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v6; // ebx
  int v7; // ebp

  v6 = 0;
  v7 = a3;
  if ( *(_DWORD *)a1 > a5 + *a2 )
  {
    if ( *(_DWORD *)a1 < a2[2] - (int)a4 )
    {
      if ( *((_DWORD *)a1 + 1) > a6 + a2[1] )
      {
        if ( *((_DWORD *)a1 + 1) >= a2[3] - (int)a3 )
          return 6;
      }
      else
      {
        return 2;
      }
    }
    else if ( SnapLayoutHelpers::AreQuadrantsEnabled(a1, (__int64)a2, a3, a4) )
    {
      if ( *((_DWORD *)a1 + 1) > a6 + a2[1] )
      {
        LOBYTE(v6) = *((_DWORD *)a1 + 1) >= a2[3] - v7;
        v6 += 4;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( SnapLayoutHelpers::AreQuadrantsEnabled(a1, (__int64)a2, a3, a4) )
  {
    if ( *((_DWORD *)a1 + 1) > a6 + a2[1] )
    {
      LOBYTE(v6) = *((_DWORD *)a1 + 1) < a2[3] - v7;
      v6 += 7;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 8;
  }
  return v6;
}
