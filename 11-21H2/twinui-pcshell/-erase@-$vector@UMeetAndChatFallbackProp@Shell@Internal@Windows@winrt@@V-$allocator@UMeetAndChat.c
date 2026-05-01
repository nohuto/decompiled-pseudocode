/*
 * XREFs of ?erase@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@Z @ 0x1805D6124
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXI@Z @ 0x1805D5780 (-RemoveAt@-$vector_base@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z @ 0x1805D448C (--_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbp
  winrt::Windows::Foundation::IUnknown *v4; // rdi
  _QWORD *result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  v4 = (winrt::Windows::Foundation::IUnknown *)(a3 + 8);
  if ( (winrt::Windows::Foundation::IUnknown *)(a3 + 8) != v3 )
  {
    do
    {
      winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)((char *)v4 - 8), v4);
      v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
    }
    while ( v4 != v3 );
    v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  }
  winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'((winrt::Windows::Foundation::IUnknown *)((char *)v3 - 8));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
