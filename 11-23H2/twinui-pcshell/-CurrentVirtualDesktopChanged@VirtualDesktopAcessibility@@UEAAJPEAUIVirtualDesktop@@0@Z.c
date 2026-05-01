/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180609C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopAcessibility::CurrentVirtualDesktopChanged(
        VirtualDesktopAcessibility *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this, 0);
}
