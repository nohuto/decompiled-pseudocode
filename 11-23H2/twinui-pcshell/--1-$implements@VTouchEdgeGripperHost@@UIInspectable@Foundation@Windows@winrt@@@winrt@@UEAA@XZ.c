/*
 * XREFs of ??1?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEAA@XZ @ 0x180466248
 * Callers:
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$0 @ 0x1802B6806 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6806.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::WindowsTracker_::_1_::dtor$0 @ 0x1802B92C3 (_winrt--Windows--Internal--Shell--factory_implementation--WindowsTracker--WindowsTracker_--_1_--.c)
 *     _ListenerWindow::WndProc_::_1_::dtor$0 @ 0x1802BA9D0 (_ListenerWindow--WndProc_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController_::_1_::dtor$0 @ 0x1802BADF1 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_1802BADF1.c)
 *     _TouchEdgeGripperHost::TouchEdgeGripperHost_::_1_::dtor$0 @ 0x1802C574B (_TouchEdgeGripperHost--TouchEdgeGripperHost_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 */

__int64 __fastcall winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::~implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(a1);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
