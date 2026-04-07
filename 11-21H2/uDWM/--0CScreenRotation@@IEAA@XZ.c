/*
 * XREFs of ??0CScreenRotation@@IEAA@XZ @ 0x1800F70B0
 * Callers:
 *     ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x1800F7110 (-Create@CScreenRotation@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CScreenRotation *__fastcall CScreenRotation::CScreenRotation(CScreenRotation *this)
{
  __int64 v1; // rcx
  CScreenRotation *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 288) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *(_DWORD *)(v1 + 364) = -1;
  *(_DWORD *)(v1 + 368) = -1;
  result = (CScreenRotation *)v1;
  *(_OWORD *)(v1 + 372) = xmmword_1801241C0;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  return result;
}
