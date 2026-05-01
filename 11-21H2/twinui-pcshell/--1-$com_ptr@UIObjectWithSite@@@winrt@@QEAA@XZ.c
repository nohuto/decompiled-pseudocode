/*
 * XREFs of ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1803B5530
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::CalculateMACFlyoutPosition_::_1_::dtor$1 @ 0x1801D1405 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--CalculateMACF_ea_1801D1405.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$1 @ 0x180218498 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$1.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$5 @ 0x1802184CE (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$5.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$0 @ 0x180219962 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$0.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$2 @ 0x180219974 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::PenMenuSystemTrayManager_::_1_::dtor$4 @ 0x18021CA81 (_winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--PenMenu_ea_18021CA81.c)
 *     _TouchGestureSettings::TouchGestureSettings_::_1_::dtor$1 @ 0x18021CB9F (_TouchGestureSettings--TouchGestureSettings_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated_::_1_::dtor$8 @ 0x18021FF9D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--EnsureDashboard_ea_18021FF9D.c)
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$0 @ 0x18053D170 (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$0.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::dtor$13 @ 0x1805723B8 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager_::_1_::dtor$1 @ 0x1805B380F (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1805B380F.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView_::_1_::dtor$5 @ 0x1805C124E (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureFlyoutV_ea_1805C124E.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(a1);
  return result;
}
