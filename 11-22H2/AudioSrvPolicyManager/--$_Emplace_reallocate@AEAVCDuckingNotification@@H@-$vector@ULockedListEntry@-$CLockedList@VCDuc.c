/*
 * XREFs of ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FA24
 * Callers:
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FDE8 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNot.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001BA14 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001FD14 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FD88 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x180022F30 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$al.c)
 *     ?allocate@?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@_K@Z @ 0x1800238B4 (-allocate@-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAP.c)
 */

unsigned __int64 __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
        __int64 a1,
        struct CDuckingNotification *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  struct CDuckingNotification *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-48h]
  void *v17; // [rsp+28h] [rbp-40h]
  CDuckingNotification *v18; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Calculate_growth(
         a1,
         v8);
  v12 = std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>::allocate(v10, v9);
  v13 = (v6 & 0xFFFFFFFFFFFFFFC0uLL) + v12;
  try
  {
    std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
      v11,
      v13,
      a3,
      a4,
      v9,
      v12);
    v18 = (CDuckingNotification *)((v6 & 0xFFFFFFFFFFFFFFC0uLL) + v12);
    v14 = *(struct CDuckingNotification **)a1;
    if ( a2 == *(struct CDuckingNotification **)(a1 + 8) )
    {
      std::_Uninitialized_move<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(v14);
    }
    else
    {
      std::_Uninitialized_move<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(v14);
      v18 = (CDuckingNotification *)v12;
      std::_Uninitialized_move<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(a2);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      v18,
      (CDuckingNotification *)(v13 + 64));
    std::_Deallocate<16,0>(v17, v16 << 6);
    throw;
  }
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      *(CDuckingNotification **)a1,
      *(CDuckingNotification **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v12 + (v8 << 6);
  *(_QWORD *)(a1 + 16) = v12 + (v9 << 6);
  return (v6 & 0xFFFFFFFFFFFFFFC0uLL) + v12;
}
