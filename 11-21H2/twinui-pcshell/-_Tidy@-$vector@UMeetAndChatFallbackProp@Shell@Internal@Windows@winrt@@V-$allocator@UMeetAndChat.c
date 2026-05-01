/*
 * XREFs of ?_Tidy@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1805D5EB0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D39FC (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Tidy(__int64 a1)
{
  winrt::WindowsUdk::UI::MenuItem *v2; // rcx

  v2 = *(winrt::WindowsUdk::UI::MenuItem **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(
      v2,
      *(winrt::WindowsUdk::UI::MenuItem **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
