/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180463074
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1804763F0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1800BBB00 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AEA30 (Windows--Internal--ComTaskPool--QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___.c)
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF10C (_lambda_41fdec79629b933043b6dd44cc33a98f_--_lambda_41fdec79629b933043b6dd44cc33a98f_.c)
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::__lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF3EC (_lambda_41fdec79629b933043b6dd44cc33a98f_--__lambda_41fdec79629b933043b6dd44cc33a98f_.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF58 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4?$atomic@UtagRECT@@@std@@QEAA?AUtagRECT@@U2@@Z @ 0x18045B5F0 (--4-$atomic@UtagRECT@@@std@@QEAA-AUtagRECT@@U2@@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1804658E0 (-StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        const struct ViewOptions *a4)
{
  __int64 *v8; // rax
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  signed int v17; // eax
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  const struct ViewOptions *v25; // [rsp+80h] [rbp-80h]
  _QWORD v26[40]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[416]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v19 = a2;
  v25 = a4;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v26,
    (__int64)"OnInputAppRequestedShowActivity_Queued");
  v26[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v26,
    a2);
  if ( a2 == *(_DWORD *)(a1 + 764) )
  {
    *(_DWORD *)(a1 + 768) = 1;
    v23 = *a3;
    std::atomic<tagRECT>::operator=(a1 + 1040, &v24, &v23);
  }
  *(_QWORD *)v20 = 0LL;
  v21 = (__int64 *)v20;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v21);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 1185LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  v22 = a1;
  v13 = lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_(
          (__int64)v27,
          (int *)&v19,
          a3,
          a4,
          (__int64 *)v20,
          &v22,
          (__int64)v26);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___(
          v15,
          v14,
          *(_DWORD *)(a1 + 1172),
          v13);
  lambda_41fdec79629b933043b6dd44cc33a98f_::__lambda_41fdec79629b933043b6dd44cc33a98f_((__int64)v27);
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 1314LL;
    goto LABEL_7;
  }
  v16 = *(_BYTE *)(a1 + 1176);
  *(_BYTE *)(a1 + 1176) = 1;
  if ( !v16 )
  {
    v17 = SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", 1);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x529,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
  v10 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v20);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v26);
  std::vector<Geometry::CRect>::_Tidy((__int64)a4 + 32);
  return (unsigned int)v10;
}
