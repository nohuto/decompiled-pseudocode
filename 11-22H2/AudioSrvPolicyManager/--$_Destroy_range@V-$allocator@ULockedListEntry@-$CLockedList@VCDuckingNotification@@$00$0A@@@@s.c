/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001BA14
 * Callers:
 *     ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x18001BE04 (--1-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x18001BFEC (--1-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULockedL.c)
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18001F780 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@-$vector@ULo.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FA24 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001FD14 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x180020368 (--1-$_Uninitialized_backout_al@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180021790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@0@Z @ 0x1800238E4 (-erase@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULoc.c)
 *     _std::vector_CLockedList_CDuckingNotification_1_0_::LockedListEntry_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::_Emplace_reallocate_CDuckingNotification_&_int__::_1_::catch$0 @ 0x180049E7D (_std--vector_CLockedList_CDuckingNotification_1_0_--LockedListEntry_std--allocator_CLockedList_C.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001C0E4 (--1CDuckingNotification@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        CDuckingNotification *this,
        CDuckingNotification *a2)
{
  CDuckingNotification *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CDuckingNotification::~CDuckingNotification(v3);
      v3 = (CDuckingNotification *)((char *)v3 + 64);
    }
    while ( v3 != a2 );
  }
}
