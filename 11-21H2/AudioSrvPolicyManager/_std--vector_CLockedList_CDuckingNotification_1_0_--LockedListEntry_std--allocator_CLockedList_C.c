/*
 * XREFs of _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x180044B70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0@Z @ 0x18000DEC4 (-_Destroy@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@U.c)
 *     ?deallocate@?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAXQEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@_K@Z @ 0x18000E5CC (-deallocate@-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEA.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification___int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Destroy(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD **)(a2 + 32));
  std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>::deallocate(
    v3,
    *(char **)(a2 + 40),
    *(_QWORD *)(a2 + 120));
  throw;
}
