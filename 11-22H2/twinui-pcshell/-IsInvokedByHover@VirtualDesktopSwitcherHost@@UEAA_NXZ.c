/*
 * XREFs of ?IsInvokedByHover@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x180774C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VirtualDesktopSwitcherHost::IsInvokedByHover(VirtualDesktopSwitcherHost *this)
{
  return *((_DWORD *)this + 94) == 1;
}
