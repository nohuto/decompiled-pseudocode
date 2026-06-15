/*
 * XREFs of ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18000A884
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000A750 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@00@Z @ 0x18000A94C (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18005128C (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x180051BC8 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotification.c)
 */

__int64 __fastcall std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Assign_range<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx

  v3 = (a3 - a2) >> 4;
  v5 = (__int64)(a1[1] - *a1) >> 4;
  if ( v3 <= v5 )
  {
    v10 = *a1 + 16 * v3;
    std::_Copy_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
      a2,
      a3,
      *a1);
    result = std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
               v10,
               a1[1]);
  }
  else
  {
    if ( v3 > (__int64)(a1[2] - *a1) >> 4 )
    {
      std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        a1,
        (a3 - a2) >> 4);
      v5 = 0LL;
    }
    v8 = a2 + 16 * v5;
    std::_Copy_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
      a2,
      v8,
      *a1);
    result = std::_Uninitialized_copy<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
               v8,
               a3,
               a1[1]);
    v10 = result;
  }
  a1[1] = v10;
  return result;
}
