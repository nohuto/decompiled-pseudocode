/*
 * XREFs of ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0
 * Callers:
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180040540 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180042A30 (-OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180043E50 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004A4A0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A6890 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004DAFC (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18035307C (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18035350C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180354588 (-RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18035480C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803549EC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::Hide(CControlCenterExperienceManager *this, HSTRING a2, char a3)
{
  char v5; // al
  int v6; // eax
  unsigned int v7; // edi
  HSTRING v9; // rcx
  PCWSTR StringRawBuffer; // rdi
  char *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  *((_BYTE *)this + 672) = a3 != 0;
  if ( *((_DWORD *)this + 32) != 2 )
    goto LABEL_7;
  if ( !*((_BYTE *)this + 674) )
    goto LABEL_3;
  v9 = (HSTRING)*((_QWORD *)this + 83);
  if ( !v9 )
    goto LABEL_3;
  StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
  v11 = (char *)((char *)WindowsGetStringRawBuffer(a2, 0LL) - (char *)StringRawBuffer);
  do
  {
    v12 = *(unsigned __int16 *)&v11[(_QWORD)StringRawBuffer];
    v13 = *StringRawBuffer - v12;
    if ( v13 )
      break;
    ++StringRawBuffer;
  }
  while ( v12 );
  if ( !v13 )
    v5 = 1;
  else
LABEL_3:
    v5 = 0;
  if ( a2 )
  {
    if ( !v5 )
    {
      v14 = CControlCenterExperienceManager::RaiseHideRequestedEvent(
              (CControlCenterExperienceManager *)((char *)this - 32),
              a2,
              *((_BYTE *)this + 672));
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x213,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v14,
          v16[0]);
      goto LABEL_7;
    }
  }
  else if ( !v5 )
  {
    v6 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_7:
      *((_BYTE *)this + 672) = 0;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v16[0]);
    return v7;
  }
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
  *(_QWORD *)v16 = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(v16, 6LL);
  v15 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
  v7 = v15;
  if ( v15 >= 0 )
  {
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v16);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x208,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v15,
    v16[0]);
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v16);
  return v7;
}
