/*
 * XREFs of ?_Destroy@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0@Z @ 0x18000DEC4
 * Callers:
 *     _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x180044B70 (_std--vector_CLockedList_CDuckingNotification_1_0_--LockedListEntry_std--allocator_CLockedList_C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Destroy(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  return std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(a2, a3);
}
