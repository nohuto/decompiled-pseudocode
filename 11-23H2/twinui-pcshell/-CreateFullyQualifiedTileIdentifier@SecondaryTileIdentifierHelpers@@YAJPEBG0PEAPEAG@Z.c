/*
 * XREFs of ?CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z @ 0x1806A0964
 * Callers:
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A7300 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall SecondaryTileIdentifierHelpers::CreateFullyQualifiedTileIdentifier(
        SecondaryTileIdentifierHelpers *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)a3 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         &v9,
         (__int64)L"%s%c%s",
         this,
         58LL,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v9;
    v9 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    v6 = 0;
    *(_QWORD *)a3 = v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\SecondaryTileIdentifierHelpers.h",
      (const char *)(unsigned int)v5);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  return v6;
}
