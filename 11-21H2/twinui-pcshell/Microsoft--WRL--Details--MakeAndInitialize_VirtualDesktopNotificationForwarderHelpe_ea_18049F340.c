/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x18049F340
 * Callers:
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18049FCD8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049FCD8.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x180043228 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     ??0?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x180051E0C (--0-$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@Event.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification______0(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>((__int64)v5);
    *v6 = off_180644290;
    v8 = v6;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
