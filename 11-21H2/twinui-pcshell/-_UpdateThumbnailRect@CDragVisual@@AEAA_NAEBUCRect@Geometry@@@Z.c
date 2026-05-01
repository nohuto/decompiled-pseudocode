/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x180535CA8
 * Callers:
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x180533610 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180535CEC (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x1805340E4 (-_CheckDragStartBounds@CDragVisual@@AEAAXXZ.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(CDragVisual *this, const struct Geometry::CRect *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // r8
  CDragVisual *v4; // r9
  char v5; // bl

  v5 = 0;
  if ( !Geometry::operator==(a2, (_DWORD *)this + 60) )
  {
    v5 = 1;
    *v2 = *v3;
    CDragVisual::_CheckDragStartBounds(v4);
  }
  return v5;
}
