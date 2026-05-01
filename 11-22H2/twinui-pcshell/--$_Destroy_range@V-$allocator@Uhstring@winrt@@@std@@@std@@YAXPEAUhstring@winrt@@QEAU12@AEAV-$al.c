/*
 * XREFs of ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800
 * Callers:
 *     ??$_Assign_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806F76F4 (--$_Assign_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@.c)
 *     _std::vector_winrt::hstring_std::allocator_winrt::hstring___::_Emplace_reallocate_winrt::hstring_const_&__::_1_::catch$1 @ 0x1806F79E9 (_std--vector_winrt--hstring_std--allocator_winrt--hstring___--_Emplace_reallocate_winrt--hstring.c)
 *     ??$_Uninitialized_copy@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEBU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7AA4 (--$_Uninitialized_copy@PEBUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ??$_Uninitialized_move@PEAUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEAU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7B1C (--$_Uninitialized_move@PEAUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806F96C0 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1806F9960 (--1-$_Uninitialized_backout_al@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1806F9A54 (--1-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ??_E?$heap_implements@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1806F9C20 (--_E-$heap_implements@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhst.c)
 *     ?Clear@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1806F9F50 (-Clear@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x1806FC008 (-ReplaceAll@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@.c)
 *     ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x1806FC4D8 (-_Change_array@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstrin.c)
 *     ?_Clear_and_reserve_geometric@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806FC54C (-_Clear_and_reserve_geometric@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::hstring>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      winrt::handle_type<winrt::impl::hstring_traits>::close(v3++);
    while ( v3 != a2 );
  }
}
