/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805D4590
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@AEBU23456@@Z @ 0x1805D3A34 (--$_Emplace_back_with_unused_capacity@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@.c)
 *     ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805D3A68 (--$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeet.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = (__int64 *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 + 40) >> 64));
  v4 = v3 + 6;
  if ( v3[7] == v3[8] )
  {
    try
    {
      std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Emplace_reallocate<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
        v4,
        v3[7],
        &v7);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v6);
    }
  }
  else
  {
    std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Emplace_back_with_unused_capacity<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
      (__int64)v4,
      &v7);
  }
  return 0LL;
}
