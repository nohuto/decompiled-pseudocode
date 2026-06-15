/*
 * XREFs of _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x180049E7D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001BA14 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     _CxxThrowException_0 @ 0x180048B04 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification___int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
    *(CDuckingNotification **)(a2 + 112),
    *(CDuckingNotification **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), *(_QWORD *)(a2 + 32) << 6);
  throw;
}
