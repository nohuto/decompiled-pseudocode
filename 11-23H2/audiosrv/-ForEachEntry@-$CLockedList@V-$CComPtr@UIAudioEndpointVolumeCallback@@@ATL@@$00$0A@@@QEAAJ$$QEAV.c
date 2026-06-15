/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180003CC8
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180003870 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@00@Z @ 0x180003FA8 (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x180083F4E (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpoint.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@0@@Z @ 0x18012A2FC (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallbac.c)
 *     ??0?$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A4C8 (--0-$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, LPCRITICAL_SECTION *))
{
  __int64 v4; // rsi
  __int64 v5; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r14
  __int64 locked; // rdi
  __int64 v8; // r14
  _QWORD *i; // r15
  void (__fastcall *v11)(_QWORD, LPCRITICAL_SECTION *); // rbx
  __int64 j; // rbx
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  LPCRITICAL_SECTION v15; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v15 = lpCriticalSection;
  if ( &v13 == (__int128 *)&lpCriticalSection[1] )
  {
    locked = *((_QWORD *)&v13 + 1);
  }
  else
  {
    v5 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( (v5 - (__int64)DebugInfo) >> 4 )
    {
      std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        &v13,
        (v5 - (__int64)DebugInfo) >> 4);
      std::_Copy_unchecked<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
        DebugInfo,
        DebugInfo,
        v13);
      locked = std::_Uninitialized_move<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>(
                 DebugInfo,
                 v5,
                 *((_QWORD *)&v13 + 1));
      *((_QWORD *)&v13 + 1) = locked;
      v4 = v14;
    }
    else
    {
      locked = 0LL;
      std::_Copy_unchecked<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
        DebugInfo,
        v5,
        0LL);
      *((_QWORD *)&v13 + 1) = 0LL;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v8 = v13;
  for ( i = (_QWORD *)v13; i != (_QWORD *)locked; i += 2 )
  {
    v11 = **a2;
    ATL::CComPtrBase<IAudioEndpointVolumeCallback>::CComPtrBase<IAudioEndpointVolumeCallback>(&v15, *i);
    v11(a2, &v15);
  }
  if ( v8 )
  {
    for ( j = v8; j != locked; j += 16LL )
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(j);
    std::_Deallocate<16,0>(v8, (v4 - v8) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return 0LL;
}
