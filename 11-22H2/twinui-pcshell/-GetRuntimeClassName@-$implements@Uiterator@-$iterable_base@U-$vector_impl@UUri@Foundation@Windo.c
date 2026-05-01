/*
 * XREFs of ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x18023CC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DC364 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

_QWORD *__fastcall winrt::implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Uri>>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[1] = 66LL;
  v5[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Uri>";
  winrt::hstring::hstring(a2, (__int64)v5, a3);
  return a2;
}
