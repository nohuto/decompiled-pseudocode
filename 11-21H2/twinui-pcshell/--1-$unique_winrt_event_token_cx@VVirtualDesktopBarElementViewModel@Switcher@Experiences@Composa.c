/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180011088
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180010AF8 (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x180612844 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806129A0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1800110B0 (-reset@-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Com.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
