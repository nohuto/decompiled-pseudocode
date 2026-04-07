/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4
 * Callers:
 *     ??0CAccent@@IEAA@XZ @ 0x180017000 (--0CAccent@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180038D74 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800391BC (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18003AC34 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x1800470AC (--0CText@@AEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180047258 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18004C45C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18004E5A0 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004F01C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004F1C0 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180054918 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18005AE64 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800971B8 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800997FC (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x1800B2188 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800BDF3C (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800C0104 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800CBB3C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CScreenRotation@@IEAA@XZ @ 0x1800F70B0 (--0CScreenRotation@@IEAA@XZ.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800FCE58 (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
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
