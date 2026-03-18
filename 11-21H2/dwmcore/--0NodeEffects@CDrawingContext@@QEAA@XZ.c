/*
 * XREFs of ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18008B2D8
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801B3068 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18008B340 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 */

CDrawingContext::NodeEffects *__fastcall CDrawingContext::NodeEffects::NodeEffects(CDrawingContext::NodeEffects *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 13) = 1065353216;
  CMILMatrix::SetToZeroMatrix((CDrawingContext::NodeEffects *)((char *)this + 124));
  return this;
}
