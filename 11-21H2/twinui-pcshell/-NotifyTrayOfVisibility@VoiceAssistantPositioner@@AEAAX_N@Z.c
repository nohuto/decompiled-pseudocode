/*
 * XREFs of ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804F5D10
 * Callers:
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F3D3C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804F960C (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804F2F74 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F33E4 (--1VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x1804F6D68 (-StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804F7030 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VoiceAssistantPositioner::NotifyTrayOfVisibility(VoiceAssistantPositioner *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax
  _QWORD v7[40]; // [rsp+20h] [rbp-158h] BYREF

  v2 = a2;
  if ( *((_BYTE *)this + 424) != a2 )
  {
    wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v7);
    v7[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::`vftable';
    VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::StartActivity(
      (VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity *)v7,
      v2);
    v4 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, v2, 0LL);
    *((_BYTE *)this + 424) = v2;
    wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::~VAPositioner_NotifyTrayOfVisibilityActivity((VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity *)v7);
  }
}
