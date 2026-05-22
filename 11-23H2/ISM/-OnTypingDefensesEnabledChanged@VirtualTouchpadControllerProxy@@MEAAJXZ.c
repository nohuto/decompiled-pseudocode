/*
 * XREFs of ?OnTypingDefensesEnabledChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180144FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18014404C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnTypingDefensesEnabledChanged(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  return 0LL;
}
