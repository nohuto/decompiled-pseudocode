/*
 * XREFs of _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x180061324
 * Callers:
 *     ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800612B0 (-get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180162620 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall anonymous_namespace_::GetDefaultVirtualDesktopName(HSTRING *string, __int64 a2)
{
  int v3; // eax
  HRESULT v4; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-20h] BYREF
  __int64 length; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  sourceString = 0LL;
  length = 0LL;
  v8 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
         &sourceString,
         &_ImageBase,
         1001LL,
         a2 + 1);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAC,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3,
      0);
  *string = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  v4 = WindowsCreateString(sourceString, length, string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4,
      1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&sourceString);
  return string;
}
