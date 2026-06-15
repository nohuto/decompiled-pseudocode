/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007600
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180007CB0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180007E04 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
HRESULT __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct CAudioSessionManager *a2,
        struct IAudioProcess *a3,
        struct CAudioSessionInstanceId *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _GUID *a8)
{
  _QWORD *v11; // rdx
  char *v12; // rcx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  LPWSTR *v16; // r13
  int cchWideChar; // r12d
  __int64 v18; // rax
  int *v19; // rcx
  __int64 v20; // r12
  LPWSTR *v21; // r13
  int v22; // r12d
  __int64 v23; // rax
  int *v24; // rcx
  __int64 v25; // rdi
  UUID *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  HRESULT v30; // eax
  HRESULT v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // edi
  struct _RTL_CRITICAL_SECTION *v36; // r13
  __int64 v37; // rsi
  unsigned int v38; // r15d
  _RecurringTask **v39; // r12
  signed int v40; // edi
  PTP_TIMER *v41; // rax
  PTP_TIMER *v42; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v44; // rax
  _DWORD *v45; // rdi
  PTP_TIMER v46; // rax
  std::_Ref_count_base *v47; // rcx
  _BYTE *v48; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v50; // rsi
  _RecurringTask *v51; // rsi
  _QWORD *v52; // rdx
  __int64 v54; // rdi
  __int64 v55; // rax
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v58; // eax
  signed int v59; // eax
  unsigned int lpWideCharStr; // [rsp+20h] [rbp-F8h]
  char *v61; // [rsp+30h] [rbp-E8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v63[4]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v64[56]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v65; // [rsp+98h] [rbp-80h]
  _QWORD v66[7]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD *v67; // [rsp+D8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v63[1] = this;
  v63[0] = this;
  pftDueTime = (struct _FILETIME)a3;
  *((_QWORD *)this + 53) = a2;
  v61 = (char *)a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = (_QWORD *)*((_QWORD *)this + 89);
  if ( v11 == *((_QWORD **)this + 90) )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
      (char *)this + 704,
      v11,
      &v61);
    v12 = v61;
  }
  else
  {
    v12 = 0LL;
    *v11 = a3;
    *((_QWORD *)this + 89) += 8LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
  *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 96LL))(a3) != 0;
  v13 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)this + 584), a4);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x794,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v13,
      lpWideCharStr);
    return v14;
  }
  v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 40LL))(a3);
  *((_QWORD *)this + 108) = *((_QWORD *)this + 82);
  *((_DWORD *)this + 218) = v15;
  if ( (a5 & 1) != 0 )
  {
    *((_BYTE *)this + 231) = 1;
    *((_DWORD *)this + 60) = 2000;
  }
  else
  {
    *((_BYTE *)this + 231) = 0;
  }
  if ( (a5 & 4) != 0 )
  {
    v54 = -1LL;
    v55 = -1LL;
    do
      ++v55;
    while ( aSystemrootSyst_0[v55] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (char *)this + 248,
      L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
      (unsigned int)v55);
    do
      ++v54;
    while ( aSystemrootSyst[v54] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (char *)this + 256,
      L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
      (unsigned int)v54);
    *((_BYTE *)this + 230) = 1;
    *((_DWORD *)this + 60) = 5000;
  }
  else
  {
    v16 = (LPWSTR *)((char *)this + 248);
    cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
    v18 = *((_QWORD *)this + 31);
    if ( cchWideChar > 0 )
    {
      if ( ((1 - *(_DWORD *)(v18 - 8)) | (*(_DWORD *)(v18 - 12) - cchWideChar)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 248, (unsigned int)cchWideChar);
      MultiByteToWideChar(3u, 0, MultiByteStr, -1, *v16, cchWideChar);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)this + 248, (unsigned int)cchWideChar);
    }
    else
    {
      v19 = (int *)(v18 - 24);
      v20 = *(_QWORD *)(v18 - 24);
      if ( *(_DWORD *)(v18 - 24 + 8) )
      {
        if ( v19[4] >= 0 )
        {
          ATL::CStringData::Release((ATL::CStringData *)v19);
          *v16 = (LPWSTR)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) + 24);
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)this + 248, 0LL);
        }
      }
    }
    v21 = (LPWSTR *)((char *)this + 256);
    v22 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
    v23 = *((_QWORD *)this + 32);
    if ( v22 > 0 )
    {
      if ( ((1 - *(_DWORD *)(v23 - 8)) | (*(_DWORD *)(v23 - 12) - v22)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 256, (unsigned int)v22);
      MultiByteToWideChar(3u, 0, MultiByteStr, -1, *v21, v22);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)this + 256, (unsigned int)v22);
    }
    else
    {
      v24 = (int *)(v23 - 24);
      v25 = *(_QWORD *)(v23 - 24);
      if ( *(_DWORD *)(v23 - 24 + 8) )
      {
        if ( v24[4] >= 0 )
        {
          ATL::CStringData::Release((ATL::CStringData *)v24);
          *v21 = (LPWSTR)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25) + 24);
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)this + 256, 0LL);
        }
      }
    }
  }
  *((_DWORD *)this + 102) = (a5 & 0x20) != 0;
  *((_DWORD *)this + 58) = a6;
  *((_DWORD *)this + 59) = a5;
  *((_DWORD *)this + 51) = a7;
  v26 = (UUID *)(v63[0] + 212LL);
  v27 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v27 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v27 )
  {
    *v26 = *a8;
    *((_BYTE *)this + 228) = 1;
  }
  else
  {
    v28 = UuidCreate(v26);
    if ( v28 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x7C4,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
               (const char *)v28,
               lpWideCharStr);
  }
  v29 = UuidCreate((UUID *)((char *)this + 264));
  if ( v29 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x7CD,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             (const char *)v29,
             lpWideCharStr);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  *((_DWORD *)this + 194) = 1065353216;
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v30 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)this + 52);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v30,
      lpWideCharStr);
    return v31;
  }
  v32 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 176LL))(this, a5);
  v33 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v32,
      lpWideCharStr);
    return v33;
  }
  v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 8);
  v35 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v34,
      lpWideCharStr);
    return v35;
  }
  v36 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v37 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v66[0] = off_1801766A8;
  v66[1] = this;
  v67 = v66;
  v38 = *((_DWORD *)this + 60);
  v39 = (_RecurringTask **)((char *)this + 536);
  v40 = 0;
  if ( !*(_BYTE *)(v37 + 80) )
  {
    if ( !*(_QWORD *)v37 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v37 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v40 = LastError;
        if ( LastError > 0 )
          v40 = (unsigned __int16)LastError | 0x80070000;
        if ( v40 < 0 )
          goto LABEL_47;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v37, 1u) )
      {
        v58 = GetLastError();
        v40 = v58;
        if ( v58 > 0 )
          v40 = (unsigned __int16)v58 | 0x80070000;
        if ( v40 < 0 )
          goto LABEL_47;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v37, 1u);
      *(_QWORD *)(v37 + 16) = *(_QWORD *)v37;
    }
    v41 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v42 = v41;
    v63[0] = v41;
    if ( !v41 )
    {
      v40 = -2147024882;
      goto LABEL_47;
    }
    *v41 = 0LL;
    v41[1] = 0LL;
    v41[2] = 0LL;
    v65 = 0LL;
    if ( v67 )
      v65 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v67)(v67, v64);
    v42[3] = (PTP_TIMER)v37;
    ProcessHeap = GetProcessHeap();
    v44 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v45 = v44;
    v63[0] = v44;
    if ( v44 )
    {
      *(_OWORD *)v44 = 0LL;
      v44[2] = 1;
      v44[3] = 1;
      *(_QWORD *)v44 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
      *((_QWORD *)v44 + 9) = 0LL;
      if ( v65 )
        *((_QWORD *)v44 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v65)(v65, (__int64)(v44 + 4));
    }
    else
    {
      v45 = 0LL;
    }
    v46 = (PTP_TIMER)(v45 + 4);
    v42[1] = (PTP_TIMER)(v45 + 4);
    v47 = v42[2];
    v42[2] = (PTP_TIMER)v45;
    if ( v47 )
    {
      std::_Ref_count_base::_Decref(v47);
      v46 = v42[1];
    }
    if ( v46 )
      v40 = 0;
    else
      v40 = -2147024882;
    if ( v65 )
    {
      v48 = v64;
      if ( v65 == v64 )
        v48 = 0LL;
      else
        LOBYTE(v48) = 1;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v65 + 32LL))(v65, v48);
      v65 = 0LL;
    }
    if ( v40 < 0 )
      goto LABEL_100;
    ThreadpoolTimer = CreateThreadpoolTimer(CSerialWorkQueue::TimerCallback, v42, (PTP_CALLBACK_ENVIRON)(v37 + 8));
    v50 = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      v40 = 0;
      *v42 = ThreadpoolTimer;
    }
    else
    {
      v59 = GetLastError();
      v40 = v59;
      if ( v59 > 0 )
        v40 = (unsigned __int16)v59 | 0x80070000;
      *v42 = 0LL;
      if ( v40 < 0 )
      {
LABEL_100:
        _RecurringTask::~_RecurringTask((_RecurringTask *)v42);
        operator delete(v42, 0x20uLL);
        goto LABEL_47;
      }
    }
    pftDueTime = (struct _FILETIME)(-10000LL * v38);
    SetThreadpoolTimer(v50, &pftDueTime, 0, 0);
    if ( v39 != v63 )
    {
      v51 = *v39;
      *v39 = (_RecurringTask *)v42;
      if ( v51 )
      {
        _RecurringTask::~_RecurringTask(v51);
        operator delete(v51, 0x20uLL);
      }
      goto LABEL_47;
    }
    goto LABEL_100;
  }
LABEL_47:
  if ( v67 )
  {
    v52 = v66;
    if ( v67 == v66 )
      v52 = 0LL;
    else
      LOBYTE(v52) = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v67 + 32LL))(v67, v52);
    v67 = 0LL;
  }
  if ( v40 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDC6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v40,
      lpWideCharStr);
  if ( v36 )
    LeaveCriticalSection(v36);
  return 0;
}
