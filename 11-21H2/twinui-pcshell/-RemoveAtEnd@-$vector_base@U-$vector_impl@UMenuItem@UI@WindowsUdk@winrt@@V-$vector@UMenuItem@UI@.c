/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXXZ @ 0x1805D58BC
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1805D5860 (-RemoveAtEnd@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180353220 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z @ 0x1805D448C (--_GMenuItem@UI@WindowsUdk@winrt@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::MenuItem *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  winrt::WindowsUdk::UI::MenuItem *result; // rax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v1 = (__int64)(a1 + 2);
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 4);
  if ( !a1 )
    v2 = 56LL;
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(*(_QWORD *)v2 - 8LL);
  *(_QWORD *)(v3 - 8) = 0LL;
  v7 = v4;
  v8 = 1;
  v5 = (__int64)(a1 + 4);
  if ( !a1 )
    v5 = 56LL;
  result = winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'((winrt::WindowsUdk::UI::MenuItem *)(*(_QWORD *)v5 - 8LL));
  *(_QWORD *)v5 -= 8LL;
  if ( v8 )
    return winrt::WindowsUdk::UI::MenuItem::`scalar deleting destructor'((winrt::WindowsUdk::UI::MenuItem *)&v7);
  return result;
}
