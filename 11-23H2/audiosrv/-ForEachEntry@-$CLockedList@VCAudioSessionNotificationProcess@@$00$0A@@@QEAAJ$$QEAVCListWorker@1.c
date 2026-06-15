/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000A750
 * Callers:
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 * Callees:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18000A884 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, LPCRITICAL_SECTION *))
{
  __int64 v4; // rdi
  const char *v5; // r9
  _QWORD *i; // r14
  __int64 result; // rax
  void (__fastcall *v8)(_QWORD, LPCRITICAL_SECTION *); // rbx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPCRITICAL_SECTION v12; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v12 = lpCriticalSection;
    if ( &v9 != (__int128 *)&lpCriticalSection[1] )
    {
      std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Assign_range<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
        &v9,
        lpCriticalSection[1].DebugInfo,
        *(_QWORD *)&lpCriticalSection[1].LockCount);
      v4 = v10;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = (_QWORD *)v9; i != *((_QWORD **)&v9 + 1); i += 2 )
    {
      v8 = **a2;
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        &v12,
        *i);
      v8(a2, &v12);
    }
    if ( (_QWORD)v9 )
    {
      std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
        v9,
        *((_QWORD *)&v9 + 1));
      std::_Deallocate<16,0>(v9, (v4 - v9) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v12) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xDF,
                     (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                     v5);
    return (unsigned int)v12;
  }
  return result;
}
