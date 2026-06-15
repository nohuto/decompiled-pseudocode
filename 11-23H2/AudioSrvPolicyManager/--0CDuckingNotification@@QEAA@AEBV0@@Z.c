/*
 * XREFs of ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18001FFD8
 * Callers:
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001FB24 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allo.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FB98 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180020F40 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021220 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800215A0 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18001FEBC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

CDuckingNotification *__fastcall CDuckingNotification::CDuckingNotification(
        CDuckingNotification *this,
        const struct CDuckingNotification *a2)
{
  volatile int *v4; // rdx
  __int64 v5; // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  std::wstring::wstring((_QWORD *)this + 2, (__int64)a2 + 16);
  v5 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), v4);
  return this;
}
