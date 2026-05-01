/*
 * XREFs of ?get_local_iids@?$implements@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@URect@Foundation@Windows@winrt@@@5673@U?$IIterable@URect@Foundation@Windows@winrt@@@5673@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1801C2820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 3;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Rect>>>::value;
  return a2;
}
