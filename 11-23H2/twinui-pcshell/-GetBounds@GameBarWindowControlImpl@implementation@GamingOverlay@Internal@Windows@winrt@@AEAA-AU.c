/*
 * XREFs of ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x18040F824
 * Callers:
 *     ?get_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1804125B0 (-get_Bounds@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$check_win32@K@winrt@@YAXK@Z @ 0x18040EE04 (--$check_win32@K@winrt@@YAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetBounds(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  DWORD LastError; // eax
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h]
  int v18; // [rsp+3Ch] [rbp-34h]
  struct tagRECT Rect; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 56LL))(v4, v16);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DB,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v5,
        v14);
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v14);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DD,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v6,
        v14);
    v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 120LL))(v14, v20);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DF,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v7,
        v14);
    v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &hWnd);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1E1,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v8,
        v14);
    SetLastError(0);
    if ( !GetWindowRect(hWnd, &Rect) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1E4,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)0x80004005LL,
        v14);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>(LastError);
    v10 = (float)v18;
    v11 = (float)v17;
    v12 = (float)(v20[1] + Rect.top);
    *a2 = (float)(v20[0] + Rect.left);
    a2[1] = v12;
    a2[2] = v11;
    a2[3] = v10;
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
  }
  else if ( *(_BYTE *)(a1 + 124) )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 108);
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    a2[3] = 0.0;
  }
  return a2;
}
