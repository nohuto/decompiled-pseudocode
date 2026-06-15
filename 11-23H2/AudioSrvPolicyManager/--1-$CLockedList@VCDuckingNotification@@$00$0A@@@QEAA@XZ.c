/*
 * XREFs of ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x18001BC14
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18001BE44 (--1CDuckingManager@@UEAA@XZ.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x1800488E7 (_CDuckingManager--CDuckingManager_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001B824 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 */

void __fastcall CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>(__int64 a1)
{
  CDuckingNotification *v2; // rcx

  v2 = *(CDuckingNotification **)(a1 + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      v2,
      *(CDuckingNotification **)(a1 + 48));
    std::_Deallocate<16,0>(*(void **)(a1 + 40), (*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
