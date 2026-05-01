/*
 * XREFs of ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805D3230
 * Callers:
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D5250 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetAnimationClippingRect@ApplicationFlyoutView@@AEAA?AUtagRECT@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1805D275C (-GetAnimationClippingRect@ApplicationFlyoutView@@AEAA-AUtagRECT@@AEBURect@Foundation@Windows@win.c)
 *     ?GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@XZ @ 0x1805D28CC (-GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA-AU-$pair@URect@Foundation@Windows@winrt@@.c)
 */

void __fastcall ApplicationFlyoutView::TryShowHideWindow(ApplicationFlyoutView *this, HWND hWnd, unsigned __int8 a3)
{
  int v3; // esi
  int v6; // ebx
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  TaskbarHelpers *v19; // rax
  HMONITOR v20; // rdx
  HWND TrayWindowForMonitor; // rax
  int v22; // [rsp+20h] [rbp-A8h]
  int v23; // [rsp+20h] [rbp-A8h]
  int v24; // [rsp+20h] [rbp-A8h]
  int v25; // [rsp+20h] [rbp-A8h]
  int pvParam; // [rsp+44h] [rbp-84h] BYREF
  RECT *p_rc; // [rsp+48h] [rbp-80h]
  float v28[4]; // [rsp+50h] [rbp-78h] BYREF
  int v29; // [rsp+60h] [rbp-68h]
  ApplicationFlyoutView *v30; // [rsp+68h] [rbp-60h]
  HWND v31; // [rsp+70h] [rbp-58h]
  RECT rc; // [rsp+78h] [rbp-50h] BYREF
  struct tagRECT v33; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = a3;
  v30 = this;
  v31 = hWnd;
  ApplicationFlyoutView::GetRectAndTaskbarLocation((__int64)this, (__int64)v28);
  if ( v29 )
  {
    if ( v29 == 1 )
    {
      v6 = v3 + 79;
    }
    else if ( v29 == 2 )
    {
      v6 = (v3 ^ 1) + 77;
    }
    else
    {
      v6 = (v3 ^ 1) + 79;
    }
  }
  else
  {
    v6 = v3 + 77;
  }
  rc = 0LL;
  p_rc = 0LL;
  rc = *ApplicationFlyoutView::GetAnimationClippingRect(
          this,
          &v33,
          (const struct winrt::Windows::Foundation::Rect *)v28);
  p_rc = &rc;
  if ( !SystemParametersInfoW(0x1042u, 0, &pvParam, 0) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x111,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v7);
  if ( !(_BYTE)v3 )
  {
    if ( pvParam )
    {
      v14 = DwmpBeginTransitionRequest(57LL);
      if ( v14 >= 0 )
      {
        v16 = DwmpTransitionWindowWithRects(hWnd, v6 | 0x10200000u, 0LL, 0LL, 0LL, 0LL, &rc);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x136,
            (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v16);
        v17 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 1) + 24LL))(
                *((_QWORD *)this + 1),
                hWnd,
                1LL);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x137,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v17,
            v25);
        v18 = DwmpEndTransitionRequest(57LL);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x138,
            (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v18);
        goto LABEL_32;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12F,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v14);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 1) + 24LL))(
            *((_QWORD *)this + 1),
            hWnd,
            1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13C,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v15,
        v22);
LABEL_32:
    if ( GetForegroundWindow() == hWnd )
    {
      v19 = (TaskbarHelpers *)MonitorFromRect(&rc, 1u);
      TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v19, v20);
      SetForegroundWindow(TrayWindowForMonitor);
    }
    return;
  }
  if ( !SetWindowPos(hWnd, HWND_MESSAGE|0x2LL, (int)v28[0], (int)v28[1], (int)v28[2], (int)v28[3], 0x40u) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x11B,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v8);
  if ( !pvParam )
    goto LABEL_15;
  v9 = DwmpBeginTransitionRequest(56LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v9);
LABEL_15:
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 1) + 24LL))(
            *((_QWORD *)this + 1),
            hWnd,
            0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12A,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v10,
        v23);
    return;
  }
  v11 = DwmpTransitionWindowWithRects(hWnd, v6 | 0x10200000u, 0LL, 0LL, 0LL, 0LL, &rc);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 1) + 24LL))(
          *((_QWORD *)this + 1),
          hWnd,
          0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x125,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v12,
      v24);
  v13 = DwmpEndTransitionRequest(56LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v13);
}
