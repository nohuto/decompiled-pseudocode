/*
 * XREFs of ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18009FC70
 * Callers:
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x18008E228 (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800C178C (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801EADD8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x1802289E8 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18009FD74 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CDesktopTree *__fastcall CVisual::GetDesktopTree(CVisual *this)
{
  __int64 v1; // rbx
  CVisual *v2; // rdi
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CVisualTree *v4; // rsi

  v1 = 0LL;
  v2 = this;
  if ( this )
  {
    while ( 1 )
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v2);
      v4 = VisualTreeNoRef;
      if ( VisualTreeNoRef )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 184LL))(VisualTreeNoRef) )
          break;
      }
      v2 = (CVisual *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        return (struct CDesktopTree *)v1;
    }
    return v4;
  }
  return (struct CDesktopTree *)v1;
}
