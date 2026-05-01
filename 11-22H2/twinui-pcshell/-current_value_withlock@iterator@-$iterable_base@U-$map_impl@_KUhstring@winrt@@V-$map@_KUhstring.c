/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18071ADD8
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x180710DF8 (-Current@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x180712A14 (-GetMany@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@_KUhstring@2@@Z @ 0x18070E304 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundatio.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        volatile signed __int32 *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  _QWORD *v7; // rax
  _QWORD *v9; // [rsp+50h] [rbp+8h]
  struct winrt::impl::hstring_header *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = (struct winrt::impl::hstring_header *)a2;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v9 = operator new(0x28uLL);
  v10 = winrt::impl::duplicate_hstring(*(winrt::impl **)(v4 + 40), v5, v6);
  v7 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>(
         v9,
         *(_QWORD *)(v4 + 32),
         (volatile signed __int32 **)&v10);
  if ( v7 )
    v3 = v7 + 2;
  *(_QWORD *)a2 = v3;
  return a2;
}
