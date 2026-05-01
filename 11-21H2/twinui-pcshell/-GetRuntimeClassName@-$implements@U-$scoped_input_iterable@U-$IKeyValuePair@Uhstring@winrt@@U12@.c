/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x180353DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>",
          (winrt::impl *)0x6A);
  return a2;
}
