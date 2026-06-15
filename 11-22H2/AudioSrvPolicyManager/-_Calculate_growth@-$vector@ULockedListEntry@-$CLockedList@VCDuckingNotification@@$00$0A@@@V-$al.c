/*
 * XREFs of ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x180022F30
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18001F780 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@-$vector@ULo.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FA24 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 6;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
