/*
 * XREFs of ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x18041CC24
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@XZ @ 0x18041E948 (-Current@iterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18041F490 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@0@Z @ 0x18041D8A0 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
struct winrt::impl::hstring_header *__fastcall winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::hstring const &,winrt::hstring const &>(
        struct winrt::impl::hstring_header *a1,
        winrt::impl **a2,
        winrt::impl **a3)
{
  __int64 v6; // rbp
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rax
  void *v13; // [rsp+28h] [rbp-30h]
  struct winrt::impl::hstring_header *v14; // [rsp+60h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header *v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a1;
  v6 = 0LL;
  v13 = operator new(0x28uLL);
  v14 = winrt::impl::duplicate_hstring(*a3, v7, v8);
  v15 = winrt::impl::duplicate_hstring(*a2, v9, v10);
  v11 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>(
          v13,
          &v15,
          &v14);
  if ( v11 )
    v6 = v11 + 16;
  *(_QWORD *)a1 = v6;
  return a1;
}
