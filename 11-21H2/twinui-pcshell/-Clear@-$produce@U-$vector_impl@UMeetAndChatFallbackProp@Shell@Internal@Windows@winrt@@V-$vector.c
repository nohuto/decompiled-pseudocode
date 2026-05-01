/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1805D4620
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D39FC (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  winrt::WindowsUdk::UI::MenuItem *v2; // rdi
  winrt::WindowsUdk::UI::MenuItem *v3; // rdx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v6 != (char *)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = *(winrt::WindowsUdk::UI::MenuItem **)((v1 & -(__int64)(v1 != -40)) + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = 0LL;
    v3 = *(winrt::WindowsUdk::UI::MenuItem **)((v1 & -(__int64)(v1 != -40)) + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = 0LL;
    v4 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40) = 0LL;
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(v2, v3);
      std::_Deallocate<16,0>(v2, 8 * ((v4 - (__int64)v2) >> 3));
    }
  }
  return 0LL;
}
