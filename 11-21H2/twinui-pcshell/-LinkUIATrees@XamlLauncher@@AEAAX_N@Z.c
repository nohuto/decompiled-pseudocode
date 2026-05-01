/*
 * XREFs of ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x180053644
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x1800535D0 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x180053630 (-OnLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ @ 0x18044B730 (-OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceLockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x18044B750 (-OnDeviceLockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x18044B770 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x1800538D8 (--$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x180053954 (--$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::LinkUIATrees(XamlLauncher *this, char a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  HWND v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF

  v10[0] = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 23);
  hWnd = 0LL;
  if ( v3 && *((_QWORD *)this + 22) )
  {
    v4 = *v3;
    if ( a2 )
    {
      if ( (*(int (__fastcall **)(__int64 *, HWND *))(v4 + 432))(v3, &hWnd) >= 0
        && IsWindow(hWnd)
        && (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 22) + 304LL))(*((_QWORD *)this + 22), v10) >= 0
        && IsWindow(v10[0]) )
      {
        v12 = (int)hWnd;
        v13 = (int)v10[0];
        StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
        if ( !SetPropW(hWnd, L"CrossProcessParentHWND", v10[0]) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x602,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v5);
        if ( !SetPropW(v10[0], L"CrossProcessChildHWND", hWnd) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x603,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v6);
        if ( !SetPropW(hWnd, L"NonComponentUIWindow", HANDLE_FLAG_INHERIT) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x606,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v7);
        RemovePropW(hWnd, L"UIA_WindowPatternEnabled");
      }
    }
    else
    {
      if ( (*(int (__fastcall **)(__int64 *, HWND *))(v4 + 432))(v3, &hWnd) >= 0 )
      {
        if ( IsWindow(hWnd) )
        {
          RemovePropW(hWnd, L"CrossProcessParentHWND");
          RemovePropW(hWnd, L"NonComponentUIWindow");
          if ( !SetPropW(hWnd, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x61A,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v8);
        }
      }
      if ( (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 22) + 304LL))(*((_QWORD *)this + 22), v10) >= 0
        && IsWindow(v10[0]) )
      {
        RemovePropW(v10[0], L"CrossProcessChildHWND");
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 448LL))(*((_QWORD *)this + 23));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x622,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v9,
          (int)v10[0]);
      v12 = (int)hWnd;
      v13 = (int)v10[0];
      StartWindowTelemetry::UnlinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
    }
  }
}
