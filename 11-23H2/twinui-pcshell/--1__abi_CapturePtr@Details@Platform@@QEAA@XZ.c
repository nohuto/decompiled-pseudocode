/*
 * XREFs of ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x18076A6F0
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x1802C373C (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1802C373C.c)
 *     _Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler_XamlAltTabViewController_void_(__cdecl_XamlAltTabViewController::_)(Platform::Object___Windows::UI::Xaml::Input::KeyRoutedEventArgs__)__::_1_::dtor$1 @ 0x180777F0D (_Windows--UI--Xaml--Input--KeyEventHandler--KeyEventHandler_XamlAltTabViewControlle_ea_180777F0D.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$1 @ 0x18077800B (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemCloseInvokedEventHand_ea_18077800B.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$1 @ 0x18077810B (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--_ea_18077810B.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x18077820B (_WindowsInternal--ComposableShell--Experiences--Switcher--BecameEmptyEventHandler--_ea_18077820B.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x18077830B (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_18077830B.c)
 *     _Windows::Foundation::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel___::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel____GuidedSnapAssistViewController_void_(__cdecl_GuidedSnapAssistViewController::_)(Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel__)__::_1_::dtor$1 @ 0x180787DF9 (_Windows--Foundation--TypedEventHandler_Platform--Object___WindowsInternal--Composa_ea_180787DF9.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$1 @ 0x180787EF7 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemCloseInvokedEventHand_ea_180787EF7.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$1 @ 0x180787FF7 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--_ea_180787FF7.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x1807880F7 (_WindowsInternal--ComposableShell--Experiences--Switcher--BecameEmptyEventHandler--_ea_1807880F7.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x1807881F7 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1807881F7.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_VirtualDesktopSwitcherController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$1 @ 0x18078C2F3 (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_18078C2F3.c)
 * Callees:
 *     ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x18006AE48 (-Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z.c)
 */

void __fastcall Platform::Details::__abi_CapturePtr::~__abi_CapturePtr(
        struct Platform::Details::__abi_CaptureBase **this)
{
  Platform::Details::__abi_CaptureBase::Delete(
    (Platform::Details::__abi_CaptureBase *)this,
    this[32],
    (struct Platform::Details::__abi_CaptureBase *)this);
}
