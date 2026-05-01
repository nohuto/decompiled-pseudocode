/*
 * XREFs of ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F38F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802378EC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3284 (--1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F3550 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804F479C (-EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F6380 (-SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F670C (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804F7108 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804F960C (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F9B40 (-VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssist.c)
 *     ?VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1804F9BE4 (-VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@Vo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknown *v7; // rdx
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  VoiceAssistantPositioner *v11; // rdi
  int v13[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"VAPositioner_ControlGainedForActivationActivity");
  *(_QWORD *)v13 = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v13,
    a2,
    a4);
  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 288)) )
  {
    v11 = (VoiceAssistantPositioner *)(a1 - 120);
    updated = VoiceAssistantPositioner::CacheViewToManage(v11, a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 422LL;
      goto LABEL_18;
    }
    updated = VoiceAssistantPositioner::EnableVoicePositionerScenario(v11);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 423LL;
      goto LABEL_18;
    }
    updated = VoiceAssistantPositioner::UpdateManagedView(v11);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 424LL;
      goto LABEL_18;
    }
    updated = VoiceAssistantPositioner::SetForegroundOnView(v11, a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 425LL;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_ViewHandledByInitializePosition((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 288));
  v7 = *(struct IUnknown **)(a1 + 296);
  if ( !v7
    || !(unsigned int)SHIsSameObject((struct IUnknown *)a2, v7)
    || (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_TryPositionPendingView((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v13),
        updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 120)),
        v9 = updated,
        updated >= 0) )
  {
    updated = VoiceAssistantPositioner::EnableVoicePositionerScenario((VoiceAssistantPositioner *)(a1 - 120));
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 415LL;
      goto LABEL_18;
    }
    updated = VoiceAssistantPositioner::SetForegroundOnView((VoiceAssistantPositioner *)(a1 - 120), a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 416LL;
      goto LABEL_18;
    }
LABEL_19:
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
    v9 = 0;
    goto LABEL_20;
  }
  v10 = 413LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)updated);
LABEL_20:
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::~VAPositioner_ControlGainedForActivationActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v13);
  return v9;
}
