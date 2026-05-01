/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18054DE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopAcessibility::CurrentVirtualDesktopChanged(
        VirtualDesktopAcessibility *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this);
}
