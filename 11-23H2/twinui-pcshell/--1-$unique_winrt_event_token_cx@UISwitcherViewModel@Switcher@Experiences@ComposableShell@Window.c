/*
 * XREFs of ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18007DEFC
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x18007DCDC (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1802ED08A (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$1 @ 0x1802ED133 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$1.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$2 @ 0x1802ED146 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$3 @ 0x1802ED159 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$3.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$4 @ 0x1802ED16C (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$4.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$0 @ 0x180778BAC (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$0.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$1 @ 0x180778BBF (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$1.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$2 @ 0x180778BD2 (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$3 @ 0x180778BE5 (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$3.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077A124 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$1 @ 0x180788805 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$1.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x180788818 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x18078882B (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x18078883E (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x180788CAC (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x180788D8C (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x180788D9F (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x180788DB2 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x180788DC5 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$5.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789E34 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007DF24 (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
