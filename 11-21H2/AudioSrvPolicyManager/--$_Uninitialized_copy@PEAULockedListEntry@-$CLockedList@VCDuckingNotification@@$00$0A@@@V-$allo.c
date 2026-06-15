/*
 * XREFs of ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18000F080
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8 (-_Copy_assign@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocat.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Uninitialized_copy<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = a3;
  v9 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    do
    {
      *(_QWORD *)v3 = *(_QWORD *)(v5 - 16);
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v5 - 8);
      std::wstring::wstring(v3 + 16, v5);
      v6 = *(_QWORD *)(v5 + 32);
      *(_QWORD *)(v3 + 48) = v6;
      if ( v6 )
      {
        do
          v7 = *(_DWORD *)(v6 + 12);
        while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v7 + 1, v7) );
        v3 = v9;
      }
      *(_DWORD *)(v3 + 56) = *(_DWORD *)(v5 + 40);
      v3 += 64LL;
      v9 = v3;
      v5 += 64LL;
    }
    while ( v5 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
    (_QWORD *)v3,
    (_QWORD *)v3);
  return v3;
}
