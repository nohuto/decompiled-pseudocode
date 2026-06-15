/*
 * XREFs of ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@00@Z @ 0x18000A94C
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18000A884 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 */

__int64 __fastcall std::_Copy_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v7; // eax

  for ( i = a1; i != a2; a3 += 16LL )
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(a3, *(_QWORD *)i);
    v7 = *(_DWORD *)(i + 8);
    i += 16LL;
    *(_DWORD *)(a3 + 8) = v7;
  }
  return a3;
}
