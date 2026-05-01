/*
 * XREFs of ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@_KUhstring@2@@Z @ 0x18070E304
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18071ADD8 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>(
        _QWORD *a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // r9
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  *a3 = 0LL;
  a1[2] = &winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v7 = 0LL;
  a1[1] = 1LL;
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::`vftable';
  a1[3] = a2;
  a1[4] = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
