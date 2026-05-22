/*
 * XREFs of ?BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ @ 0x180085820
 * Callers:
 *     ?BrushesShown@CTexturedRectanglePrimitive@DirectComposition@@MEAA_NXZ @ 0x18000B610 (-BrushesShown@CTexturedRectanglePrimitive@DirectComposition@@MEAA_NXZ.c)
 *     ?BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ @ 0x1800857E0 (-BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CPrimitive::BrushesShown(DirectComposition::CPrimitive *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 13);
  result = 0;
  if ( !v1 || (*(_BYTE *)(v1 + 112) & 1) != 0 )
    return 1;
  return result;
}
