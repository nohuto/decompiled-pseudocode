/*
 * XREFs of ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x1805AC5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802E5E64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AAF48 (--1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x1805AB28C (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1805AC78C (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1805AE658 (-StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerT.c)
 *     ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x1805AF23C (-Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetCortanaAppDefaultLaunchPosition(
        VoiceAssistantPositioner *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rax
  int v5; // edi
  int MonitorInformation; // eax
  HMONITOR v7; // r8
  unsigned int v8; // ebx
  int v9; // ebx
  HMONITOR v10; // r8
  int v11; // eax
  struct tagRECT v12; // xmm0
  int v14; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v15; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v16; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v17; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v18; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v19; // [rsp+B8h] [rbp-50h] BYREF
  RECT rc; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v22[40]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"VAPositioner_GetCortanaAppDefaultLaunchPositionActivity");
  v22[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v22);
  rc = (RECT)*((_OWORD *)this + 18);
  v4 = MonitorFromRect(&rc, 1u);
  v5 = (int)v4;
  MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                         (VoiceAssistantPositioner *)((char *)this - 104),
                         v4,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v14,
                         &v17,
                         &v16,
                         (struct tagRECT *)&v15.right);
  v8 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v9 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x198, v5, v7);
    v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x2EC, v5, v10);
    v18 = 0LL;
    v19 = rc;
    VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
      (__int64)&v17,
      &v21,
      v14,
      v9,
      v11,
      (__int64)&v17,
      &v16,
      (struct tagRECT *)&v15.right,
      (__int128 *)&v19.left,
      &v18,
      0);
    v12 = v21;
    *a2 = v21;
    v19 = v12;
    v18 = rc;
    VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
      (VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v22,
      &v18,
      &v19);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)MonitorInformation);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::~VAPositioner_GetCortanaAppDefaultLaunchPositionActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v22);
  return v8;
}
