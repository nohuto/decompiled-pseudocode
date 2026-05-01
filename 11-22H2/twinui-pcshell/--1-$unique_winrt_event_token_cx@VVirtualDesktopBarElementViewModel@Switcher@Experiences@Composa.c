/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18007F6B4
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x18007DCDC (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x18078C508 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x18078C658 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007F6DC (-reset@-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Com.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
