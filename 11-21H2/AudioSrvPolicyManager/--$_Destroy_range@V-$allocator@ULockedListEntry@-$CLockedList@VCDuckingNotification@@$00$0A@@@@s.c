/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4
 * Callers:
 *     ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x1800087FC (--1-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x180008BA8 (--1-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULockedL.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180008BF0 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?_Destroy@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@0@Z @ 0x18000DEC4 (-_Destroy@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@U.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18000F080 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x18000F608 (--1-$_Uninitialized_backout_al@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800122B0 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8 (-_Copy_assign@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocat.c)
 *     ?_Umove@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU34@00@Z @ 0x180013480 (-_Umove@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = v3[1];
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v4);
      if ( *v3 >= 8uLL )
        std::_Deallocate<16,0>((char *)*(v3 - 3), 2LL * *v3 + 2);
      *(v3 - 1) = 0LL;
      *v3 = 7LL;
      *((_WORD *)v3 - 12) = 0;
      v3 += 8;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
