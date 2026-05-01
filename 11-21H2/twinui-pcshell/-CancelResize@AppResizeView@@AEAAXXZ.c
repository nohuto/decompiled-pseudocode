/*
 * XREFs of ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18051E2D8
 * Callers:
 *     ?OnCaptureChanged@AppResizeView@@UEAAJXZ @ 0x18051ED40 (-OnCaptureChanged@AppResizeView@@UEAAJXZ.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18051ED70 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x18051EE60 (-OnKeyUp@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x18051EE90 (-OnPointerCancel@AppResizeView@@UEAAJXZ.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x18051E31C (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18051E5C0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x18051F730 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

void __fastcall AppResizeView::CancelResize(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, 0xFFFFFFFFLL);
  }
}
