/*
 * XREFs of ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68
 * Callers:
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001051C (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18000F080 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000F130 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 *     ?_Umove@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU34@00@Z @ 0x180013480 (-_Umove@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULo.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x180013530 (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 */

_QWORD *__fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
        _QWORD **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  SIZE_T v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // r15
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-48h]
  _QWORD *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+28h] [rbp-40h]
  char *v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  _QWORD *v27; // [rsp+70h] [rbp+8h]
  __int64 v28; // [rsp+78h] [rbp+10h]

  v6 = a2 - (char *)*a1;
  v7 = ((char *)a1[1] - (char *)*a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
  v8 = v7 + 1;
  v9 = ((char *)a1[2] - (char *)*a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v28 = v11;
    if ( v11 > 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x3FFFFFFFFFFFFFFLL;
    v28 = 0x3FFFFFFFFFFFFFFLL;
  }
  v12 = v11 << 6;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v15 = v13;
    v24 = v13;
    v16 = (_QWORD *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFFC0uLL));
    v21 = v16 + 8;
    std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
      v14,
      v16,
      a3,
      a4);
    v27 = v16;
    v17 = (char *)a1[1];
    if ( a2 == v17 )
    {
      std::_Uninitialized_copy<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        *a1,
        v17,
        v15,
        a1,
        v21,
        v24);
    }
    else
    {
      std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Umove(
        a1,
        *a1,
        a2,
        v15,
        v21,
        v24);
      v27 = v15;
      std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Umove(
        a1,
        a2,
        a1[1],
        v16 + 8,
        v23,
        v26);
    }
  }
  catch ( ... )
  {
    std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Destroy(
      v18,
      v27,
      v22);
    std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>::deallocate(v20, v25, v28);
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(*a1, a1[1]);
    std::_Deallocate<16,0>((char *)*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *a1 = v15;
  a1[1] = &v15[8 * v8];
  a1[2] = (_QWORD *)((char *)v15 + v12);
  return v16;
}
