/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030
 * Callers:
 *     _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0 (_lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_--operator().c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18000FF20 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015150 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18001F8F0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180021DA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023C60 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800D72F4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800DAC00 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800DADB0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800C6718 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, unsigned __int64 *))
{
  void (__fastcall ***v2)(_QWORD, unsigned __int64 *); // r13
  char *v4; // rdi
  unsigned __int64 *v5; // rbx
  struct _RTL_CRITICAL_SECTION_DEBUG *v6; // r13
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  unsigned __int64 v8; // rbx
  SIZE_T v9; // rbx
  SIZE_T v10; // r12
  HANDLE ProcessHeap; // rax
  unsigned __int64 *v12; // r14
  signed __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // r12
  unsigned __int64 *i; // rsi
  void (__fastcall *v18)(_QWORD, unsigned __int64 *); // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 *j; // rbx
  unsigned __int64 v21; // rdi
  __int64 v23; // r14
  struct IUnknown *v24; // rdx
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  char *v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  void (__fastcall ***v28)(_QWORD, unsigned __int64 *); // [rsp+88h] [rbp+10h]
  void *v29; // [rsp+90h] [rbp+18h] BYREF

  v28 = a2;
  v2 = a2;
  v25 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v29 = lpCriticalSection;
  v5 = 0LL;
  if ( &v25 == (__int128 *)&lpCriticalSection[1] )
  {
    v16 = (unsigned __int64 *)*((_QWORD *)&v25 + 1);
LABEL_31:
    v12 = (unsigned __int64 *)v25;
    goto LABEL_13;
  }
  v6 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v8 = ((char *)v6 - (char *)DebugInfo) >> 4;
  if ( !v8 )
  {
    v5 = 0LL;
    if ( DebugInfo != v6 )
    {
      v23 = 0LL;
      do
      {
        v24 = *(struct IUnknown **)((char *)&DebugInfo->Type + v23);
        if ( *(struct IUnknown **)v23 != v24 )
          ATL::AtlComPtrAssign((struct IUnknown **)v23, v24);
        *(_DWORD *)(v23 + 8) = *(_DWORD *)((char *)&DebugInfo->CriticalSection + v23);
        v23 += 16LL;
      }
      while ( (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + v23) != v6 );
    }
    v16 = 0LL;
    *((_QWORD *)&v25 + 1) = 0LL;
    v2 = v28;
    goto LABEL_31;
  }
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = 16 * v8;
  v10 = v9;
  if ( v9 >= 0x1000 )
  {
    v5 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v9);
  }
  else if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    v5 = (unsigned __int64 *)HeapAlloc(ProcessHeap, 0, v9);
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  *(_QWORD *)&v25 = v5;
  *((_QWORD *)&v25 + 1) = v5;
  v4 = (char *)v5 + v10;
  v26 = (char *)v5 + v10;
  if ( DebugInfo != v6 )
  {
    v13 = (char *)DebugInfo - (char *)v5;
    v14 = (char *)v5 - (char *)DebugInfo + 8;
    v27 = v14;
    do
    {
      v15 = *(_QWORD *)&DebugInfo->Type;
      *v5 = *(_QWORD *)&DebugInfo->Type;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v14 = v27;
      }
      *(_DWORD *)((char *)&DebugInfo->Type + v14) = *(_DWORD *)((char *)&DebugInfo->Type + v14 + v13);
      v5 += 2;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
      v14 = v27;
    }
    while ( DebugInfo != v6 );
  }
  v16 = v5;
  *((_QWORD *)&v25 + 1) = v5;
  v2 = v28;
LABEL_13:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  for ( i = v12; i != v5; i += 2 )
  {
    v18 = **v2;
    v19 = *i;
    v27 = v19;
    if ( v19 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 8LL))(v19);
    v18(v2, &v27);
  }
  if ( v12 )
  {
    for ( j = v12; j != v16; j += 2 )
    {
      if ( *j )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*j + 16LL))(*j);
    }
    v21 = (v4 - (char *)v12) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v21;
    v29 = v12;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v29, &v27);
      v21 = v27;
      v12 = (unsigned __int64 *)v29;
    }
    operator delete(v12, v21);
  }
  return 0LL;
}
