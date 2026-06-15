/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000A750 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18000A884 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18005128C (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x180051BB8 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotification.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x180053EB4 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$.c)
 *     ?_Change_array@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@_K1@Z @ 0x180053F64 (-_Change_array@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A.c)
 *     _std::vector_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry_std::allocator_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry___::_Emplace_reallocate_CAudioSessionNotificationProcess_&_int__::_1_::catch$0 @ 0x18007CCB8 (_std--vector_CLockedList_CAudioSessionNotificationProcess_1_0_--LockedListEntry_std--allocator_C.c)
 *     ??1?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAA@XZ @ 0x1800E7888 (--1-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V-$alloca.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E7928 (--1CAudioSessionManager@@QEAA@XZ.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800E8910 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
