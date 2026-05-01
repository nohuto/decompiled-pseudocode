/*
 * XREFs of ?GetTrustLevel@?$produce_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18041DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,void>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::NonDelegatingGetTrustLevel(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2);
}
