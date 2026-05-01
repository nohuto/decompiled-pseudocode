/*
 * XREFs of ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x180670E10
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x180686B20 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(int a1)
{
  unsigned int v1; // r8d
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 0;
  switch ( a1 )
  {
    case 1:
    case 2:
    case 3:
      v1 = 4;
LABEL_14:
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( !v3 )
          goto LABEL_23;
        v4 = v3 - 1;
        if ( !v4 || (v5 = v4 - 1) == 0 || (v6 = v5 - 1) == 0 )
        {
          v1 |= 2u;
          return v1;
        }
        v7 = v6 - 1;
        if ( !v7 )
          goto LABEL_23;
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 2 )
              return v1;
LABEL_23:
            v1 |= 3u;
            return v1;
          }
        }
      }
      v1 |= 1u;
      return v1;
    case 4:
      goto LABEL_12;
    case 5:
    case 6:
    case 7:
      v1 = 8;
      goto LABEL_14;
    case 8:
LABEL_12:
      v1 = 12;
      goto LABEL_14;
  }
  if ( a1 != 9 )
    goto LABEL_14;
  return 12;
}
