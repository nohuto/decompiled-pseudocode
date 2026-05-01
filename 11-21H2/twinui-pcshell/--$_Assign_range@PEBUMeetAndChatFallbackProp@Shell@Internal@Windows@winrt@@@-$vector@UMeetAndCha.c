/*
 * XREFs of ??$_Assign_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1805D3894
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@2@@Z @ 0x1805D5A18 (-ReplaceAll@-$vector_base@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Copy_unchecked@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEAU12345@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU12345@0PEAU12345@@Z @ 0x1805D396C (--$_Copy_unchecked@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEAU12345@@std@@YAP.c)
 *     ??$_Destroy_range@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D39FC (--$_Destroy_range@V-$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805D5DCC (-_Clear_and_reserve_geometric@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Assign_range<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::WindowsUdk::UI::MenuItem *v11; // rcx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp *>(
      a2,
      a3);
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp *>(
      a2,
      v9);
    for ( i = (winrt::Windows::Foundation::IUnknown *)a1[1]; ; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      *(_QWORD *)i = *v9;
      winrt::Windows::Foundation::IUnknown::add_ref(i);
      ++v9;
    }
  }
  result = std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(v11);
  a1[1] = (__int64)i;
  return result;
}
