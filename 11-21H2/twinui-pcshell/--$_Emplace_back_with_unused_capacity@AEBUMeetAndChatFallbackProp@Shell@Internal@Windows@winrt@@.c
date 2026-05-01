/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@AEBU23456@@Z @ 0x1805D3A34
 * Callers:
 *     ??$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Z @ 0x1805D3DE8 (--$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeetAndChatFallb.c)
 *     ?Append@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805D4590 (-Append@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vecto.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Emplace_back_with_unused_capacity<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
        __int64 a1,
        _QWORD *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  __int64 result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  *(_QWORD *)v3 = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v3);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
