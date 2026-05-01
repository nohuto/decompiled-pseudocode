/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x180180ECC
 * Callers:
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x18022255D (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x18022256F (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1802235E8 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_Windows::Foundation::Size_::ToString_::_1_::dtor$1 @ 0x1804257E2 (_Platform--Details--CustomBox_Windows--Foundation--Size_--ToString_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_Windows::Foundation::Size_::ToString_::_1_::dtor$0 @ 0x1804257EE (_Platform--Details--CustomBox_Windows--Foundation--Size_--ToString_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x180442057 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$9 @ 0x180442931 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$11 @ 0x18044295B (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$11.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$15 @ 0x18044299D (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$15.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$21 @ 0x1804429F7 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$21.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x180443686 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x180443692 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x1804438CE (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x180443AFE (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x1804476E9 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
