/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUri@Foundation@Windows@winrt@@@5673@U?$IIterable@UUri@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x18023CC20
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DC364 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

_QWORD *__fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[1] = 64LL;
  v5[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Uri>";
  winrt::hstring::hstring(a2, (__int64)v5, a3);
  return a2;
}
