/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800FA1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180041E0C (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IKeyValuePair`2<String, Double>",
          (winrt::impl *)0x3E);
  return a2;
}
