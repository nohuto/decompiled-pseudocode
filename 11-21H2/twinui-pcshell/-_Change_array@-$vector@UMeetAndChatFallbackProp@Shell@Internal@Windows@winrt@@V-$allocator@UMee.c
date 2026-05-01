/*
 * XREFs of ?_Change_array@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1805D5D58
 * Callers:
 *     ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805D3A68 (--$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeet.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D39FC (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::WindowsUdk::UI::MenuItem *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::WindowsUdk::UI::MenuItem **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(
      v6,
      *(winrt::WindowsUdk::UI::MenuItem **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
