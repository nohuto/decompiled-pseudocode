/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180038D74
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180038ADC (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // rcx
  CTopLevelWindow3D *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 288) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *(_WORD *)(v1 + 298) = 0;
  *(_OWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  result = (CTopLevelWindow3D *)v1;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_BYTE *)(v1 + 536) = 0;
  *(_QWORD *)(v1 + 608) = 0LL;
  *(_WORD *)(v1 + 616) = 0;
  *(_OWORD *)(v1 + 620) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  return result;
}
