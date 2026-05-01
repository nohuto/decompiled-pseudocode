/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister_0 @ 0x180080918
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18007F830 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1802E1088 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18055EF48 (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x18055EF70 (--1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18055F728 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18055F728.c)
 *     ??1VirtualDesktopItemCollection@@UEAA@XZ @ 0x180565C08 (--1VirtualDesktopItemCollection@@UEAA@XZ.c)
 *     ?Destroy@VirtualDesktopItemCollection@@UEAAXXZ @ 0x180565F40 (-Destroy@VirtualDesktopItemCollection@@UEAAXXZ.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x18076A52C (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18076D32C (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18076D32C.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18006ED60 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister_0(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
    return Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease(v1);
  }
  return result;
}
