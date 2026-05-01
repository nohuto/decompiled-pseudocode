/*
 * XREFs of ??1?$AutoSelectObject@PEAUHFONT__@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18052CB74
 * Callers:
 *     _GDIHelpers::RenderTransparentCenteredGlyph_::_1_::dtor$0 @ 0x18057C17B (_GDIHelpers--RenderTransparentCenteredGlyph_--_1_--dtor$0.c)
 *     _s_DrawGlyph_::_1_::dtor$1 @ 0x1805F5B63 (_s_DrawGlyph_--_1_--dtor$1.c)
 *     _s_DrawThemeTextPPIAware_::_1_::dtor$2 @ 0x1805F60F0 (_s_DrawThemeTextPPIAware_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall Microsoft::WRL::Wrappers::AutoSelectObject<HFONT__ *>::~AutoSelectObject<HFONT__ *>(__int64 a1)
{
  return SelectObject(*(HDC *)a1, *(HGDIOBJ *)(a1 + 8));
}
