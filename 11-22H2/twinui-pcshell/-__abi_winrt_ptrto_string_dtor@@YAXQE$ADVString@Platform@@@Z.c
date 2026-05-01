/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1801BF7CC
 * Callers:
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1802BD821 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$5 @ 0x1802C35E8 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$5.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x1802C5E9D (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x1802C5EAF (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_Windows::Foundation::Size_::ToString_::_1_::dtor$1 @ 0x180766AE6 (_Platform--Details--CustomBox_Windows--Foundation--Size_--ToString_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_Windows::Foundation::Size_::ToString_::_1_::dtor$0 @ 0x180766AF2 (_Platform--Details--CustomBox_Windows--Foundation--Size_--ToString_--_1_--dtor$0.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$2 @ 0x180773C1D (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$2.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x18077DCA3 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$2 @ 0x18077DE53 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$2.c)
 *     _XamlAllUpViewController::CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_::_1_::dtor$12 @ 0x18077E43D (_XamlAllUpViewController--CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_--_1_--dtor$12.c)
 *     _XamlAllUpViewController::CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_::_1_::dtor$14 @ 0x18077E464 (_XamlAllUpViewController--CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_::_1_::dtor$18 @ 0x18077E4A6 (_XamlAllUpViewController--CreateAndAppendTaskGroupVirtualDesktopContextMenuItems_--_1_--dtor$18.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x18077ECF4 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$12 @ 0x18077ED1E (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$12.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$16 @ 0x18077ED60 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$16.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$22 @ 0x18077EDB7 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$22.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x18077FAA5 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x18077FAB1 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x18077FE4E (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x1807800A7 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x180785CBD (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
