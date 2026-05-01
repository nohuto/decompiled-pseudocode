/*
 * XREFs of ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@AEBUhstring@0@0@Z @ 0x18002DB84
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@XZ @ 0x18002DB50 (-Current@iterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 *     ?GetMany@iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@AEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@3@Urandom_access_iterator_tag@std@@@Z @ 0x180353CE8 (-GetMany@iterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 * Callees:
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@0@Z @ 0x18002DC10 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundat.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct winrt::impl::hstring_header *__fastcall winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::hstring const &,winrt::hstring const &>(
        struct winrt::impl::hstring_header *a1,
        winrt::impl **a2,
        winrt::impl **a3)
{
  struct winrt::impl::hstring_header *v6; // rdx
  struct winrt::impl::hstring_header *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-28h]
  struct winrt::impl::hstring_header *v12; // [rsp+50h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a1;
  v11 = operator new(0x28uLL);
  v12 = winrt::impl::duplicate_hstring(*a3, v6);
  v13 = winrt::impl::duplicate_hstring(*a2, v7);
  v8 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>(
         v11,
         &v13,
         &v12);
  v9 = 0LL;
  if ( v8 )
    v9 = v8 + 16;
  *(_QWORD *)a1 = v9;
  return a1;
}
