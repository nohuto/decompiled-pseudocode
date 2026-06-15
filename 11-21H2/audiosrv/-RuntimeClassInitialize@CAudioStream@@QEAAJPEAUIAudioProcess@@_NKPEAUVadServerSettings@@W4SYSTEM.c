/*
 * XREFs of ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@@Z @ 0x18001CBC0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000F3B4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BED90 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800E302C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  wil::details *v10; // rcx
  HANDLE Event; // rsi
  wil::details *v12; // rbp
  wil::details *v13; // rcx
  HANDLE v14; // rsi
  __int64 i; // rdx
  wil::details *v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void *v19; // rbx
  void **v20; // r14
  void *v21; // rsi
  unsigned __int64 v22; // rax
  void *v23; // rbx
  void **v24; // rsi
  void *v25; // rbp
  unsigned __int64 v26; // rax
  void *v27; // rbx
  void **v28; // r15
  void *v29; // rbp
  int v30; // esi
  bool v31; // al
  __int64 v32; // rbx
  __int64 v33; // r14
  std::_Ref_count_base *v34; // rdx
  std::_Ref_count_base *v35; // rcx
  signed __int64 v36; // rax
  signed __int64 v37; // rax
  __int64 v38; // rbx
  DWORD LastError; // ebx
  void *v41; // rdx
  int LastErrorFailHr; // eax
  unsigned int v43; // ebx
  DWORD v44; // ebx
  void *v45; // rdx
  int v46; // eax
  unsigned int v47; // ebx
  HANDLE ProcessHeap; // rax
  void *v49; // r8
  __int64 v50; // rdx
  HANDLE v51; // rax
  void *v52; // r8
  HANDLE v53; // rax
  void *v54; // r8
  int v55; // r8d
  int v56; // r9d
  int v57; // [rsp+20h] [rbp-88h]
  int v58; // [rsp+20h] [rbp-88h]
  int v59; // [rsp+40h] [rbp-68h] BYREF
  int v60; // [rsp+44h] [rbp-64h] BYREF
  int v61; // [rsp+48h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-58h] BYREF
  union _RTL_RUN_ONCE *v63; // [rsp+58h] [rbp-50h] BYREF
  int v64; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  WINBOOL fPending; // [rsp+B0h] [rbp+8h] BYREF
  char v67; // [rsp+C0h] [rbp+18h]

  v67 = a3;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v12 = *(wil::details **)(a1 + 384);
    if ( v12 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v12, v41);
      SetLastError(LastError);
    }
    *(_QWORD *)(a1 + 384) = Event;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
    v43 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v57);
      return v43;
    }
  }
  v14 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v14 )
  {
    GetLastError();
    v16 = *(wil::details **)(a1 + 376);
    if ( v16 )
    {
      v44 = GetLastError();
      wil::details::CloseHandle(v16, v45);
      SetLastError(v44);
    }
    *(_QWORD *)(a1 + 376) = v14;
  }
  else
  {
    v46 = wil::details::GetLastErrorFailHr(v13);
    v47 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v46,
        v57);
      return v47;
    }
  }
  v17 = *(unsigned __int16 *)(a7 + 2);
  if ( *(_DWORD *)(a1 + 84) == (_DWORD)v17 )
    goto LABEL_27;
  *(_DWORD *)(a1 + 84) = v17;
  v18 = 4 * v17;
  if ( !is_mul_ok(v17, 4uLL) )
    v18 = -1LL;
  v19 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
  v20 = (void **)(a1 + 504);
  if ( (WINBOOL *)(a1 + 504) == &fPending )
  {
    if ( !v19 )
      goto LABEL_14;
    ProcessHeap = GetProcessHeap();
    v49 = v19;
  }
  else
  {
    v21 = *v20;
    *v20 = v19;
    if ( !v21 )
      goto LABEL_14;
    ProcessHeap = GetProcessHeap();
    v49 = v21;
  }
  HeapFree(ProcessHeap, 0, v49);
LABEL_14:
  if ( !*v20 )
  {
    v50 = 190LL;
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v57);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v58);
    return 2147942414LL;
  }
  v22 = 4LL * *(unsigned int *)(a1 + 84);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 84), 4uLL) )
    v22 = -1LL;
  v23 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
  v24 = (void **)(a1 + 104);
  if ( (WINBOOL *)(a1 + 104) == &fPending )
  {
    if ( !v23 )
      goto LABEL_19;
    v51 = GetProcessHeap();
    v52 = v23;
  }
  else
  {
    v25 = *v24;
    *v24 = v23;
    if ( !v25 )
      goto LABEL_19;
    v51 = GetProcessHeap();
    v52 = v25;
  }
  HeapFree(v51, 0, v52);
LABEL_19:
  if ( !*v24 )
  {
    v50 = 192LL;
    goto LABEL_67;
  }
  v26 = 4LL * *(unsigned int *)(a1 + 84);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 84), 4uLL) )
    v26 = -1LL;
  v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
  v28 = (void **)(a1 + 112);
  if ( (WINBOOL *)(a1 + 112) == &fPending )
  {
    if ( !v27 )
      goto LABEL_24;
    v53 = GetProcessHeap();
    v54 = v27;
  }
  else
  {
    v29 = *v28;
    *v28 = v27;
    if ( !v29 )
      goto LABEL_24;
    v53 = GetProcessHeap();
    v54 = v29;
  }
  HeapFree(v53, 0, v54);
LABEL_24:
  if ( !*v28 )
  {
    v50 = 194LL;
    goto LABEL_67;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 84); i = (unsigned int)(i + 1) )
  {
    *((_DWORD *)*v20 + (unsigned int)i) = 1065353216;
    *((_DWORD *)*v24 + (unsigned int)i) = 1065353216;
  }
LABEL_27:
  *(_BYTE *)(a1 + 40) = v67;
  v30 = a6;
  v31 = (a4 & 4) != 0 || a6 == 2;
  *(_BYTE *)(a1 + 42) = v31;
  *(_BYTE *)(a1 + 41) = (a4 & 1) != 0;
  v32 = a5;
  *(_BYTE *)(a1 + 120) = *(_DWORD *)(a5 + 136) != 0;
  *(_DWORD *)(a1 + 400) = *(_DWORD *)(v32 + 48);
  *(_DWORD *)(a1 + 408) = *(_DWORD *)(v32 + 60);
  *(_BYTE *)(a1 + 412) = *(_DWORD *)(v32 + 68) != 0;
  *(_DWORD *)(a1 + 404) = v30;
  v33 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, i);
  if ( v33 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 16LL))(v33, i);
  *(_DWORD *)(a1 + 432) = a4;
  *(_OWORD *)(a1 + 416) = *(_OWORD *)v32;
  *(_BYTE *)(a1 + 43) = *(_DWORD *)(v32 + 56) != 0;
  if ( !v30 )
  {
    v34 = qword_1801C2A68;
    if ( qword_1801C2A68 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_1801C2A68 + 2);
      v34 = qword_1801C2A68;
    }
    *(_QWORD *)(a1 + 528) = g_RenderStreamTaperTranslator;
    v35 = *(std::_Ref_count_base **)(a1 + 536);
    *(_QWORD *)(a1 + 536) = v34;
    if ( v35 )
      std::_Ref_count_base::_Decref(v35);
  }
  *(_OWORD *)(a1 + 440) = *(_OWORD *)(v32 + 72);
  *(_OWORD *)(a1 + 456) = *(_OWORD *)(v32 + 88);
  *(_OWORD *)(a1 + 472) = *(_OWORD *)(v32 + 104);
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_DWORD *)(a1 + 480) = 0;
  do
  {
    v36 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 392) = v36 + 1;
  }
  while ( v36 == -1 );
  do
    v37 = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !v37 );
  *(_QWORD *)(a1 + 392) = v37;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v63 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v64 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v63);
  }
  v38 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v38 > 4u
    && (*(_DWORD *)(v38 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v38 + 24) & 0x200LL) == *(_QWORD *)(v38 + 24) )
  {
    v59 = *(_DWORD *)(a1 + 400);
    v63 = *(union _RTL_RUN_ONCE **)(a1 + 392);
    v60 = v30;
    v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v38,
      (unsigned int)&unk_180188F40,
      v55,
      v56,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v63,
      (__int64)&v59);
  }
  return 0LL;
}
