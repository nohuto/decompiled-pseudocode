/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1806C9A80
 * Callers:
 *     ??$_Assign_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806C9858 (--$_Assign_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$a.c)
 *     _std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem___::_Emplace_reallocate_winrt::WindowsUdk::UI::MenuItem_const_&__::_1_::catch$3 @ 0x1806C9D18 (_std--vector_winrt--WindowsUdk--UI--MenuItem_std--allocator_winrt--WindowsUdk--UI--MenuItem___--.c)
 *     _std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem___::_Emplace_reallocate_winrt::WindowsUdk::UI::MenuItem__::_1_::catch$4 @ 0x1806CA06F (_std--vector_winrt--WindowsUdk--UI--MenuItem_std--allocator_winrt--WindowsUdk--UI--_ea_1806CA06F.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1806CA23C (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ??1?$removed_values@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806CBA20 (--1-$removed_values@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Windows.c)
 *     ??_G?$heap_implements@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1806CC1E0 (--_G-$heap_implements@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Windo.c)
 *     ?Clear@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1806CCB20 (-Clear@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@WindowsUdk.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXU?$array_view@$$CBUMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x1806CE588 (-ReplaceAll@-$vector_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@W.c)
 *     ?_Change_array@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUMenuItem@UI@WindowsUdk@winrt@@_K1@Z @ 0x1806DDFE8 (-_Change_array@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winr.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806DE0E8 (-_Clear_and_reserve_geometric@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@.c)
 *     ?_Tidy@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXXZ @ 0x1806DFB0C (-_Tidy@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@.c)
 * Callees:
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

winrt::Windows::Internal::Shell::RegistrationData *__fastcall std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
        winrt::Windows::Internal::Shell::RegistrationData *this,
        winrt::Windows::Internal::Shell::RegistrationData *a2)
{
  winrt::Windows::Internal::Shell::RegistrationData *v3; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(v3);
      v3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
  return result;
}
