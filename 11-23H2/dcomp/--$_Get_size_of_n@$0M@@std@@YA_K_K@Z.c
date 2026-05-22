/*
 * XREFs of ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x18017821C
 * Callers:
 *     ??$_Emplace_reallocate@UPathSharedSectionData@@@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@QEAAPEAUPathSharedSectionData@@QEAU2@$$QEAU2@@Z @ 0x180177FD4 (--$_Emplace_reallocate@UPathSharedSectionData@@@-$vector@UPathSharedSectionData@@V-$allocator@UP.c)
 *     ?_Reallocate_exactly@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@AEAAX_K@Z @ 0x180178B1C (-_Reallocate_exactly@-$vector@UPathSharedSectionData@@V-$allocator@UPathSharedSectionData@@@std@.c)
 *     ??$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAU234567@AEAI1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801878EC (--$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@-$vector@UInteractionTr.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<12>(unsigned __int64 a1)
{
  if ( a1 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 12 * a1;
}
