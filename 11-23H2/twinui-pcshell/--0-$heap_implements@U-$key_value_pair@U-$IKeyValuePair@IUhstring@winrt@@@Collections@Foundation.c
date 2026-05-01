/*
 * XREFs of ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@IUhstring@2@@Z @ 0x18070E1E4
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18071AD1C (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@w.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>(
        __int64 a1,
        int a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // r9
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v7 = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  *(_QWORD *)a1 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
