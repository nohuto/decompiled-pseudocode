/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180036FEC
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180036F30 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // rcx
  CTopLevelWindow3D *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_DWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v1 + 288) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_WORD *)(v1 + 298) = 0;
  *(_BYTE *)(v1 + 300) = 0;
  *(_OWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  result = (CTopLevelWindow3D *)v1;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_BYTE *)(v1 + 536) = 0;
  *(_QWORD *)(v1 + 608) = 0LL;
  *(_WORD *)(v1 + 616) = 0;
  *(_OWORD *)(v1 + 620) = 0LL;
  *(_DWORD *)(v1 + 636) = 0;
  *(_BYTE *)(v1 + 656) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  return result;
}
