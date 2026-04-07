/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x180017000
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180016F30 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 388) = 0xFFFFFF;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)v1 = &CAccent::`vftable';
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_WORD *)(v1 + 405) = 0;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_BYTE *)(v1 + 404) = 0;
  *(_QWORD *)(v1 + 424) = 0LL;
  return (CAccent *)v1;
}
