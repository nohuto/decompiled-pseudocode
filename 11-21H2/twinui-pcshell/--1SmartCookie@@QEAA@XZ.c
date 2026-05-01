/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x1802DB2BC
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$9 @ 0x180217294 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180217294.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$10 @ 0x1802172AD (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802172AD.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$19 @ 0x180217B19 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$19.c)
 *     _VirtualDesktopPerMonitorCollection::VirtualDesktopPerMonitorCollection_::_1_::dtor$4 @ 0x18021B2EE (_VirtualDesktopPerMonitorCollection--VirtualDesktopPerMonitorCollection_--_1_--dtor$4.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x18021B4A8 (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$6 @ 0x18021C2F9 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$7 @ 0x18021C312 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$7.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$11 @ 0x18021C376 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$11.c)
 *     _NPSMDesktopShellComponent::NPSMDesktopShellComponent_::_1_::dtor$4 @ 0x18021C8E8 (_NPSMDesktopShellComponent--NPSMDesktopShellComponent_--_1_--dtor$4.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$12 @ 0x18021E50F (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$12.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$13 @ 0x18021E92E (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$13.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$15 @ 0x18021EF1F (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$15.c)
 *     _CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler_::_1_::dtor$3 @ 0x18021F56A (_CVirtualDesktopSoftLandingHandler--CVirtualDesktopSoftLandingHandler_--_1_--dtor$3.c)
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$3 @ 0x18021F5DD (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_18021F5DD.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$19 @ 0x1802221A9 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$19.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$24 @ 0x180222226 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$24.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$25 @ 0x18022223F (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$25.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$28 @ 0x18022228A (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$28.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18035335C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)this);
}
