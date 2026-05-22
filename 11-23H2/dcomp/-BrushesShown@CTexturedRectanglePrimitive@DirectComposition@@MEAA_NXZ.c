/*
 * XREFs of ?BrushesShown@CTexturedRectanglePrimitive@DirectComposition@@MEAA_NXZ @ 0x18000B610
 * Callers:
 *     <none>
 * Callees:
 *     ?BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ @ 0x180085820 (-BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTexturedRectanglePrimitive::BrushesShown(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  char v2; // cl

  if ( !DirectComposition::CPrimitive::BrushesShown(this) )
    return 0;
  v2 = 1;
  if ( (*(_BYTE *)(*((_QWORD *)this + 29) + 112LL) & 1) == 0 )
    return 0;
  return v2;
}
