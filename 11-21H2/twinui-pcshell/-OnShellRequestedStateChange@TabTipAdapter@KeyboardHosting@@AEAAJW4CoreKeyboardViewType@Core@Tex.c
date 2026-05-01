/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x180470864 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1804756F0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180476FA0 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18045EA30 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18046C4E0 (--$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_NAEA_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEA_N33@Z @ 0x18046C7F4 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_NAEA_N@OnShellRe.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F35C (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180470054 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1804701EC (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180471FBC (-IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x180479F9C (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18047ABCC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@45678@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180481E40 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int IsReady; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // r8
  bool v17; // r8
  IhmNotification *v18; // rcx
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int InputAppState; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v20 = a2;
  if ( KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled((KeyboardHosting::TabTipAdapter *)a1) )
    return 0LL;
  v22 = KeyboardHosting::ShellRequestedStateChangeReasonToString(a4);
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(RTL_SRWLOCK **)(a1 + 64));
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const *,bool &,bool &,bool &>(
    (struct wil::details::IFailureCallback *)v23,
    &v20,
    &InputAppState,
    &v22,
    (char *)(a1 + 384),
    (char *)(a1 + 388),
    (char *)(a1 + 400));
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)a1, v7, v8, v9);
  v11 = IsReady;
  if ( IsReady >= 0 )
  {
    if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*(RTL_SRWLOCK **)(a1 + 64)) == 1
      && *(_BYTE *)(a1 + 384) )
    {
      if ( !*(_BYTE *)(a1 + 492) && *(_BYTE *)(a1 + 489) )
      {
        LOBYTE(v13) = 1;
        IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(
                    (KeyboardHosting::TabTipAdapter *)a1,
                    v13,
                    v14);
        v11 = IsReady;
        if ( IsReady < 0 )
        {
          v12 = 3046LL;
          goto LABEL_26;
        }
        IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest(a1, v20, a3, 1);
        v11 = IsReady;
        if ( IsReady < 0 )
        {
          v12 = 3050LL;
          goto LABEL_26;
        }
        goto LABEL_22;
      }
      v15 = v20;
      IsReady = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
                  *(_QWORD *)(a1 + 112) + 16LL,
                  a3,
                  v20,
                  &InputAppState);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 3024LL;
        goto LABEL_26;
      }
      if ( InputAppState == 1 )
      {
        IsReady = KeyboardHosting::TabTipAdapter::ProcessShowRequest(a1, v15);
        v11 = IsReady;
        if ( IsReady < 0 )
        {
          v12 = 3028LL;
          goto LABEL_26;
        }
        if ( v15 )
          goto LABEL_22;
        v18 = *(IhmNotification **)(a1 + 64);
        if ( *(_DWORD *)(a1 + 528) != *((_DWORD *)v18 + 191) )
          goto LABEL_22;
        LOBYTE(v18) = 1;
      }
      else
      {
        InputAppState = *(_DWORD *)(a1 + 392);
        v20 = *(_DWORD *)(a1 + 396);
        TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
          &v20,
          &InputAppState,
          v16);
        v18 = 0LL;
      }
      IhmNotification::SendKeyboardSetVisible(v18, 0, v17);
    }
    else
    {
      IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(a1, v20, a3, 1);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 3056LL;
        goto LABEL_26;
      }
    }
LABEL_22:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v23);
    return 0LL;
  }
  v12 = 3014LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v23);
  return v11;
}
