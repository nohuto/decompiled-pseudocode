/*
 * XREFs of ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0
 * Callers:
 *     _dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x18000A950 (_dynamic_initializer_for__winrt--Windows--Internal--Shell--implementation--RemoteSystemProvider-.c)
 *     ??_G?$heap_implements@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18019F9F0 (--_G-$heap_implements@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@U.c)
 *     ??1?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801B333C (--1-$vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$allocator@URegistrationData@Shell.c)
 *     ??$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBURegistrationData@Shell@Internal@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x180702090 (--$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistrationData@.c)
 *     _std::vector_winrt::Windows::Internal::Shell::RegistrationData_std::allocator_winrt::Windows::Internal::Shell::RegistrationData___::_Emplace_reallocate_winrt::Windows::Internal::Shell::RegistrationData_const_&__::_1_::catch$3 @ 0x1807022AE (_std--vector_winrt--Windows--Internal--Shell--RegistrationData_std--allocator_winrt--Windows--In.c)
 *     ??$_Uninitialized_move@PEAURegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@0PEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1807022EC (--$_Uninitialized_move@PEAURegistrationData@Shell@Internal@Windows@winrt@@V-$allocator@URegistra.c)
 *     ??1?$removed_values@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180705390 (--1-$removed_values@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URe.c)
 *     ??_G?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UEAAPEAXI@Z @ 0x180705850 (--_G-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URegistrationData@Sh.c)
 *     ?Clear@?$produce@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1807059E0 (-Clear@-$produce@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URegis.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXU?$array_view@$$CBURegistrationData@Shell@Internal@Windows@winrt@@@2@@Z @ 0x180707428 (-ReplaceAll@-$vector_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vect.c)
 *     ?_Change_array@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAURegistrationData@Shell@Internal@Windows@winrt@@_K1@Z @ 0x180707ADC (-_Change_array@-$vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$allocator@URegistrati.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180707B50 (-_Clear_and_reserve_geometric@-$vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$alloca.c)
 * Callees:
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(
        winrt::Windows::Internal::Shell::RegistrationData *this,
        winrt::Windows::Internal::Shell::RegistrationData *a2)
{
  winrt::Windows::Internal::Shell::RegistrationData *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
  return result;
}
