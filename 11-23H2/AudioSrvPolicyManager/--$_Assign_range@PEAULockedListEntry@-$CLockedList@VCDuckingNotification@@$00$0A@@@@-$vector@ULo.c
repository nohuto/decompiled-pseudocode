/*
 * XREFs of ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18001F590
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800215A0 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001B824 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18001F7DC (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001FB24 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x180022D40 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$al.c)
 *     ?allocate@?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@_K@Z @ 0x1800236C4 (-allocate@-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAP.c)
 */

void __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Assign_range<CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  CDuckingNotification *v10; // r10
  __int64 v11; // rax
  struct CDuckingNotification *v12; // rsi
  CDuckingNotification *v13; // rbx

  v3 = *a1;
  v4 = (a3 - a2) >> 6;
  v5 = (a1[1] - *a1) >> 6;
  if ( v4 <= v5 )
  {
    v13 = (CDuckingNotification *)(v3 + (v4 << 6));
    std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
      a2,
      a3,
      *a1);
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      v13,
      (CDuckingNotification *)a1[1]);
    a1[1] = (__int64)v13;
  }
  else
  {
    if ( v4 > (a1[2] - v3) >> 6 )
    {
      if ( v4 > 0x3FFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      v5 = 0LL;
      v9 = std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Calculate_growth(
             a1,
             (a3 - a2) >> 6);
      if ( v10 )
      {
        std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
          v10,
          (CDuckingNotification *)a1[1]);
        std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
      }
      v11 = std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>::allocate(v8, v9);
      *a1 = v11;
      v3 = v11;
      a1[1] = v11;
      a1[2] = v11 + (v9 << 6);
    }
    v12 = (struct CDuckingNotification *)(a2 + (v5 << 6));
    std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
      a2,
      v12,
      v3);
    a1[1] = std::_Uninitialized_move<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(v12);
  }
}
