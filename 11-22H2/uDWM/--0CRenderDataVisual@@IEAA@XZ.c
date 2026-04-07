/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180002EF0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x1800088D4 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18001CE0C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18003EF8C (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180042C74 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x180045F40 (--0CAccent@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180046550 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004679C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180047A10 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18004A6D8 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180052990 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18009ED18 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800A280C (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C228C (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800C4B34 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800D028C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x1800F4E98 (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CScreenRotation@@IEAA@XZ @ 0x1800F71DC (--0CScreenRotation@@IEAA@XZ.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x18010157C (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CRenderDataVisual::`vftable';
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_DWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 248) = 0LL;
  return (CRenderDataVisual *)v1;
}
