/*
 * XREFs of ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x1800087FC
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x180044A0E (_CDuckingManager--CDuckingManager_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 */

void __fastcall CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      v2,
      *(_QWORD **)(a1 + 48));
    std::_Deallocate<16,0>(*(char **)(a1 + 40), (*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
