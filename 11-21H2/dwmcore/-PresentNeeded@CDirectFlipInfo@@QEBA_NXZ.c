/*
 * XREFs of ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801DFB78
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800DE61C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DF7EC (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDirectFlipInfo::PresentNeeded(CDirectFlipInfo *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 121) )
    return (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 328LL))(*((_QWORD *)this + 2)) <= 2;
  return v1;
}
