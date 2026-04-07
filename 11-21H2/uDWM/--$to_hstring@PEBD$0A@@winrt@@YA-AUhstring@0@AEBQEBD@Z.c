/*
 * XREFs of ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800F0920
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800F1A31 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800F1AD9 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800F1B81 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x180041EBC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     MultiByteToWideChar_0 @ 0x1800613CA (MultiByteToWideChar_0.c)
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
  volatile signed __int32 *v9; // [rsp+58h] [rbp+10h] BYREF

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
    v9 = 0LL;
    *a1 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
