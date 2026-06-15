/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448
 * Callers:
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18000F080 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000F130 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010330 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010760 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?_Umove@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU34@00@Z @ 0x180013480 (-_Umove@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULo.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18001718C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *result; // rax

  a1[2] = 0LL;
  v2 = (_OWORD *)a2;
  a1[3] = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  if ( v4 >= 8 )
  {
    v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = v4 | 7;
    if ( (v4 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v7 = v6 + 1;
      v5 = v4 | 7;
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v7);
    *a1 = v8;
    memcpy_0(v8, v2, 2 * v4 + 2);
  }
  else
  {
    v5 = 7LL;
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v4;
  result = a1;
  a1[3] = v5;
  return result;
}
