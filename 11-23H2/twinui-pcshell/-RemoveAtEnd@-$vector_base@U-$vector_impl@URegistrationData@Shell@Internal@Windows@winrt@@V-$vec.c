/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXXZ @ 0x18054FAEC
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18054FA90 (-RemoveAtEnd@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::RegistrationData *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *result; // rax
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
  result = winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'((winrt::Windows::Internal::Shell::RegistrationData *)(*(_QWORD *)v5 - 8LL));
  *(_QWORD *)v5 -= 8LL;
  if ( v8 )
    return winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'((winrt::Windows::Internal::Shell::RegistrationData *)&v7);
  return result;
}
