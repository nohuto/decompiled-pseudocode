/*
 * XREFs of ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18006B480 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180070510 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180074724 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017C784 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1803030C4 (--1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180306A84 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307FFC (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180308490 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180309100 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180309338 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     WPP_SF_Sd @ 0x180309AA8 (WPP_SF_Sd.c)
 *     WPP_SF_Sdq @ 0x180309D10 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::SetApplicationWindow(__int64 a1, HWND a2, int a3, unsigned int a4)
{
  int v8; // r8d
  char v9; // bp
  int v10; // esi
  HWND ApplicationWindow; // r15
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int64 v13; // rcx
  _QWORD v15[40]; // [rsp+30h] [rbp-188h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"SetApplicationWindow");
  v15[0] = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetApplicationWindow *)v15,
    *(const unsigned __int16 **)(a1 + 472));
  v9 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, v8, *(_QWORD *)(a1 + 472), *(_DWORD *)(a1 + 480), (char)a2);
  if ( *(_BYTE *)(a1 + 616) )
  {
    v10 = -2147019873;
    goto LABEL_31;
  }
  v10 = 0;
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
  if ( a2 != ApplicationWindow
    || CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11,
        (unsigned int)&WPP_c876bcf2d1bc3ecf788b84e16676c7e7_Traceguids,
        *(_QWORD *)(a1 + 472),
        *(_DWORD *)(a1 + 480));
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
    {
      if ( a2 == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
        || (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((const RECT *)(a1 + 176))
         || !ImmersiveApplicationLayout::AreAppViewDataEqual(
               (ImmersiveApplicationLayout *)(a1 + 208),
               (const struct APPLICATION_VIEW_DATA *)(a1 + 252),
               v12))
        && *(_DWORD *)(a1 + 192) <= *(_DWORD *)(a1 + 200)
        && *(_DWORD *)(a1 + 196) <= *(_DWORD *)(a1 + 204)
        && (*(_BYTE *)(a1 + 388) & 2) != 0 )
      {
        v9 = 0;
      }
      else if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
      {
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v13);
      }
    }
    if ( !a3 && a2 == ApplicationWindow && (*(_BYTE *)(a1 + 388) & 0x20) != 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::OnActivationRequested((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
      goto LABEL_28;
    }
    if ( !v9 )
      goto LABEL_31;
    if ( a3 == 2 )
    {
      v10 = CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(a1 + 176, a2, a4);
      if ( v10 < 0 )
        goto LABEL_31;
LABEL_28:
      CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 112));
      goto LABEL_31;
    }
    v10 = CImmersiveApp::_SetApplicationWindowSynch(a1 - 112, a2, v12, 0LL);
    if ( v10 >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
  }
LABEL_31:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15, v10);
  CImmersiveAppTelemetry::SetApplicationWindow::~SetApplicationWindow((CImmersiveAppTelemetry::SetApplicationWindow *)v15);
  return (unsigned int)v10;
}
