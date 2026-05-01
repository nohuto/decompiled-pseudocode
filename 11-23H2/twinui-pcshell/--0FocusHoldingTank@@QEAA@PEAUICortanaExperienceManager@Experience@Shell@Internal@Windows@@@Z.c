/*
 * XREFs of ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1805035C8
 * Callers:
 *     ??$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@$$QEAPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804FFAE4 (--$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Interna.c)
 *     ??$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@XZ @ 0x180504580 (--$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA-AV-$unique_ptr@VFocusHoldingTank@@U-$defau.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180503128 (--$-0$$V@CreateHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18050382C (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1805039CC (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
FocusHoldingTank *__fastcall FocusHoldingTank::FocusHoldingTank(
        LONG_PTR dwNewLong,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  __int64 WindowInBand; // rax
  const char *v4; // r9
  const char *v5; // r9
  bool v6; // zf
  char v7; // al
  const char *v8; // r9
  WNDCLASSW WndClass; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v11[40]; // [rsp+D0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  *(_QWORD *)dwNewLong = 0LL;
  *(_DWORD *)(dwNewLong + 8) = 0;
  *(_QWORD *)(dwNewLong + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
  StartWindowTelemetry::CreateHoldingTankWindow::CreateHoldingTankWindow(v11, (char)a2);
  *(_DWORD *)(dwNewLong + 8) = GetCurrentThreadId();
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = (WNDPROC)FocusHoldingTank::s_WndProc;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"StartAndCortanaFocusHoldingTank";
  RegisterClassW(&WndClass);
  WindowInBand = CreateWindowInBand(
                   2097280LL,
                   L"StartAndCortanaFocusHoldingTank",
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   0LL,
                   6);
  *(_QWORD *)dwNewLong = WindowInBand;
  if ( !WindowInBand )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x22,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
      v4);
  if ( *(_QWORD *)dwNewLong )
  {
    SetLastError(0);
    if ( SetWindowLongPtrW(*(HWND *)dwNewLong, -21, dwNewLong) || (v6 = GetLastError() == 0, v7 = 1, v6) )
      v7 = 0;
    if ( v7 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2B,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v5);
    if ( !SetWindowPos(*(HWND *)dwNewLong, 0LL, 0, 0, 0, 0, 0x57u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v8);
    StartWindowTelemetry::CreateHoldingTankWindow::Stop(
      (StartWindowTelemetry::CreateHoldingTankWindow *)v11,
      *(void **)dwNewLong);
  }
  StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow((StartWindowTelemetry::CreateHoldingTankWindow *)v11);
  return (FocusHoldingTank *)dwNewLong;
}
