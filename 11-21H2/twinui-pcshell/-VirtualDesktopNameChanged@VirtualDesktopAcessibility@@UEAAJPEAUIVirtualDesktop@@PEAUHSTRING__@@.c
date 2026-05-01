/*
 * XREFs of ?VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18054DEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopAcessibility::VirtualDesktopNameChanged(
        VirtualDesktopAcessibility *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  return VirtualDesktopAcessibility::RecalculateDesktopName(this);
}
