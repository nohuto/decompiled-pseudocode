/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x18000FA10
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18000F848 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x180232A96 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18042EE4C (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18042EEA0 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x18049F5C4 (--1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18049FCD8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049FCD8.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x1804A37C0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 *     ?v_DismissView@CSnapAssistViewHost@@MEAAXXZ @ 0x1804A5380 (-v_DismissView@CSnapAssistViewHost@@MEAAXXZ.c)
 *     ??1VirtualDesktopItemCollection@@UEAA@XZ @ 0x1804A8E68 (--1VirtualDesktopItemCollection@@UEAA@XZ.c)
 *     ?Destroy@VirtualDesktopItemCollection@@UEAAXXZ @ 0x1804A91C0 (-Destroy@VirtualDesktopItemCollection@@UEAAXXZ.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180600AD8 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x180602B94 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_180602B94.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2);
    return Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease(v1);
  }
  return result;
}
