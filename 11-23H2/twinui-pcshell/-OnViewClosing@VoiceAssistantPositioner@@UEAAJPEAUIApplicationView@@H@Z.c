/*
 * XREFs of ?OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1805ADC00
 * Callers:
 *     ?OnViewClosing@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1802A6050 (-OnViewClosing@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802E5E64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AB050 (--1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805AB8EC (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1805AEB14 (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805AEEC4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::OnViewClosing(VoiceAssistantPositioner *this, struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"VAPositioner_OnViewClosingActivity");
  *(_QWORD *)v7 = &VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity *)v7,
    a2);
  v4 = VoiceAssistantPositioner::ControlLostHelper((VoiceAssistantPositioner *)((char *)this - 104), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v4);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity::~VAPositioner_OnViewClosingActivity((VoiceAssistantPositionerTelemetry::VAPositioner_OnViewClosingActivity *)v7);
  return v5;
}
