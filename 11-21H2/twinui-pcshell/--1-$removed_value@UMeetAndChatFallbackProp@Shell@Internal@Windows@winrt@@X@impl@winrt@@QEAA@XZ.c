/*
 * XREFs of ??1?$removed_value@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805D4270
 * Callers:
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::WindowsUdk::UI::MenuItem_std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem____winrt::impl::single_threaded_collection_base__winrt::WindowsUdk::UI::MenuItem_::RemoveAt_::_1_::dtor$0 @ 0x1805D584C (_winrt--vector_base_winrt--impl--vector_impl_winrt--WindowsUdk--UI--MenuItem_std--vector_winrt--.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::WindowsUdk::UI::MenuItem_std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem____winrt::impl::single_threaded_collection_base__winrt::WindowsUdk::UI::MenuItem_::RemoveAtEnd_::_1_::dtor$0 @ 0x1805D5984 (_winrt--vector_base_winrt--impl--vector_impl_winrt--WindowsUdk--UI--MenuItem_std--v_ea_1805D5984.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_std::vector_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_std::allocator_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp____winrt::impl::single_threaded_collection_base__winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_::SetAt_::_1_::dtor$0 @ 0x1805D5CCF (_winrt--vector_base_winrt--impl--vector_impl_winrt--Windows--Internal--Shell--MeetA_ea_1805D5CCF.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::WindowsUdk::UI::MenuItem_std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem____winrt::impl::single_threaded_collection_base__winrt::WindowsUdk::UI::MenuItem_::SetAt_::_1_::dtor$0 @ 0x1805DA1FF (_winrt--vector_base_winrt--impl--vector_impl_winrt--WindowsUdk--UI--MenuItem_std--v_ea_1805DA1FF.c)
 * Callees:
 *     ??_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z @ 0x1805D448C (--_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall winrt::impl::removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>::~removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>(
        winrt::WindowsUdk::UI::MenuItem *a1,
        unsigned int a2)
{
  void *result; // rax

  if ( *((_BYTE *)a1 + 8) )
    return winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'(a1, a2);
  return result;
}
