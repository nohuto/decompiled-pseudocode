/*
 * XREFs of ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180646B30
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor$8 @ 0x180649171 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180649171.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnGuidedSnapAssistCompletedEvent_::_1_::dtor$1 @ 0x18064951D (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--OnGuidedSnapA.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop_::_1_::dtor$0 @ 0x18064A8CC (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_18064A8CC.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned_::_1_::dtor$0 @ 0x18064A9E0 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_18064A9E0.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop_::_1_::dtor$3 @ 0x18064AFF1 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_18064AFF1.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops_::_1_::dtor$2 @ 0x18064B1FC (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_18064B1FC.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$2 @ 0x18067A8BB (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$5 @ 0x180779EB7 (_XamlAltTabViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$5.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180781717 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree_0(v2);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
