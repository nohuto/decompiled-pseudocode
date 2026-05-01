/*
 * XREFs of _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::UI::WindowId_std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::UI::WindowId___::GetMany_::_1_::catch$1 @ 0x18072985C
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::UI::WindowId_std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::UI::WindowId___::GetMany_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *winrt::to_hresult((_DWORD *)(a2 + 80));
  return 0LL;
}
