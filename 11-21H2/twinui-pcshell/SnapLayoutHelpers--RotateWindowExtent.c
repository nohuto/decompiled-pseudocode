/*
 * XREFs of SnapLayoutHelpers::RotateWindowExtent @ 0x1805A74B0
 * Callers:
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x1805A651C (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::RotateWindowExtent(int a1, unsigned int a2, int a3, int a4, char a5, int a6)
{
  int v7; // eax
  unsigned int v8; // ecx

  if ( a1 > a6 )
  {
    v7 = MulDiv(a1, a4, a3);
    v8 = v7 + a2;
    a2 -= v7;
    if ( !a5 )
      return v8;
  }
  return a2;
}
