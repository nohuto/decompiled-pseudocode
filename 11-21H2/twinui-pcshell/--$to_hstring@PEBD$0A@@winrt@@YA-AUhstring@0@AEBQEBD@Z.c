/*
 * XREFs of ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1802D6228
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1802DA351 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1802DA3F4 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1802DA497 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800F7820 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     MultiByteToWideChar_0 @ 0x18018A11E (MultiByteToWideChar_0.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring<char const *,0>(
        struct winrt::impl::shared_hstring_header **a1,
        const CHAR **a2)
{
  const CHAR *v2; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  int cchWideChar; // r14d
  struct winrt::impl::shared_hstring_header *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v5);
    MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, *((LPWSTR *)v7 + 2), cchWideChar);
    v12 = 0LL;
    *a1 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12, v8, v9, v10);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
