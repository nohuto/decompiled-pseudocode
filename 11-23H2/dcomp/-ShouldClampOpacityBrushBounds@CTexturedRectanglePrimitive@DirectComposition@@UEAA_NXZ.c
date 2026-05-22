/*
 * XREFs of ?ShouldClampOpacityBrushBounds@CTexturedRectanglePrimitive@DirectComposition@@UEAA_NXZ @ 0x18008EDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTexturedRectanglePrimitive::ShouldClampOpacityBrushBounds(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  return (*((_BYTE *)this + 288) & 4) != 0;
}
