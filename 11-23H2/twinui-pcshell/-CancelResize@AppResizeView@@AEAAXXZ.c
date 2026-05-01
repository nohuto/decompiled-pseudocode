/*
 * XREFs of ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1805D6AE8
 * Callers:
 *     ?OnCaptureChanged@AppResizeView@@UEAAJXZ @ 0x1805D7710 (-OnCaptureChanged@AppResizeView@@UEAAJXZ.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x1805D7740 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x1805D7830 (-OnKeyUp@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x1805D7860 (-OnPointerCancel@AppResizeView@@UEAAJXZ.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1805D6B2C (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1805D6F70 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x1805D8108 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
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
