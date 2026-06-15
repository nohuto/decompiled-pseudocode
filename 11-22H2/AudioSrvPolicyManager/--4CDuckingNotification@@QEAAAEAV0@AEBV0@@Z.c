/*
 * XREFs of ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x1800204F8
 * Callers:
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18001F9CC (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@std@@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@Z @ 0x18001FF50 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList@.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@0@Z @ 0x1800238E4 (-erase@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULoc.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5F0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180014360 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DCE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

__int64 __fastcall CDuckingNotification::operator=(__int64 a1, __int64 a2)
{
  int v4; // eax
  char *v5; // rdx
  char *v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = (char *)(a2 + 16);
  *(_DWORD *)(a1 + 8) = v4;
  v6 = (char *)(a1 + 16);
  if ( v6 != v5 )
  {
    v7 = *((_QWORD *)v5 + 2);
    if ( *((_QWORD *)v5 + 3) >= 8uLL )
      v5 = *(char **)v5;
    std::wstring::assign(v6, v5, v7);
  }
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v8;
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 12), (volatile int *)v5);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v9,
      (volatile int *)v5);
  return a1;
}
