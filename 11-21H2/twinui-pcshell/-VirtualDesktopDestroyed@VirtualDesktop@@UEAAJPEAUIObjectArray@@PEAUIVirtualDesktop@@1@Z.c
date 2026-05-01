/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x180490150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopDestroyed(
        RTL_SRWLOCK *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  return VirtualDesktop::UpdateDesktopIndex(this - 2);
}
