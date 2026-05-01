/*
 * XREFs of ?GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAIUread_lock_required@wil@@@Z @ 0x180342048
 * Callers:
 *     ?get_WindowBand@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAI@Z @ 0x180344C20 (-get_WindowBand@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$check_win32@K@winrt@@YAXK@Z @ 0x1803411A0 (--$check_win32@K@winrt@@YAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetWindowBand(
        __int64 a1,
        char a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  DWORD LastError; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(v12) = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( v2 )
  {
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v11);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2DA,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v4,
        v9);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v13);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2DB,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v5,
        v9);
    SetLastError(0);
    if ( !(unsigned int)GetWindowBand(v13, &v12) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2DE,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)0x8000FFFFLL,
        v9);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>(LastError);
    v7 = v12;
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
    return v7;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 164) )
      return *(unsigned int *)(a1 + 160);
    return v3;
  }
}
