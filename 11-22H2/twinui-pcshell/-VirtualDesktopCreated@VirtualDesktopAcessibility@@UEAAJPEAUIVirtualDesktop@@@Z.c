/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180609D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopAcessibility::VirtualDesktopCreated(
        VirtualDesktopAcessibility *this,
        struct IVirtualDesktop *a2)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this, 1);
}
