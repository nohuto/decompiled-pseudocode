/*
 * XREFs of ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801311FA
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x180044CB8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x18007A29C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E8C24 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F6EF8 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDirectFlipInfo::PresentNeeded(CDirectFlipInfo *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 121) )
    return (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 336LL))(*((_QWORD *)this + 2)) <= 2;
  return v1;
}
