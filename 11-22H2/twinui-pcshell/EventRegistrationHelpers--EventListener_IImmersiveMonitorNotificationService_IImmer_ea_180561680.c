/*
 * XREFs of EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x180561680
 * Callers:
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1805626B8 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x1800721E0 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x1800739D0 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x180081474 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180081474.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x180560ACC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x56.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)a1);
  v10 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification_____(
         &v10,
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\EventRegistrationHelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 61LL;
    goto LABEL_5;
  }
  v7 = v10;
  if ( a1[1] != v10 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef(&v11);
    v11 = a1[1];
    a1[1] = v7;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v11);
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0(&v10);
  return v5;
}
