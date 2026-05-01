/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@AEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@3@Urandom_access_iterator_tag@std@@@Z @ 0x180353CE8
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x180353C00 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@.c)
 * Callees:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@AEBUhstring@0@0@Z @ 0x18002DB84 (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@w.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator::GetMany(
        __int64 a1,
        __int64 a2)
{
  winrt::impl **v2; // rbx
  unsigned int v4; // ebp
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  winrt::impl **v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(winrt::impl ***)(a1 + 32);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(winrt::Windows::Foundation::IUnknown **)a2;
  if ( v4 >= (unsigned int)((__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 4) )
    v4 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 4;
  v6 = &v2[2 * v4];
  if ( v2 != v6 )
  {
    do
    {
      winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::hstring const &,winrt::hstring const &>(
        (struct winrt::impl::hstring_header *)&v8,
        v2,
        v2 + 1);
      winrt::Windows::Foundation::IUnknown::operator=(v5, (winrt::Windows::Foundation::IUnknown *)&v8);
      if ( v8 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
      v2 += 2;
      v5 = (winrt::Windows::Foundation::IUnknown *)((char *)v5 + 8);
    }
    while ( v2 != v6 );
    v2 = *(winrt::impl ***)(a1 + 32);
  }
  result = v4;
  *(_QWORD *)(a1 + 32) = &v2[2 * v4];
  return result;
}
