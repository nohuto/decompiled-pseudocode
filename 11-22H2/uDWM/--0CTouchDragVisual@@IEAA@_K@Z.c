/*
 * XREFs of ??0CTouchDragVisual@@IEAA@_K@Z @ 0x1800E7B00
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800AF1E4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180046550 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::CTouchDragVisual(CTouchDragVisual *this)
{
  __int64 v1; // rcx

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 304) = 200;
  *(_DWORD *)(v1 + 308) = 1088421888;
  *(_QWORD *)v1 = &CTouchDragVisual::`vftable';
  *(_DWORD *)(v1 + 312) = 939239554;
  *(_DWORD *)(v1 + 316) = 1500;
  *(_DWORD *)(v1 + 320) = 1058642330;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 352) = 0;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_DWORD *)(v1 + 384) = 0;
  *(_DWORD *)(v1 + 464) = -1;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_WORD *)(v1 + 448) = 0;
  *(_DWORD *)(v1 + 452) = 0;
  *(_QWORD *)(v1 + 456) = 0LL;
  return (CTouchDragVisual *)v1;
}
