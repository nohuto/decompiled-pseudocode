/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXIAEBUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x1805D5C18
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805D5BB0 (-SetAt@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vector.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180353220 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z @ 0x1805D448C (--_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::MenuItem *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::SetAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  winrt::Windows::Foundation::IUnknown *v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
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
  v5 = (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v4 + 8LL * a2);
  v6 = *(_QWORD *)v5;
  *(_QWORD *)v5 = 0LL;
  v8 = v6;
  v9 = 1;
  winrt::Windows::Foundation::IUnknown::operator=(v5, a3);
  return winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'((winrt::WindowsUdk::UI::MenuItem *)&v8);
}
