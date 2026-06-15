/*
 * XREFs of ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18001F7DC
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18001F590 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@-$vector@ULo.c)
 * Callees:
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x180020308 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 64LL )
  {
    CDuckingNotification::operator=(a3, i);
    v6 = *(_DWORD *)(i + 56);
    i += 64LL;
    *(_DWORD *)(a3 + 56) = v6;
  }
  return a3;
}
