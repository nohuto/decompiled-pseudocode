/*
 * XREFs of ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C228C
 * Callers:
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800EA720 (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  __int64 v1; // rcx

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 288) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)v1 = &CIconicAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_DWORD *)(v1 + 392) = 0;
  return (CIconicAnimatedVisual *)v1;
}
