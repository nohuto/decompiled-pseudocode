/*
 * XREFs of ?ShouldClampColorBrushBounds@CTexturedRectanglePrimitive@DirectComposition@@UEAA_NXZ @ 0x18008ED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTexturedRectanglePrimitive::ShouldClampColorBrushBounds(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  return (*((_BYTE *)this + 288) & 2) != 0;
}
