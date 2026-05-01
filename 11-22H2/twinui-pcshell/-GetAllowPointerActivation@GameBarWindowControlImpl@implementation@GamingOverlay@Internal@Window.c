/*
 * XREFs of ?GetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18040F63C
 * Callers:
 *     ?get_AllowPointerActivation@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180412430 (-get_AllowPointerActivation@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Int.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$check_win32@K@winrt@@YAXK@Z @ 0x18040EE04 (--$check_win32@K@winrt@@YAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetAllowPointerActivation(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // eax
  LONG WindowLongW; // ebx
  DWORD LastError; // eax
  bool v6; // bl
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v10 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 32LL))(v1, &v10);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v2,
        v8);
    v3 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, &hWnd);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25B,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v3,
        v8);
    SetLastError(0);
    WindowLongW = GetWindowLongW(hWnd, -20);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>(LastError);
    v6 = (WindowLongW & 0x8000000) == 0;
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
    return v6;
  }
  else if ( *(_BYTE *)(a1 + 153) )
  {
    return *(_BYTE *)(a1 + 152);
  }
  else
  {
    return 1;
  }
}
