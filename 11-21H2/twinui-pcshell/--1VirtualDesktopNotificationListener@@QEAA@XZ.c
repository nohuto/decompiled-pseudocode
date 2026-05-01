/*
 * XREFs of ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18042EE4C
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$16 @ 0x180213B3B (_TaskViewHost--TaskViewHost_--_1_--dtor$16.c)
 * Callees:
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x18000FA10 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this)
{
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister((__int64)this);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)this + 1);
}
