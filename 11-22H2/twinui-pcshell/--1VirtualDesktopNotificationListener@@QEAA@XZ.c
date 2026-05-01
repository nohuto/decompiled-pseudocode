/*
 * XREFs of ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18055EF48
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$18 @ 0x1802C2F53 (_TaskViewHost--TaskViewHost_--_1_--dtor$18.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18006ED60 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister_0 @ 0x180080918 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_180080918.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this)
{
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister_0((__int64)this);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)this + 1);
}
