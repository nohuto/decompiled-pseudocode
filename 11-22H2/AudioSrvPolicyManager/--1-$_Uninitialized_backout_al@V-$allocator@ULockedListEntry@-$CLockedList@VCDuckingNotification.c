/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x180020368
 * Callers:
 *     _std::_Uninitialized_move_CLockedList_CDuckingNotification_1_0_::LockedListEntry___std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry____::_1_::dtor$0 @ 0x180049EDC (_std--_Uninitialized_move_CLockedList_CDuckingNotification_1_0_--LockedListEntry___std--allocato.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::~_Uninitialized_backout_al<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        CDuckingNotification **a1)
{
  std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(*a1, a1[1]);
}
