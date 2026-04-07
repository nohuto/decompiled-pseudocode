/*
 * XREFs of ??0CLivePreview@@IEAA@XZ @ 0x18004A6D8
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004A61C (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CLivePreview *__fastcall CLivePreview::CLivePreview(CLivePreview *this)
{
  __int64 v1; // rcx
  CLivePreview *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v1 = &CLivePreview::`vftable';
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_DWORD *)(v1 + 336) = 0;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_DWORD *)(v1 + 368) = 0;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_DWORD *)(v1 + 400) = 0;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_DWORD *)(v1 + 432) = 0;
  *(_DWORD *)(v1 + 552) = -1;
  *(_DWORD *)(v1 + 556) = -1;
  result = (CLivePreview *)v1;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 504) = 0LL;
  *(_QWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_QWORD *)(v1 + 456) = 0LL;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_QWORD *)(v1 + 480) = 0LL;
  *(_QWORD *)(v1 + 488) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 536) = 3;
  *(_WORD *)(v1 + 291) = 0;
  return result;
}
