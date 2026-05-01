/*
 * XREFs of ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@0@Z @ 0x18041D8A0
 * Callers:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x18041CC24 (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@w.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>(
        _QWORD *a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // r10
  volatile signed __int32 *v7; // r9
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a3;
  *a3 = 0LL;
  v7 = *a2;
  *a2 = 0LL;
  a1[2] = &winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  a1[1] = 1LL;
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vftable';
  a1[3] = v7;
  a1[4] = v3;
  v9 = 0LL;
  v10 = 0LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
