/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180545920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopCreated(RTL_SRWLOCK *this, struct IVirtualDesktop *a2)
{
  return VirtualDesktop::UpdateDesktopIndex(this - 3);
}
