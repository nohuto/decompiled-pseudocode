/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F6E0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800202B0 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800CF768 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x1800D0D80 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotification.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x1800D5EFC (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800D6354 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@00@Z @ 0x1800DE284 (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, LPCRITICAL_SECTION *))
{
  __int64 v4; // r12
  _QWORD *v5; // rbx
  char *v6; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *i; // r14
  char *v12; // r12
  struct _RTL_CRITICAL_SECTION **p_CriticalSection; // rsi
  LPCRITICAL_SECTION v14; // rax
  void (__fastcall *v15)(_QWORD, LPCRITICAL_SECTION *); // rdi
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  LPCRITICAL_SECTION v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v18 = lpCriticalSection;
  v5 = 0LL;
  if ( &v16 == (__int128 *)&lpCriticalSection[1] )
  {
    v8 = (_QWORD *)*((_QWORD *)&v16 + 1);
LABEL_5:
    v9 = (_QWORD *)v16;
    goto LABEL_6;
  }
  v6 = *(char **)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( !((v6 - (char *)DebugInfo) >> 4) )
  {
    v5 = 0LL;
    if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v6 )
    {
      p_CriticalSection = &DebugInfo->CriticalSection;
      v14 = (LPCRITICAL_SECTION)(-8LL - (_QWORD)DebugInfo);
      v18 = (LPCRITICAL_SECTION)(-8LL - (_QWORD)DebugInfo);
      do
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(
          (char *)p_CriticalSection + (_QWORD)v14,
          *(p_CriticalSection - 1));
        *(_DWORD *)((char *)p_CriticalSection - (char *)DebugInfo) = *(_DWORD *)p_CriticalSection;
        p_CriticalSection += 2;
        v14 = v18;
      }
      while ( p_CriticalSection - 1 != (struct _RTL_CRITICAL_SECTION **)v6 );
    }
    v8 = 0LL;
    *((_QWORD *)&v16 + 1) = 0LL;
    goto LABEL_5;
  }
  std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
    &v16,
    (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4);
  v9 = (_QWORD *)v16;
  std::_Copy_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
    DebugInfo,
    DebugInfo,
    v16);
  v5 = (_QWORD *)*((_QWORD *)&v16 + 1);
  if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v6 )
  {
    v12 = (char *)DebugInfo - *((_QWORD *)&v16 + 1);
    v18 = (LPCRITICAL_SECTION)(*((_QWORD *)&v16 + 1) - (_QWORD)DebugInfo + 8LL);
    do
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        v5,
        *(_QWORD *)&DebugInfo->Type);
      *(_DWORD *)((char *)&v18->DebugInfo + (_QWORD)DebugInfo) = *(_DWORD *)((char *)&v18->DebugInfo
                                                                           + (_QWORD)DebugInfo
                                                                           + (unsigned __int64)v12);
      v5 += 2;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
    }
    while ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v6 );
  }
  std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(v5, v5);
  v8 = v5;
  *((_QWORD *)&v16 + 1) = v5;
  v4 = v17;
LABEL_6:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  for ( i = v9; i != v5; i += 2 )
  {
    v15 = **a2;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
      &v18,
      *i);
    v15(a2, &v18);
  }
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(v9, v8);
    std::_Deallocate<16,0>(v9, (v4 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return 0LL;
}
