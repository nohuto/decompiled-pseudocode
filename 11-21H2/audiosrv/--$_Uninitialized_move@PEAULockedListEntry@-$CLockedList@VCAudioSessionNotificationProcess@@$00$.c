/*
 * XREFs of ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x1800DE714
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DE314 (--$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800CF768 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 */

__int64 *__fastcall std::_Uninitialized_move<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // rax
  signed __int64 v6; // r8
  char *v7; // r9
  __int64 v8; // rcx
  char *v9; // rdx

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)((char *)v3 - (char *)a1);
    do
    {
      v8 = *v5;
      v9 = (char *)v5 + (_QWORD)v7;
      *v5 = 0LL;
      v5 += 2;
      *v3 = v8;
      v3 += 2;
      *((_DWORD *)v9 + 2) = *(_DWORD *)&v9[v6 + 8];
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(v3, v3);
  return v3;
}
