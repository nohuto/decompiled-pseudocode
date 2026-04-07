/*
 * XREFs of ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800997FC
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18009A014 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAcrylicSheet *__fastcall CAcrylicSheet::CAcrylicSheet(CAcrylicSheet *this, const struct tagRECT *a2)
{
  __int64 v2; // rcx
  _OWORD *v3; // r10
  CAcrylicSheet *result; // rax
  char v5; // r9
  int v6; // r8d

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v2 + 288) = &CAcrylicSheet::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v2 = &CAcrylicSheet::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v2 + 296) = &CAcrylicSheet::`vftable'{for `IArrangementSheet'};
  *(_OWORD *)(v2 + 304) = *v3;
  *(_QWORD *)(v2 + 320) = 0LL;
  *(_QWORD *)(v2 + 328) = 0LL;
  *(_QWORD *)(v2 + 336) = 0LL;
  *(_QWORD *)(v2 + 344) = 0LL;
  *(_QWORD *)(v2 + 352) = 0LL;
  *(_QWORD *)(v2 + 416) = 0LL;
  *(_QWORD *)(v2 + 480) = 0LL;
  result = (CAcrylicSheet *)v2;
  *(_DWORD *)(v2 + 488) = -1;
  *(_BYTE *)(v2 + 493) = v5;
  *(_DWORD *)(v2 + 496) = v6;
  return result;
}
