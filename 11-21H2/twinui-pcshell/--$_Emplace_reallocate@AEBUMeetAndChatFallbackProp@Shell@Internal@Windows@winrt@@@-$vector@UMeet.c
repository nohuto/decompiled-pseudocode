/*
 * XREFs of ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805D3A68
 * Callers:
 *     ??$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@1@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Z @ 0x1805D3DE8 (--$emplace@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeetAndChatFallb.c)
 *     ?Append@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805D4590 (-Append@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vecto.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?_Calculate_growth@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9C0 (-_Calculate_growth@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU12345@0PEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805D3D2C (--$_Uninitialized_move@PEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$allocator@UM.c)
 *     ?_Change_array@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1805D5D58 (-_Change_array@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$allocator@UMee.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Emplace_reallocate<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t size_of; // rax
  winrt::WindowsUdk::UI::MenuItem *v11; // rax
  winrt::WindowsUdk::UI::MenuItem *v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  winrt::WindowsUdk::UI::MenuItem *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  winrt::WindowsUdk::UI::MenuItem *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  winrt::WindowsUdk::UI::MenuItem *v20; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<HMONITOR__ *>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (winrt::WindowsUdk::UI::MenuItem *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (char *)v11 + 8 * v6;
  try
  {
    *(_QWORD *)v13 = *a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v13);
    v20 = (winrt::WindowsUdk::UI::MenuItem *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp *>(v16, a2, v12);
      v20 = v12;
      v15 = (winrt::WindowsUdk::UI::MenuItem *)(v13 + 8);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp *>(v16, v14, v15);
    std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Change_array(a1, v12, v8, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>(
      v20,
      (winrt::WindowsUdk::UI::MenuItem *)(v13 + 8));
    std::_Deallocate<16,0>(v19, 8 * v9);
    throw;
  }
  return result;
}
