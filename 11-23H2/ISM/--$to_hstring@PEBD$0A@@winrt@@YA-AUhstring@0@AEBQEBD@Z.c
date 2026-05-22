/*
 * XREFs of ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180098680
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x18009AB31 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x18009ABD4 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x18009AC77 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     MultiByteToWideChar_0 @ 0x1800581B5 (MultiByteToWideChar_0.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A054 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18009A690 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring<char const *,0>(
        struct winrt::impl::shared_hstring_header **a1,
        const CHAR **a2)
{
  const CHAR *v2; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edx
  int cchWideChar; // r14d
  struct winrt::impl::shared_hstring_header *v8; // rbx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    v8 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)v5, v6);
    MultiByteToWideChar_0(0xFDE9u, 0, v2, v4, *((LPWSTR *)v8 + 2), cchWideChar);
    v10 = 0LL;
    *a1 = v8;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
