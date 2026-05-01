/*
 * XREFs of ?VirtualDesktopRenameInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x1801E99F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VirtualDesktopSwitcherHost::VirtualDesktopRenameInProgress(VirtualDesktopSwitcherHost *this)
{
  if ( *((_QWORD *)this + 6) )
    return WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopRenameInProgress::get();
  else
    return 0;
}
