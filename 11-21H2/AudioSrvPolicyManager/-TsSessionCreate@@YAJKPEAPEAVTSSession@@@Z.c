/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764
 * Callers:
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002D3D8 (-TS_ServiceStart@@YAXXZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18002AA18 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18002AC8C (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18002AE48 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18002BA9C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D610 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180032B44 (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800410E8 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
__int64 __fastcall TsSessionCreate(DWORD SessionId, struct TSSession **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  TSSession *v6; // rbx
  void *v8; // rax
  CDriverListener *v9; // rcx
  TSSession *v10; // rbx
  char *v11; // rdi
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  int refreshed; // eax
  unsigned int v14; // edi
  HANDLE ProcessHeap; // rax
  void *v16; // rax
  __int64 v17; // rsi
  HANDLE v18; // rax
  _QWORD *v19; // r14
  HANDLE v20; // rax
  void *v21; // rax
  __int64 v22; // rbx
  HANDLE v23; // rax
  _QWORD *v24; // r15
  HANDLE v25; // rax
  void *v26; // rax
  __int64 v27; // rbx
  HANDLE v28; // rax
  _QWORD *v29; // rsi
  __int64 *v30; // rbx
  HANDLE v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rcx
  char **v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 *v36; // rbx
  HANDLE v37; // rax
  _QWORD *v38; // r15
  __int64 v39; // rcx
  char **v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 *v42; // rbx
  HANDLE v43; // rax
  _QWORD *v44; // r12
  __int64 v45; // rcx
  char **v46; // rbx
  unsigned __int64 v47; // rdx
  __int64 *v48; // rbx
  HANDLE v49; // rax
  _QWORD *v50; // r14
  __int64 v51; // rcx
  char **v52; // rbx
  unsigned __int64 v53; // rdx
  HANDLE v54; // rax
  void *v55; // rax
  __int64 v56; // rbx
  HANDLE v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rcx
  struct TSSession *v60; // rcx
  _DWORD *v61; // rcx
  TSSession *v62; // rbx
  int v63; // [rsp+30h] [rbp-148h] BYREF
  float v64; // [rsp+34h] [rbp-144h] BYREF
  int v65; // [rsp+38h] [rbp-140h] BYREF
  void *v66; // [rsp+40h] [rbp-138h] BYREF
  TSSession *v67; // [rsp+48h] [rbp-130h] BYREF
  DWORD v68; // [rsp+50h] [rbp-128h] BYREF
  void *v69[2]; // [rsp+58h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+68h] [rbp-110h] BYREF
  int *v71; // [rsp+88h] [rbp-F0h]
  __int64 v72; // [rsp+90h] [rbp-E8h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v68 = SessionId;
  *a2 = 0LL;
  v67 = 0LL;
  v4 = TSSession::Create(SessionId, &v67);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( SessionId )
    {
      v10 = v67;
    }
    else
    {
      v8 = operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
      v66 = v8;
      if ( v8 )
        v9 = CDriverListener::CDriverListener((CDriverListener *)v8);
      else
        v9 = 0LL;
      v10 = v67;
      v11 = (char *)v67 + 1080;
      if ( (void **)((char *)v67 + 1080) == &v66 )
      {
        if ( v9 )
          (**(void (__fastcall ***)(CDriverListener *, __int64))v9)(v9, 1LL);
      }
      else
      {
        v12 = *(void (__fastcall ****)(_QWORD, __int64))v11;
        *(_QWORD *)v11 = v9;
        if ( v12 )
          (**v12)(v12, 1LL);
      }
      if ( !*(_QWORD *)v11 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3BF,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        TSSession::~TSSession(v10);
        operator delete(v10);
        return 2147942414LL;
      }
    }
    *((_DWORD *)v10 + 1) = GetTsAudioProtocol(SessionId);
    *((_DWORD *)v10 + 2) = ++dword_18005C684;
    refreshed = TsSessionRefreshSessionInformation(v10);
    v14 = refreshed;
    if ( refreshed >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v16 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
      v66 = v16;
      if ( v16 )
        v17 = DuckingDescriptorAndId::DuckingDescriptorAndId((__int64)v16, L"Comm", -28.0, 400000LL, 1, 0);
      else
        v17 = 0LL;
      v18 = GetProcessHeap();
      v19 = HeapAlloc(v18, 0, 0x10uLL);
      v19[1] = v17;
      *v19 = *((_QWORD *)v10 + 133);
      *((_QWORD *)v10 + 133) = v19;
      v20 = GetProcessHeap();
      v21 = HeapAlloc(v20, 0, 0x30uLL);
      v66 = v21;
      if ( v21 )
        v22 = DuckingDescriptorAndId::DuckingDescriptorAndId((__int64)v21, L"SR", -18.0, 400000LL, 0, 0);
      else
        v22 = 0LL;
      v23 = GetProcessHeap();
      v24 = HeapAlloc(v23, 0, 0x10uLL);
      v24[1] = v22;
      *v24 = *v19;
      *v19 = v24;
      v64 = -INFINITY;
      v25 = GetProcessHeap();
      v26 = HeapAlloc(v25, 0, 0x30uLL);
      v66 = v26;
      if ( v26 )
        v27 = DuckingDescriptorAndId::DuckingDescriptorAndId((__int64)v26, L"4", v64, 400000LL, 0, 0);
      else
        v27 = 0LL;
      v28 = GetProcessHeap();
      v29 = HeapAlloc(v28, 0, 0x10uLL);
      v29[1] = v27;
      *v29 = *v24;
      *v24 = v29;
      v64 = 0.0;
      v65 = 400000;
      v63 = -1042284544;
      v30 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)v69,
              (__int64)L"3",
              (__int64)&v63,
              &v65,
              &v64);
      v31 = GetProcessHeap();
      v32 = HeapAlloc(v31, 0, 0x10uLL);
      v33 = *v30;
      *v30 = 0LL;
      v32[1] = v33;
      *v32 = *v29;
      *v29 = v32;
      v34 = (char **)v69[0];
      if ( v69[0] )
      {
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v69[0] + 32);
        v35 = (unsigned __int64)v34[3];
        if ( v35 >= 8 )
          std::_Deallocate<16,0>(*v34, 2 * v35 + 2);
        v34[2] = 0LL;
        v34[3] = (char *)7;
        *(_WORD *)v34 = 0;
        operator delete(v34);
      }
      v63 = 0;
      v65 = 400000;
      v64 = FLOAT_N6_0;
      v36 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v66,
              (__int64)L"1",
              (__int64)&v64,
              &v65,
              &v63);
      v37 = GetProcessHeap();
      v38 = HeapAlloc(v37, 0, 0x10uLL);
      v39 = *v36;
      *v36 = 0LL;
      v38[1] = v39;
      *v38 = *v32;
      *v32 = v38;
      v40 = (char **)v66;
      if ( v66 )
      {
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v66 + 32);
        v41 = (unsigned __int64)v40[3];
        if ( v41 >= 8 )
          std::_Deallocate<16,0>(*v40, 2 * v41 + 2);
        v40[2] = 0LL;
        v40[3] = (char *)7;
        *(_WORD *)v40 = 0;
        operator delete(v40);
      }
      v63 = 0;
      v65 = 400000;
      v64 = -18.0;
      v42 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)v69,
              (__int64)L"2",
              (__int64)&v64,
              &v65,
              &v63);
      v43 = GetProcessHeap();
      v44 = HeapAlloc(v43, 0, 0x10uLL);
      v45 = *v42;
      *v42 = 0LL;
      v44[1] = v45;
      *v44 = *v38;
      *v38 = v44;
      v46 = (char **)v69[0];
      if ( v69[0] )
      {
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v69[0] + 32);
        v47 = (unsigned __int64)v46[3];
        if ( v47 >= 8 )
          std::_Deallocate<16,0>(*v46, 2 * v47 + 2);
        v46[2] = 0LL;
        v46[3] = (char *)7;
        *(_WORD *)v46 = 0;
        operator delete(v46);
      }
      v63 = 1;
      v65 = 400000;
      v64 = -28.0;
      v48 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v66,
              (__int64)L"5",
              (__int64)&v64,
              &v65,
              &v63);
      v49 = GetProcessHeap();
      v50 = HeapAlloc(v49, 0, 0x10uLL);
      v51 = *v48;
      *v48 = 0LL;
      v50[1] = v51;
      *v50 = *v44;
      *v44 = v50;
      v52 = (char **)v66;
      if ( v66 )
      {
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v66 + 32);
        v53 = (unsigned __int64)v52[3];
        if ( v53 >= 8 )
          std::_Deallocate<16,0>(*v52, 2 * v53 + 2);
        v52[2] = 0LL;
        v52[3] = (char *)7;
        *(_WORD *)v52 = 0;
        operator delete(v52);
      }
      v54 = GetProcessHeap();
      v55 = HeapAlloc(v54, 0, 0x30uLL);
      v69[0] = v55;
      if ( v55 )
        v56 = DuckingDescriptorAndId::DuckingDescriptorAndId((__int64)v55, L"6", -INFINITY, 400000LL, 0, 1);
      else
        v56 = 0LL;
      v57 = GetProcessHeap();
      v58 = HeapAlloc(v57, 0, 0x10uLL);
      v58[1] = v56;
      *v58 = *v50;
      *v50 = v58;
      EnterCriticalSection(&stru_18005C5D8);
      v66 = &stru_18005C5D8;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        v59,
        (__int64)v69,
        &v68,
        (__int64 *)&v67);
      v60 = (struct TSSession *)*((_QWORD *)v69[0] + 3);
      *a2 = v60;
      TsSessionConsiderForPrimaryConsoleAudioSession(v60);
      LeaveCriticalSection(&stru_18005C5D8);
      v61 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v61 > 4u )
      {
        v63 = v68;
        v71 = &v63;
        v72 = 4LL;
        tlgWriteTransfer_EventWriteTransfer((__int64)v61, (unsigned __int8 *)dword_180051443, 0LL, 0LL, 3u, &v70);
      }
      v62 = v67;
      if ( v67 )
      {
        TSSession::~TSSession(v67);
        operator delete(v62);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C6,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)refreshed);
      TSSession::~TSSession(v10);
      operator delete(v10);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
    v6 = v67;
    if ( v67 )
    {
      TSSession::~TSSession(v67);
      operator delete(v6);
    }
    return v5;
  }
}
