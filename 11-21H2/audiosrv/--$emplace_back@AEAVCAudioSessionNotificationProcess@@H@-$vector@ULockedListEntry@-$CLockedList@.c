/*
 * XREFs of ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DEB08
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800DF7F4 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DE80C (--$construct@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAud.c)
 */

__int64 *__fastcall std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CAudioSessionNotificationProcess &,int>(
        __int64 *a1,
        __int64 *a2,
        int *a3)
{
  __int64 v4; // rdx
  __int64 *result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Emplace_reallocate<CAudioSessionNotificationProcess &,int>(
             a1,
             v4,
             (__int64)a2,
             (__int64)a3);
  std::_Default_allocator_traits<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::construct<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,CAudioSessionNotificationProcess &,int>(
    (__int64)a1,
    v4,
    a2,
    a3);
  result = (__int64 *)a1[1];
  a1[1] = (__int64)(result + 2);
  return result;
}
