/*
 * XREFs of ?_Umove@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU34@00@Z @ 0x180013480
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Umove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]

  v4 = a4;
  v10 = a4;
  if ( a2 != a3 )
  {
    v6 = a2 + 16;
    do
    {
      *(_QWORD *)v4 = *(_QWORD *)(v6 - 16);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v6 - 8);
      std::wstring::wstring((_QWORD *)(v4 + 16), v6);
      v7 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v4 + 48) = v7;
      if ( v7 )
      {
        do
          v8 = *(_DWORD *)(v7 + 12);
        while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 12), v8 + 1, v8) );
        v4 = v10;
      }
      *(_DWORD *)(v4 + 56) = *(_DWORD *)(v6 + 40);
      v4 += 64LL;
      v10 = v4;
      v6 += 64LL;
    }
    while ( v6 - 16 != a3 );
  }
  std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
    (_QWORD *)v4,
    (_QWORD *)v4);
  return v4;
}
