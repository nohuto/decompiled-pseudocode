/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXI@Z @ 0x1805D5780
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x1805D5720 (-RemoveAt@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vec.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180353220 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z @ 0x1805D448C (--_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z.c)
 *     ?erase@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@Z @ 0x1805D6124 (-erase@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$allocator@UMeetAndChat.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::MenuItem *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  winrt::WindowsUdk::UI::MenuItem *result; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = (__int64 *)(*(_QWORD *)v4 + 8LL * a2);
  v6 = *v5;
  *v5 = 0LL;
  v9 = v6;
  v10 = 1;
  v7 = (__int64)(a1 + 2);
  if ( !a1 )
    v7 = 48LL;
  result = (winrt::WindowsUdk::UI::MenuItem *)std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::erase(
                                                v7,
                                                &v12,
                                                v5);
  if ( v10 )
    return winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'((winrt::WindowsUdk::UI::MenuItem *)&v9);
  return result;
}
