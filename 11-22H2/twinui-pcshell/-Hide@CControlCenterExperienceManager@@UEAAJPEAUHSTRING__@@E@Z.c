/*
 * XREFs of ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60
 * Callers:
 *     ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180071E90 (-OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DE790 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18041F830 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnControlCenterShowPendingTimerTick@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804204AC (-OnControlCenterShowPendingTimerTick@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180420570 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D750 (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DE5C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041F6D8 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180422018 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x180423A8C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804241AC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::Hide(CControlCenterExperienceManager *this, HSTRING a2, char a3)
{
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rdi
  char *v8; // rax
  int v9; // edx
  int v10; // ecx
  char v11; // al
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  *((_BYTE *)this + 728) = a3 != 0;
  if ( *((_DWORD *)this + 32) != 2 )
    goto LABEL_2;
  if ( !*((_BYTE *)this + 730) )
    goto LABEL_10;
  v6 = (HSTRING)*((_QWORD *)this + 90);
  if ( !v6 )
    goto LABEL_10;
  StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v8 = (char *)((char *)WindowsGetStringRawBuffer(a2, 0LL) - (char *)StringRawBuffer);
  do
  {
    v9 = *(unsigned __int16 *)&v8[(_QWORD)StringRawBuffer];
    v10 = *StringRawBuffer - v9;
    if ( v10 )
      break;
    ++StringRawBuffer;
  }
  while ( v9 );
  if ( !v10 )
    v11 = 1;
  else
LABEL_10:
    v11 = 0;
  if ( a2 )
  {
    if ( !v11 )
    {
      v12 = CControlCenterExperienceManager::RaiseHideDeepLinkRequestedEvent(
              (CControlCenterExperienceManager *)((char *)this - 32),
              a2,
              *((_BYTE *)this + 728));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x265,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v12,
          v16[0]);
      goto LABEL_2;
    }
    goto LABEL_18;
  }
  if ( v11 )
  {
LABEL_18:
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
    *(_QWORD *)v16 = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(v16, 6LL);
    v15 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        v16[0]);
      ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v16);
      return v14;
    }
    wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)v16);
LABEL_2:
    *((_BYTE *)this + 728) = 0;
    return 0LL;
  }
  v13 = CControlCenterExperienceManager::HideExperience((CControlCenterExperienceManager *)((char *)this - 32));
  v14 = v13;
  if ( v13 >= 0 )
    goto LABEL_2;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25F,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v13,
    v16[0]);
  return v14;
}
