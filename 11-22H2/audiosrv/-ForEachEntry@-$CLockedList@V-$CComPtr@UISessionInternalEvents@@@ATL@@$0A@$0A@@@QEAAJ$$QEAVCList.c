/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180016DD0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180045860 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D9C (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800E2AF0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800E2DD0 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800E2ED0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18002639C (--$_Assign_range@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, void **))
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  void **i; // rsi
  __int64 *j; // rsi
  unsigned __int64 v8; // rbx
  void (__fastcall *v10)(_QWORD, void **); // r12
  void *v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  void *v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v14 = lpCriticalSection;
  if ( &v12 != (__int128 *)&lpCriticalSection[1] )
  {
    std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Assign_range<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
      &v12,
      lpCriticalSection[1].DebugInfo,
      *(_QWORD *)&lpCriticalSection[1].LockCount);
    v4 = v13;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v5 = (__int64 *)v12;
  for ( i = (void **)v12; i != *((void ***)&v12 + 1); i += 2 )
  {
    v10 = **a2;
    v11 = *i;
    v14 = v11;
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    v10(a2, &v14);
  }
  if ( v5 )
  {
    for ( j = v5; j != *((__int64 **)&v12 + 1); j += 2 )
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(j);
    v8 = (v4 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = v8;
    v14 = v5;
    if ( v8 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, &v15);
      v5 = (__int64 *)v14;
      v8 = v15;
    }
    operator delete(v5, v8);
  }
  return 0LL;
}
