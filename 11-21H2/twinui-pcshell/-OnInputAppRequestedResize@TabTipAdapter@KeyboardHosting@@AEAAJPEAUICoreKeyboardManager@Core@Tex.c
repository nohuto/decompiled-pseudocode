/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180473CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18022E688 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18045A67C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18045EC58 (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180460ACC (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180462F1C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18046C91C (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F2AC (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x18047A49C (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1804832C0 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ViewRect; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  LONG v16; // esi
  LONG v17; // r15d
  LONG v18; // r12d
  LONG v19; // r13d
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+20h] [rbp-E0h]
  bool v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v26[2]; // [rsp+42h] [rbp-BEh] BYREF
  RTL_SRWLOCK v27; // [rsp+44h] [rbp-BCh] BYREF
  struct tagRECT v28; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h]
  int v31[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33[2]; // [rsp+90h] [rbp-70h] BYREF
  char v34; // [rsp+A0h] [rbp-60h]
  _QWORD v35[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v24 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      *((_QWORD *)this + 3),
      a2);
  *(_QWORD *)&v29.right = &v24;
  v33[0] = v5;
  *(_QWORD *)&v29.left = 0LL;
  v33[1] = (__int64)&v24;
  v34 = 1;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v29.left);
  v27.Ptr = (PVOID)0xB00000000LL;
  v6 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(*((RTL_SRWLOCK **)this + 8));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1606LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6,
      v23);
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, RTL_SRWLOCK *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v27);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1607LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7,
      v23);
  TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
    *((RTL_SRWLOCK **)this + 8),
    (int)v27.Ptr,
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)((char *)&v27.Ptr + 4));
  *(_QWORD *)v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 1611LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v26[0] = 0;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, _BYTE *))(*(_QWORD *)a3 + 64LL))(
         a3,
         v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 1613LL;
    goto LABEL_11;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"OnInputAppRequestedResizeActivity");
  v35[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35,
    (unsigned int)v27.Ptr,
    HIDWORD(v27.Ptr));
  v29 = 0LL;
  ViewRect = TouchKeyboardExperienceManager::GetViewRect(*((RTL_SRWLOCK **)this + 8), (int)v27.Ptr, &v29);
  v9 = ViewRect;
  if ( ViewRect >= 0 )
  {
    v25 = 0;
    v32 = 0LL;
    *(float *)&v28.left = (float)v29.left;
    *(float *)&v28.top = (float)v29.top;
    *(float *)&v28.right = (float)(v29.right - v29.left);
    *(float *)&v28.bottom = (float)(v29.bottom - v29.top);
    v29 = v28;
    v15 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
            *((_QWORD *)this + 14),
            LODWORD(v27.Ptr),
            *(_QWORD *)v31,
            &v29,
            v26[0],
            &v32,
            &v25);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v29 = 0LL;
      v16 = (int)*(float *)&v32;
      v28.left = (int)*(float *)&v32;
      v17 = (int)*((float *)&v32 + 1);
      v28.top = (int)*((float *)&v32 + 1);
      v18 = (int)(float)(*((float *)&v32 + 2) + *(float *)&v32);
      v28.right = v18;
      v19 = (int)(float)(*((float *)&v32 + 1) + *((float *)&v32 + 3));
      v28.bottom = v19;
      v20 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
              *((KeyboardHosting::TabTipAdapter ***)this + 8),
              (unsigned int)v27.Ptr,
              &v28,
              &v29);
      v9 = v20;
      if ( v20 >= 0 )
      {
        v9 = 0;
        v30 = 0;
        if ( v25 )
        {
          v28.left = v16;
          v28.top = v17;
          v28.right = v18;
          v28.bottom = v19;
          v29 = v28;
          v9 = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
                 *((TouchKeyboardExperienceManager **)this + 8),
                 (unsigned int)v27.Ptr,
                 &v29);
          v30 = v9;
          v24 = v9 == 0;
        }
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
          (__int64)v35,
          v9,
          &v27,
          (unsigned int *)&v27.Ptr + 1,
          (__int64 *)v31,
          v26,
          &v25);
        if ( (v9 & 0x80000000) == 0 )
          goto LABEL_23;
        v13 = v9;
        v14 = 1642LL;
      }
      else
      {
        v13 = (unsigned int)v20;
        v14 = 1632LL;
      }
    }
    else
    {
      v13 = (unsigned int)v15;
      v14 = 1628LL;
    }
  }
  else
  {
    v13 = (unsigned int)ViewRect;
    v14 = 1618LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v13);
LABEL_23:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35);
LABEL_24:
  v34 = 0;
  LOBYTE(v11) = v24;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 560LL))(v5, v11);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x641,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v21);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v33);
  return v9;
}
