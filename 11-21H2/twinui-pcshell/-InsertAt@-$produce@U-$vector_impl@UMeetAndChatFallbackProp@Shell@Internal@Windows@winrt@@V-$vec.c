/*
 * XREFs of ?InsertAt@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805D52C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180353220 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Z @ 0x1805D3DE8 (--$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeetAndChatFallb.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::InsertAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38)
                                         - *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30)) >> 3) )
    {
      winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
    if ( v3 == -40 )
    {
      v4 = 48LL;
      v3 = 0LL;
    }
    else
    {
      v4 = v3 + 48;
    }
    std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::emplace<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
      (__int64 *)v4,
      &v7,
      (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(v3 + 48) + 8LL * a2),
      &v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
