/*
 * XREFs of ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@N@Z @ 0x1800FC934
 * Callers:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBN@winrt@@YA?A_PAEBUhstring@0@AEBN@Z @ 0x1800FC56C (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEAA@Uhstring@2@N@Z @ 0x1800FC984 (--0-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@im.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>(
        _QWORD *a1,
        void **a2)
{
  void *v2; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>(
    a1,
    &v6);
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
