/*
 * XREFs of ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A5278
 * Callers:
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x180018F20 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x180023DA0 (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800A3E04 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800A3F64 (--0CEffectBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1800A449C (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800A4634 (--0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800A49A0 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x1800A4B90 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800A4ED4 (--0CMaskBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800A4F8C (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x1800A511C (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800A5148 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800D2094 (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800F0730 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800F598C (--0CBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800F8168 (--0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800F8368 (--0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x1801C0A1C (--0CInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSnapshot@@IEAA@PEAVCComposition@@@Z @ 0x1801C0F48 (--0CSnapshot@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1801C11F0 (--0CVisualBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x1801C12DC (--0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x180220960 (--0CClipBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x180224C8C (--0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x18022E160 (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x180241370 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18024857C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1802547F4 (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18026314C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     <none>
 */

CContent *__fastcall CContent::CContent(CContent *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CContent *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CContent::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CContent::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 16;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 32;
  return result;
}
