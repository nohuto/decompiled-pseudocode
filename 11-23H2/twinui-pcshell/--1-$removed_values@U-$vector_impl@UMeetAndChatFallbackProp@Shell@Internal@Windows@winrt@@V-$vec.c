/*
 * XREFs of ??1?$removed_values@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806C7500
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18025631C (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resu.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_std::vector_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_std::allocator_winrt::Windows::Internal::Shell::MeetAndChatFallbackProp____winrt::impl::single_threaded_collection_base__winrt::Windows::Internal::Shell::MeetAndChatFallbackProp_::ReplaceAll_::_1_::dtor$0 @ 0x1806C8481 (_winrt--vector_base_winrt--impl--vector_impl_winrt--Windows--Internal--Shell--MeetAndChatFallbac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1806C6BD8 (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 */

void __fastcall winrt::impl::removed_values<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,void>::~removed_values<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,void>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(
      v2,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
