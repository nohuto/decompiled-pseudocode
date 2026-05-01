/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x180010F0C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180010AF8 (--1TaskViewFrame@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@VSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180010F34 (-reset@-$unique_winrt_event_token_cx@VSwitcherControlBase@Switcher@Experiences@ComposableShell@W.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherControlBase>::reset(a1);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
