/*
 * XREFs of ?SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1804113CC
 * Callers:
 *     ?SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411368 (-SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$check_win32@K@winrt@@YAXK@Z @ 0x18040EE04 (--$check_win32@K@winrt@@YAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForegroundInternal(
        __int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  BOOL v5; // ebx
  DWORD LastError; // eax
  char result; // al
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp+18h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)(unsigned int)v2);
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)(unsigned int)v3,
      v8);
  v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, &hWnd);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B8,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)(unsigned int)v4,
      v8);
  if ( !hWnd )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)0x8000FFFFLL,
      v8);
  SetLastError(0);
  v5 = SetForegroundWindow(hWnd);
  LastError = GetLastError();
  winrt::check_win32<unsigned long>(LastError);
  result = !v5;
  if ( !v5 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1BD,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)0x80004005LL,
      v8);
  if ( v10 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  return result;
}
