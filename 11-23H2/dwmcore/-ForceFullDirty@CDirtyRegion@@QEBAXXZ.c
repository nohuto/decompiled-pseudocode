/*
 * XREFs of ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CD854
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E84C4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EB180 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F9398 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180045434 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18008D614 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800DF924 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDirtyRegion::ForceFullDirty(CDirtyRegion *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD *, char *); // rbx
  _QWORD *DirtyRects; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 4420) )
  {
    CDirtyRegion::SetFullDirty(this);
    if ( COcclusionContext::IsCurrent((CDirtyRegion *)((char *)this + 16)) )
    {
      v2 = *(_QWORD *)this;
      v3 = *(void (__fastcall **)(__int64, _QWORD *, char *))(**(_QWORD **)this + 200LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)this, v5);
      v3(v2, DirtyRects, (char *)this + 16);
    }
  }
}
