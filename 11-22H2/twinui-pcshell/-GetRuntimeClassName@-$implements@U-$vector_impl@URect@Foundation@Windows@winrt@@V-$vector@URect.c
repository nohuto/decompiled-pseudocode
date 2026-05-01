/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@URect@Foundation@Windows@winrt@@@5673@U?$IIterable@URect@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x180523AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>",
          (winrt::impl *)0x41);
  return a2;
}
