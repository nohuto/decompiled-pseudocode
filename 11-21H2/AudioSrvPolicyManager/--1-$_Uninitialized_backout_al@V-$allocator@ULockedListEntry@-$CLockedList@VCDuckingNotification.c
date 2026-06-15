/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x18000F608
 * Callers:
 *     _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Umove_::_1_::dtor$0 @ 0x180044BCB (_std--vector_CLockedList_CDuckingNotification_1_0_--LockedListEntry_std--allocator__ea_180044BCB.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_backout_al<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::~_Uninitialized_backout_al<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        _QWORD **a1)
{
  return std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(*a1, a1[1]);
}
