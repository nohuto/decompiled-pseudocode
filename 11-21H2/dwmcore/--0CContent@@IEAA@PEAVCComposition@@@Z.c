/*
 * XREFs of ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x180049B98
 * Callers:
 *     ??0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x180019FD4 (--0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002ED20 (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x180040500 (--0CEffectBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800406C4 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x180040C34 (--0CMaskBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x180040D84 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x180041A78 (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180042C8C (--0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180043434 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x180043C74 (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180043CA0 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180063AB4 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800DF118 (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800ED1CC (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800EF35C (--0CBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x18019C424 (--0CBlurredWallpaperBackdropBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x18019CE14 (--0CInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSnapshot@@IEAA@PEAVCComposition@@@Z @ 0x18019D308 (--0CSnapshot@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18019D630 (--0CVisualBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x18019D714 (--0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x18020A8A4 (--0CClipBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x18020E1BC (--0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x1802167D8 (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x18022B470 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18023270C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1802426F8 (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x180252AE8 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18025B2B4 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

CContent *__fastcall CContent::CContent(CContent *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CContent *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
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
