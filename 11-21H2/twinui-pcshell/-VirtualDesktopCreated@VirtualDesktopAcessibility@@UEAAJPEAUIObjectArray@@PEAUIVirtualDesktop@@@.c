/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18054DEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopAcessibility::VirtualDesktopCreated(
        VirtualDesktopAcessibility *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this);
}
