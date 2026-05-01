/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x180490130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopCreated(
        RTL_SRWLOCK *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktop::UpdateDesktopIndex(this - 2);
}
