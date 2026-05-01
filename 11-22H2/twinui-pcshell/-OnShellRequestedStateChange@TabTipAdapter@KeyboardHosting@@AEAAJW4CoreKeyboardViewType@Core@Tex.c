/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180528A64 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_180528A64.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528C18 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180063150 (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18051E650 (--$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$ShowRejected@IAEAY0BH@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEAY0BH@$$CBG@Z @ 0x18051E8E4 (--$ShowRejected@IAEAY0BH@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEAY0BH@$$CBG@Z.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IAEBQEBGAEAU?$atomic@_N@std@@AEA_NAEA_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAIAEBQEBGAEAU?$atomic@_N@std@@AEA_N4@Z @ 0x18051EB14 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IAEBQEBGAEAU-$atomic@_N@std@@A.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1805214BC (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180521F28 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1805220DC (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180524E48 (-IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18052906C (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18052B7D4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v8; // rdx
  unsigned int InputAppState; // r14d
  int IsReady; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // r8
  IhmNotification *v15; // rcx
  bool v16; // r8
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v18 = a2;
  v20[0] = a4;
  if ( KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled((KeyboardHosting::TabTipAdapter *)a1) )
  {
    v18 = a2;
    TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int,unsigned short const (&)[23]>(&v18, v8);
    return 0LL;
  }
  InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState(a1);
  v19 = InputAppState;
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const * const &,std::atomic<bool> &,bool &,bool &>(
    (struct wil::details::IFailureCallback *)v21,
    &v18,
    &v19,
    v20,
    (char *)(a1 + 374),
    (char *)(a1 + 376),
    (char *)(a1 + 388));
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)a1);
  v11 = IsReady;
  if ( IsReady >= 0 )
  {
    if ( InputAppState != 1 || !*(_BYTE *)(a1 + 374) )
    {
      IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(a1, v18, a3, 1);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 2674LL;
        goto LABEL_26;
      }
      goto LABEL_22;
    }
    if ( !*(_BYTE *)(a1 + 437) && *(_BYTE *)(a1 + 433) )
    {
      IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, 1);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 2664LL;
        goto LABEL_26;
      }
      IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest(a1, v18, a3, 1);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 2668LL;
        goto LABEL_26;
      }
LABEL_22:
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v21);
      return 0LL;
    }
    v13 = v18;
    IsReady = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 128) + 48LL))(
                *(_QWORD *)(a1 + 128),
                v18,
                &v19);
    v11 = IsReady;
    if ( IsReady < 0 )
    {
      v12 = 2641LL;
      goto LABEL_26;
    }
    if ( v19 == 1 )
    {
      IsReady = KeyboardHosting::TabTipAdapter::ProcessShowRequest(a1, v13);
      v11 = IsReady;
      if ( IsReady < 0 )
      {
        v12 = 2645LL;
        goto LABEL_26;
      }
      *a5 = 1;
      if ( v13 )
        goto LABEL_22;
      LOBYTE(v15) = 1;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 380);
      LODWORD(v20[0]) = *(_DWORD *)(a1 + 384);
      TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
        v20,
        &v18,
        v14);
      v15 = 0LL;
    }
    IhmNotification::SendKeyboardSetVisible(v15, 0, v16);
    goto LABEL_22;
  }
  v12 = 2631LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v21);
  return v11;
}
