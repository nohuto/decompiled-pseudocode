/*
 * XREFs of _s_DrawGlyph_::_1_::dtor$1 @ 0x18074C5BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall s_DrawGlyph_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::Wrappers::AutoSelectObject<HFONT__ *>::~AutoSelectObject<HFONT__ *>(a2 + 80);
}
