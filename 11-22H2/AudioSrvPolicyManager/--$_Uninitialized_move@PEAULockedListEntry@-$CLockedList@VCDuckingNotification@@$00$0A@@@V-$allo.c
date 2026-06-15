/*
 * XREFs of ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001FD14
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18001F780 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@-$vector@ULo.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FA24 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001BA14 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800201C8 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CDuckingNotification *__fastcall std::_Uninitialized_move<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        struct CDuckingNotification *a1,
        struct CDuckingNotification *a2,
        CDuckingNotification *a3)
{
  struct CDuckingNotification *i; // rdi

  for ( i = a1; i != a2; i = (struct CDuckingNotification *)((char *)i + 64) )
  {
    CDuckingNotification::CDuckingNotification(a3, i);
    *((_DWORD *)a3 + 14) = *((_DWORD *)i + 14);
    a3 = (CDuckingNotification *)((char *)a3 + 64);
  }
  std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(a3, a3);
  return a3;
}
