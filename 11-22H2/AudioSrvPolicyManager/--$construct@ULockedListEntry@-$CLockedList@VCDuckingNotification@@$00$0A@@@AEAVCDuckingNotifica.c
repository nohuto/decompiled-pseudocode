/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FD88
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FA24 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FDE8 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNot.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001C0E4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800201C8 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
        __int64 a1,
        CDuckingNotification *a2,
        const struct CDuckingNotification *a3,
        int *a4)
{
  int v5; // edi
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  const struct CDuckingNotification *v7; // [rsp+70h] [rbp+8h]

  v5 = *a4;
  v7 = CDuckingNotification::CDuckingNotification((CDuckingNotification *)&v6, a3);
  CDuckingNotification::CDuckingNotification(a2, v7);
  *((_DWORD *)a2 + 14) = v5;
  CDuckingNotification::~CDuckingNotification(v7);
}
