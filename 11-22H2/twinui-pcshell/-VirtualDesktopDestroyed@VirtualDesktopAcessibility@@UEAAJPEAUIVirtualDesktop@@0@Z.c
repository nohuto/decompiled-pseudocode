/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180609D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopAcessibility::VirtualDesktopDestroyed(
        VirtualDesktopAcessibility *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this, 1);
}
