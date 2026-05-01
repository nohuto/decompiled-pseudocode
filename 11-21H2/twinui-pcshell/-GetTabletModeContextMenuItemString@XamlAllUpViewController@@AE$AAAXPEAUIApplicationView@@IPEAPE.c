/*
 * XREFs of ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1804438E0
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18044324C (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x180178CF4 (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x180189BBB (WindowsDeleteString_0.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x18022D9DE (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180443FBC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180444F50 (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180444F80 (-_Free@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewController::GetTabletModeContextMenuItemString(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        unsigned int a3,
        HSTRING *a4)
{
  int v7; // esi
  unsigned __int16 **v8; // r8
  int ViewTitle; // eax
  LPCWSTR v10; // rbx
  WCHAR *v11; // rax
  int v12; // edi
  int v13; // eax
  HSTRING v14; // rcx
  HSTRING *v15; // r8
  HSTRING v16; // rbx
  HSTRING *v17; // r8
  LPCWSTR lpsz; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  PCNZWCH sourceString; // [rsp+38h] [rbp-48h] BYREF
  UINT32 length[2]; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-28h]
  WCHAR Buffer[12]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LoadStringW(&_ImageBase, 0x5E7u, Buffer, 10);
  v7 = wcstol(Buffer, 0LL, 10);
  if ( !v7 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15A,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)0x8000FFFFLL,
      (int)lpsz);
  lpsz = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(&lpsz);
  v20 = -1LL;
  v21 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (unsigned __int16 **)&lpsz, v8);
  if ( ViewTitle < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15E,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)ViewTitle,
      (int)lpsz);
  v10 = lpsz;
  v11 = (WCHAR *)lpsz;
  v12 = 0;
  if ( *lpsz )
  {
    while ( 1 )
    {
      v11 = CharNextW(v11);
      if ( ++v12 == v7 )
      {
        if ( *v11 )
          break;
      }
      if ( !*v11 )
        goto LABEL_11;
    }
    *(_DWORD *)v11 = 8230;
  }
LABEL_11:
  v21 = -1LL;
  v20 = -1LL;
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v24 = 0LL;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeResFormat(
          &sourceString,
          &_ImageBase,
          a3,
          v10);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13,
      (int)lpsz);
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  WindowsCreateString(sourceString, length[0], &string);
  v26 = 0LL;
  v16 = Platform::String::String(v14, (Platform::Details *)string, v15);
  v26 = v16;
  __abi_winrt_ptrto_string_assign(a4, (Platform::Details *)v16, v17);
  WindowsDeleteString_0(v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(&sourceString);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(&lpsz);
}
