/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1802ED6A6
 * Callers:
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x180788851 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$5.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x180788CAC (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$6 @ 0x180788DD8 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$6.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789E34 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18078A984 (-reset@-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@W.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
