/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800E8910
 * Callers:
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800E7FF0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 *     ??$_Move_unchecked@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@00@Z @ 0x1800E7128 (--$_Move_unchecked@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@std@@V_lambda_528344502efd793a61e0fa482b585e6c_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_528344502efd793a61e0fa482b585e6c_@@@Z @ 0x1800E742C (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-_ea_1800E742C.c)
 */

__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  EnterCriticalSection(lpCriticalSection);
  v9 = 0;
  v4 = *(__int64 **)&lpCriticalSection[1].LockCount;
  v8[0] = a2;
  v8[1] = &v9;
  v5 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>>,_lambda_528344502efd793a61e0fa482b585e6c_>(
         &v10,
         (__int64 *)lpCriticalSection[1].DebugInfo,
         v4,
         (__int64)v8);
  if ( *v5 != v4 )
  {
    v6 = std::_Move_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
           v4,
           *(__int64 **)&lpCriticalSection[1].LockCount,
           *v5);
    std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
      v6,
      *(__int64 **)&lpCriticalSection[1].LockCount);
    *(_QWORD *)&lpCriticalSection[1].LockCount = v6;
  }
  LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return 0LL;
}
