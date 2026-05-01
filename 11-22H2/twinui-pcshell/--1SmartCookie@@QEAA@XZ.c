/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x1803929D0
 * Callers:
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$3 @ 0x1802B4223 (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_1802B4223.c)
 *     _NPSMDesktopShellComponent::NPSMDesktopShellComponent_::_1_::dtor$4 @ 0x1802B4966 (_NPSMDesktopShellComponent--NPSMDesktopShellComponent_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$9 @ 0x1802B4E0F (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802B4E0F.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$10 @ 0x1802B4E28 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802B4E28.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$6 @ 0x1802B5454 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$7 @ 0x1802B546D (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$7.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$11 @ 0x1802B54D1 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$11.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$9 @ 0x1802B6643 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$9.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$17 @ 0x1802BC7DE (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$17.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$21 @ 0x1802BD18B (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$21.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$27 @ 0x1802BD221 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$27.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$30 @ 0x1802BD26C (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$30.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$17 @ 0x1802C1EE1 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$17.c)
 *     _VirtualDesktopCollection::VirtualDesktopCollection_::_1_::dtor$4 @ 0x1802C2D21 (_VirtualDesktopCollection--VirtualDesktopCollection_--_1_--dtor$4.c)
 *     _CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler_::_1_::dtor$3 @ 0x1802C4073 (_CVirtualDesktopSoftLandingHandler--CVirtualDesktopSoftLandingHandler_--_1_--dtor$3.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$4 @ 0x1804A3172 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--AppViewListener_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$3 @ 0x1806F987B (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1806F987B.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$4 @ 0x1806F988E (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1806F988E.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this);
}
