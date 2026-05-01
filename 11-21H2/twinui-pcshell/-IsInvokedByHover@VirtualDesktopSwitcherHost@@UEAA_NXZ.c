/*
 * XREFs of ?IsInvokedByHover@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x18060A500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VirtualDesktopSwitcherHost::IsInvokedByHover(VirtualDesktopSwitcherHost *this)
{
  return *((_DWORD *)this + 88) == 1;
}
