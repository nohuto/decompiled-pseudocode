/*
 * XREFs of ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18000EBA8 (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18000F080 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x180013530 (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 */

__int64 __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Copy_assign(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r15
  void **v4; // rbp
  char *v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  SIZE_T v11; // r14
  char *v12; // rax
  void **v13; // rdi
  __int64 result; // rax
  char *v15; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(void ***)a2;
  v5 = *(char **)a1;
  v6 = (v2 - *(_QWORD *)a2) >> 6;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6;
  if ( v6 <= v7 )
  {
    v15 = &v5[64 * v6];
    std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
      v4,
      *(void ***)(a2 + 8),
      v5);
    result = (__int64)std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
                        v15,
                        *(_QWORD **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v15;
  }
  else
  {
    v8 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 6;
    if ( v6 > v8 )
    {
      if ( v6 > 0x3FFFFFFFFFFFFFFLL )
        std::vector<CApplication *>::_Xlength();
      v9 = v8 >> 1;
      if ( v8 <= 0x3FFFFFFFFFFFFFFLL - (v8 >> 1) )
      {
        v10 = v9 + v8;
        if ( v9 + v8 < v6 )
          v10 = v6;
      }
      else
      {
        v10 = 0x3FFFFFFFFFFFFFFLL;
      }
      v7 = 0LL;
      if ( v5 )
      {
        std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
          v5,
          *(_QWORD **)(a1 + 8));
        std::_Deallocate<16,0>(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      if ( v10 > 0x3FFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v11 = v10 << 6;
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
      *(_QWORD *)a1 = v12;
      v5 = v12;
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = &v12[v11];
    }
    v13 = &v4[8 * v7];
    std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
      v4,
      v13,
      v5);
    result = std::_Uninitialized_copy<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
               (__int64)v13,
               v2,
               *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
