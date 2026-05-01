/*
 * XREFs of ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348
 * Callers:
 *     ??$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18022F224 (--$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$a.c)
 *     _std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const_&__::_1_::catch$0 @ 0x18022F499 (_std--vector_winrt--Windows--Foundation--Uri_std--allocator_winrt--Windows--Foundation--Uri___--.c)
 *     ??$_Uninitialized_move@PEAUUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAPEAUUri@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F7E4 (--$_Uninitialized_move@PEAUUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundation@Windows@wi.c)
 *     ??1?$removed_values@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180235630 (--1-$removed_values@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wind.c)
 *     ??1?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAA@XZ @ 0x1802359F0 (--1-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windows@winrt@@V-$allo.c)
 *     ?Clear@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1802382C0 (-Clear@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windows.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUUri@Foundation@Windows@winrt@@@2@@Z @ 0x180241BF8 (-ReplaceAll@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundatio.c)
 *     ?_Change_array@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUUri@Foundation@Windows@winrt@@_K1@Z @ 0x180247E00 (-_Change_array@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundation@Windows@winr.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180247E74 (-_Clear_and_reserve_geometric@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundati.c)
 *     ?_Tidy@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x180248530 (-_Tidy@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundation@Windows@winrt@@@std@.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
