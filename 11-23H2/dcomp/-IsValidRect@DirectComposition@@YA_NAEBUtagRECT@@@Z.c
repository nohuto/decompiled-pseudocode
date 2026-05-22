/*
 * XREFs of ?IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z @ 0x1800EB9A0
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::IsValidRect(DirectComposition *this, const struct tagRECT *a2)
{
  return *((_DWORD *)this + 2) >= *(_DWORD *)this && *((_DWORD *)this + 3) >= *((_DWORD *)this + 1);
}
