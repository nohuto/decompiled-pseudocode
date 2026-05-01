/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18071AD1C
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x180710D28 (-Current@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x1807128A4 (-GetMany@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@IUhstring@2@@Z @ 0x18070E1E4 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall winrt::iterable_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        volatile signed __int32 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rax
  void *v9; // [rsp+50h] [rbp+8h]
  struct winrt::impl::hstring_header *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = (struct winrt::impl::hstring_header *)a2;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v9 = operator new(0x28uLL);
  v10 = winrt::impl::duplicate_hstring(*(winrt::impl **)(v4 + 40), v5, v6);
  v7 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>(
         (__int64)v9,
         *(_DWORD *)(v4 + 32),
         (volatile signed __int32 **)&v10);
  if ( v7 )
    v3 = v7 + 16;
  *(_QWORD *)a2 = v3;
  return a2;
}
