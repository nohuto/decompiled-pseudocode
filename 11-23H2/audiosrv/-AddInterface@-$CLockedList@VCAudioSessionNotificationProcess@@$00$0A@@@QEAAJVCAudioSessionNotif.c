/*
 * XREFs of ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180053D0C
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180053CA0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x180052174 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x180053DAC (--$emplace_back@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION_DEBUG *v4; // r15
  PRTL_CRITICAL_SECTION_DEBUG i; // rsi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h]
  LPCRITICAL_SECTION v9; // [rsp+60h] [rbp+18h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  v9 = lpCriticalSection;
  v4 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
  for ( i = lpCriticalSection[1].DebugInfo;
        i != v4 && !operator==((__int64 *)i, a2);
        i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 16) )
  {
    ;
  }
  if ( i == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
  {
    v7 = 1;
    std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CAudioSessionNotificationProcess &,int>(
      &lpCriticalSection[1],
      a2,
      &v7);
  }
  else
  {
    ++LODWORD(i->CriticalSection);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return 0LL;
}
