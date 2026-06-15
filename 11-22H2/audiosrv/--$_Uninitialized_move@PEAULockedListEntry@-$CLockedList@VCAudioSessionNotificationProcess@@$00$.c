/*
 * XREFs of ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x180053EB4
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x180053DD0 (--$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 */

__int64 *__fastcall std::_Uninitialized_move<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // rax
  signed __int64 v7; // r8
  char *v8; // r9
  __int64 v9; // rcx
  char *v10; // rdx

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v7 = (char *)a1 - (char *)a3;
    v8 = (char *)((char *)v3 - (char *)a1);
    do
    {
      v9 = *v5;
      v10 = (char *)v5 + (_QWORD)v8;
      *v5 = 0LL;
      v5 += 2;
      *v3 = v9;
      v3 += 2;
      *((_DWORD *)v10 + 2) = *(_DWORD *)&v10[v7 + 8];
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(v3, v3);
  return v3;
}
