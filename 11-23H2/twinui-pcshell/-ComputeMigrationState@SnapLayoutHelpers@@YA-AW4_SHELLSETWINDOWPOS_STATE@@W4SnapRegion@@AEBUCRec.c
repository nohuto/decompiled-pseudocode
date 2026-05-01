/*
 * XREFs of ?ComputeMigrationState@SnapLayoutHelpers@@YA?AW4_SHELLSETWINDOWPOS_STATE@@W4SnapRegion@@AEBUCRect@Geometry@@H@Z @ 0x180670B84
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x180670814 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeMigrationState(int a1, SnapLayoutHelpers *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = 3;
  if ( a1 == 9 )
  {
    if ( !SnapLayoutHelpers::CanFitColumnLayouts(a2, (const struct Geometry::CRect *)a3) )
      return 1;
  }
  else if ( a1 == 10 )
  {
    v4 = MulDiv(*((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1), 96, a3);
    v5 = 3;
    if ( v4 < 0x738 )
      return 1;
    return v5;
  }
  return v3;
}
