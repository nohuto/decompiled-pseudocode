/*
 * XREFs of ?get_Size@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x18024AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r9

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  *a2 = (__int64)(*(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38) - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 3;
  return 0LL;
}
