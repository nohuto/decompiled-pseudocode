/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805B3F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::NonDelegatingGetRuntimeClassName(
           (a1 - 32) & -(__int64)(a1 != 0),
           a2);
}
