/*
 * XREFs of ?OnCaptureChanged@AppResizeView@@UEAAJXZ @ 0x1805D7710
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1805D6AE8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnCaptureChanged(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
