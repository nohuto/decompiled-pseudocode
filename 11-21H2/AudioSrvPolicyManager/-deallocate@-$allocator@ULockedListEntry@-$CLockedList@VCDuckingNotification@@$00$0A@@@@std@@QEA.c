/*
 * XREFs of ?deallocate@?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAXQEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@_K@Z @ 0x18000E5CC
 * Callers:
 *     _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x180044B70 (_std--vector_CLockedList_CDuckingNotification_1_0_--LockedListEntry_std--allocator_CLockedList_C.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>::deallocate(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, a3 << 6);
}
