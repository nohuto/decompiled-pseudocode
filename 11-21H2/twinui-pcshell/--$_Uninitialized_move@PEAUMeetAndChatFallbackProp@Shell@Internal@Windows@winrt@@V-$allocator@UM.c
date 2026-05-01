/*
 * XREFs of ??$_Uninitialized_move@PEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@0PEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D3D2C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805D3A68 (--$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeet.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D39FC (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 */

winrt::WindowsUdk::UI::MenuItem *__fastcall std::_Uninitialized_move<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp *>(
        __int64 *a1,
        __int64 *a2,
        winrt::WindowsUdk::UI::MenuItem *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::WindowsUdk::UI::MenuItem *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(a3, a3);
  return a3;
}
