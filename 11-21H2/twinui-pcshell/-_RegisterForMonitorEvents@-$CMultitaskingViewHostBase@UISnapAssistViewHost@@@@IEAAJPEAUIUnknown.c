/*
 * XREFs of ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x18060476C
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x180602AAC (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180602AAC.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::_RegisterForMonitorEvents(__int64 a1, IUnknown *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 80LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\TwinUI\\MultitaskingView\\inc\\baseviewhost.h",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1(
         (_QWORD *)(a1 + 96),
         (__int64)ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 81LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
