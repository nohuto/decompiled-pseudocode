/*
 * XREFs of ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FDE8
 * Callers:
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180021290 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FD88 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 */

unsigned __int64 __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::emplace_back<CDuckingNotification &,int>(
        __int64 a1,
        const struct CDuckingNotification *a2,
        int *a3)
{
  struct CDuckingNotification *v4; // rdx
  unsigned __int64 result; // rax

  v4 = *(struct CDuckingNotification **)(a1 + 8);
  if ( v4 == *(struct CDuckingNotification **)(a1 + 16) )
    return std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
             a1,
             v4,
             (__int64)a2,
             (__int64)a3);
  std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
    a1,
    v4,
    a2,
    a3);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 64;
  return result;
}
