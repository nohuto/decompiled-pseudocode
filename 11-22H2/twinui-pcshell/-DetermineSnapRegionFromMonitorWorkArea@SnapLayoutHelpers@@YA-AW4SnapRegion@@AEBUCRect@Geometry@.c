/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1802E949C
 * Callers:
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x180670608 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(_DWORD *a1, int *a2, int a3)
{
  int v3; // r11d
  unsigned int v4; // ebx
  int v7; // eax
  int v8; // edi
  SnapLayoutHelpers *v9; // rcx
  int v10; // r12d
  int v11; // ebp
  int v12; // r15d
  unsigned int v13; // r10d
  unsigned int v14; // edx
  unsigned int v15; // r8d

  v3 = a1[2];
  v4 = 0;
  if ( *a1 < v3 )
  {
    v7 = a1[3];
    if ( a1[1] < v7 )
    {
      v8 = a2[1];
      v9 = (SnapLayoutHelpers *)(unsigned int)(2 * a3);
      v10 = *a2;
      v11 = a2[3];
      v12 = a2[2];
      v13 = a3 + *a1 - *a2;
      v14 = a3 + v3 - v12;
      v15 = a3 + v7 - v11;
      if ( a3 + a1[1] - v8 <= (unsigned int)v9 )
      {
        if ( v13 <= (unsigned int)v9 )
        {
          if ( v14 <= (unsigned int)v9 && a1[3] < v11 )
            return 2;
          if ( v3 < v12 && a1[3] < v11 && v15 > (unsigned int)v9 )
          {
            v4 = 1;
            goto LABEL_43;
          }
        }
        if ( *a1 > v10 && v14 <= (unsigned int)v9 && a1[3] < v11 && v15 > (unsigned int)v9 )
        {
          v4 = 3;
          goto LABEL_43;
        }
        if ( v13 <= (unsigned int)v9 && v3 < v12 && v15 <= (unsigned int)v9 )
          return 8;
        if ( *a1 <= v10 || v14 > (unsigned int)v9 )
        {
          if ( v15 <= (unsigned int)v9 && v14 > (unsigned int)v9 && v13 > (unsigned int)v9 )
            v4 = 9;
        }
        else if ( v15 <= (unsigned int)v9 )
        {
          return 4;
        }
LABEL_42:
        if ( v4 != 7 )
          return v4;
LABEL_43:
        v4 &= -SnapLayoutHelpers::AreQuadrantsEnabled(v9);
        return v4;
      }
      if ( v15 <= (unsigned int)v9 )
      {
        if ( v13 <= (unsigned int)v9 && v14 <= (unsigned int)v9 && a1[1] > v8 )
          return 6;
        if ( *a1 >= v10 && v14 <= (unsigned int)v9 && a1[1] > v8 )
        {
          v4 = 5;
          goto LABEL_43;
        }
        if ( v13 <= (unsigned int)v9 && v3 < v12 && a1[1] > v8 )
          v4 = 7;
        goto LABEL_42;
      }
      if ( v13 <= (unsigned int)v9 && v14 <= (unsigned int)v9 )
        return 10;
    }
  }
  return v4;
}
