/*
 * XREFs of ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x18051EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18051E2D8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnKeyUp(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) && !*((_BYTE *)this + 444) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
