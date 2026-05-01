/*
 * XREFs of ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180063150 (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??$ShowRequestReceived@AEAIAEAIIAEAU?$atomic@_N@std@@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI0$$QEAIAEAU?$atomic@_N@std@@AEA_N3@Z @ 0x18051EA1C (--$ShowRequestReceived@AEAIAEAIIAEAU-$atomic@_N@std@@AEA_NAEA_N@TouchKeyboardExperienceTelemetry.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180521490 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180521F28 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1805220DC (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180529200 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18052B3B4 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18052B7D4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        unsigned int a3)
{
  KeyboardHosting::TabTipAdapter *v3; // rsi
  int IsReady; // ebx
  __int64 v8; // rdx
  int v10; // ebx
  bool v11; // r8
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, _BYTE *, char *, int *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  int v16; // eax
  char v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[7]; // [rsp+41h] [rbp-BFh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v3 = (KeyboardHosting::TabTipAdapter *)((char *)this - 8);
  v20 = a2;
  v19 = a3;
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)((char *)this - 8));
  if ( IsReady < 0 )
  {
    v8 = 1939LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return (unsigned int)IsReady;
  }
  LODWORD(v21) = KeyboardHosting::TabTipAdapter::GetInputAppState((__int64)v3);
  v10 = (int)v21;
  TouchKeyboardExperienceTelemetryLogger::ShowRequestReceived<unsigned int &,unsigned int &,unsigned int,std::atomic<bool> &,bool &,bool &>(
    (int *)&v20,
    &v19,
    (int *)&v21,
    (char *)this + 366,
    (char *)this + 429,
    (char *)this + 425);
  if ( v10 == 1 && *((_BYTE *)this + 366) )
  {
    if ( *((_BYTE *)this + 429) || !*((_BYTE *)this + 425) )
    {
      IsReady = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 15) + 48LL))(
                  *((_QWORD *)this + 15),
                  a3,
                  &v20);
      if ( IsReady < 0 )
      {
        v8 = 1956LL;
        goto LABEL_3;
      }
      if ( v20 != 1 )
      {
        IhmNotification::SendKeyboardSetVisible(0LL, 0, v11);
        return 0LL;
      }
      v12 = *((_QWORD *)this + 14);
      v18[0] = 0;
      v17 = 0;
      v19 = 0;
      v21 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v12 + 304LL);
      v22[0] = (__int64 *)&v21;
      v14 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(v22);
      v15 = v13(v12, 5LL, v18, &v17, &v19, v14);
      IsReady = v15;
      if ( v15 >= 0 )
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v23,
          (__int64)"OnShellRequestedShowActivity");
        v23[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v23);
        v22[0] = v21;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v22);
        v16 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData(v3);
        IsReady = v16;
        if ( v16 >= 0 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v23);
          Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v21);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B0,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v16);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v23);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7AD,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v15);
      }
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v21);
      return (unsigned int)IsReady;
    }
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(v3, 1);
    if ( IsReady < 0 )
    {
      v8 = 1980LL;
      goto LABEL_3;
    }
    IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest((__int64)v3, a3, a2, 0);
    if ( IsReady < 0 )
    {
      v8 = 1984LL;
      goto LABEL_3;
    }
  }
  else
  {
    IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest((__int64)v3, a3, a2, 0);
    if ( IsReady < 0 )
    {
      v8 = 1990LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
