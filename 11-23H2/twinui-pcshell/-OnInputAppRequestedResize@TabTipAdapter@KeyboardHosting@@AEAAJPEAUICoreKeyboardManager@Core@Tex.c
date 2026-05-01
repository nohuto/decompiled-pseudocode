/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_cdcc1bc27705add1e5555c0a536f3df3___ @ 0x18020CAE8 (wil--ScopeExit__lambda_cdcc1bc27705add1e5555c0a536f3df3___.c)
 *     _lambda_cdcc1bc27705add1e5555c0a536f3df3_::_lambda_cdcc1bc27705add1e5555c0a536f3df3_ @ 0x18020CB14 (_lambda_cdcc1bc27705add1e5555c0a536f3df3_--_lambda_cdcc1bc27705add1e5555c0a536f3df3_.c)
 *     wil::details::ScopeExitFn__lambda_cdcc1bc27705add1e5555c0a536f3df3___::_ScopeExitFn__lambda_cdcc1bc27705add1e5555c0a536f3df3___ @ 0x18020CB60 (wil--details--ScopeExitFn__lambda_cdcc1bc27705add1e5555c0a536f3df3___--_ScopeExitFn__lambda_cdcc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18051EC84 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180521464 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z @ 0x180522700 (-FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z.c)
 *     ?GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180523084 (-GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@T.c)
 *     ?GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z @ 0x180523E3C (-GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z.c)
 *     ?InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1805242D0 (-InitializeViewInfosIfNeeded@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x1805249B4 (-InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x18052B164 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 *v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int Ptr_high; // ebx
  int ViewRect; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+20h] [rbp-E0h]
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+41h] [rbp-BFh] BYREF
  bool v21[2]; // [rsp+42h] [rbp-BEh] BYREF
  RTL_SRWLOCK v22; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-B4h]
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v29; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v21[0] = 0;
  v5 = lambda_cdcc1bc27705add1e5555c0a536f3df3_::_lambda_cdcc1bc27705add1e5555c0a536f3df3_(
         (__int64 *)&v27.left,
         (__int64 *)this + 4,
         (__int64)v21);
  wil::ScopeExit__lambda_cdcc1bc27705add1e5555c0a536f3df3___((__int64)v26, v5);
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v27.left);
  v22.Ptr = (PVOID)0xB00000000LL;
  v6 = KeyboardHosting::TabTipAdapter::InitializeViewInfosIfNeeded(this);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6,
      v18);
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, RTL_SRWLOCK *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v22);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7,
      v18);
  KeyboardHosting::TabTipAdapter::GetFirstViewTypeIfExists(
    this,
    LODWORD(v22.Ptr),
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)((char *)&v22.Ptr + 4));
  *(_QWORD *)v25 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v25);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v20 = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 64LL))(
           a3,
           &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1486LL;
      goto LABEL_7;
    }
    Ptr_high = HIDWORD(v22.Ptr);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v30,
      (__int64)"OnInputAppRequestedResizeActivity");
    v30[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v30,
      (unsigned int)v22.Ptr,
      Ptr_high);
    v29 = 0LL;
    ViewRect = KeyboardHosting::TabTipAdapter::GetViewRect(this, LODWORD(v22.Ptr), &v29);
    v9 = ViewRect;
    if ( ViewRect >= 0 )
    {
      v19 = 0;
      v28 = 0LL;
      *(float *)&v27.left = (float)v29.left;
      *(float *)&v27.top = (float)v29.top;
      *(float *)&v27.right = (float)(v29.right - v29.left);
      *(float *)&v27.bottom = (float)(v29.bottom - v29.top);
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct tagRECT *, char, __int128 *, char *))(**((_QWORD **)this + 15) + 184LL))(
              *((_QWORD *)this + 15),
              LODWORD(v22.Ptr),
              *(_QWORD *)v25,
              &v27,
              v20,
              &v28,
              &v19);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v29 = 0LL;
        v27.left = (int)*(float *)&v28;
        v27.top = (int)*((float *)&v28 + 1);
        v27.right = (int)(float)(*((float *)&v28 + 2) + *(float *)&v28);
        v27.bottom = (int)(float)(*((float *)&v28 + 3) + *((float *)&v28 + 1));
        v16 = KeyboardHosting::TabTipAdapter::FireInputPaneShowingEvent(this, LODWORD(v22.Ptr), &v27, &v29);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v9 = 0;
          v23 = 0;
          if ( v19 )
          {
            v27.left = (int)*(float *)&v28;
            v27.top = (int)*((float *)&v28 + 1);
            v27.right = (int)(float)(*((float *)&v28 + 2) + *(float *)&v28);
            v27.bottom = (int)(float)(*((float *)&v28 + 3) + *((float *)&v28 + 1));
            v9 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(this, LODWORD(v22.Ptr), &v27);
            v23 = v9;
            v21[0] = v9 == 0;
          }
          v24 = HIDWORD(v22.Ptr);
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
            (__int64)v30,
            v9,
            &v22,
            &v24,
            (__int64 *)v25,
            &v20,
            &v19);
          if ( (v9 & 0x80000000) == 0 )
            goto LABEL_19;
          v13 = v9;
          v14 = 1515LL;
        }
        else
        {
          v13 = (unsigned int)v16;
          v14 = 1505LL;
        }
      }
      else
      {
        v13 = (unsigned int)v15;
        v14 = 1501LL;
      }
    }
    else
    {
      v13 = (unsigned int)ViewRect;
      v14 = 1491LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v13);
LABEL_19:
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v30);
    goto LABEL_20;
  }
  v10 = 1484LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
LABEL_20:
  wil::details::ScopeExitFn__lambda_cdcc1bc27705add1e5555c0a536f3df3___::_ScopeExitFn__lambda_cdcc1bc27705add1e5555c0a536f3df3___(v26);
  return v9;
}
