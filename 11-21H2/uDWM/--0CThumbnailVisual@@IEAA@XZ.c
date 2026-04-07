/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x18003AC34
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18003A9B4 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  __int64 v1; // rcx
  CThumbnailVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_OWORD *)(v1 + 296) = 0LL;
  *(_OWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_DWORD *)(v1 + 336) = 0;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_BYTE *)(v1 + 352) = 0;
  *(_QWORD *)(v1 + 356) = 0LL;
  *(_QWORD *)v1 = &CThumbnailVisual::`vftable'{for `CRenderDataVisual'};
  *(_BYTE *)(v1 + 364) = 0;
  *(_QWORD *)(v1 + 288) = &CThumbnailVisual::`vftable'{for `IAnimatedVisual'};
  *(_QWORD *)(v1 + 368) = &CThumbnailVisual::`vftable';
  result = (CThumbnailVisual *)v1;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_QWORD *)(v1 + 456) = 0LL;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_BYTE *)(v1 + 480) = 1;
  *(_DWORD *)(v1 + 504) = 0;
  *(_QWORD *)(v1 + 560) = 0LL;
  *(_QWORD *)(v1 + 568) = 0LL;
  return result;
}
