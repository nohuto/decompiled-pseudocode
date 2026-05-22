/*
 * XREFs of ?OnSecondaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180144D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18014404C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnSecondaryClickZoneChanged(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  return 0LL;
}
