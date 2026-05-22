/*
 * XREFs of ?OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A610
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18012992C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnPrimaryClickZoneChanged(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  return 0LL;
}
