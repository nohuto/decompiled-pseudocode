/*
 * XREFs of _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Foundation::Uri_std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Foundation::Uri___::GetMany_::_1_::catch$1 @ 0x18023C6C9
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Foundation::Uri_std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Foundation::Uri___::GetMany_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *(_DWORD *)winrt::to_hresult(a2 + 80);
  return 0LL;
}
