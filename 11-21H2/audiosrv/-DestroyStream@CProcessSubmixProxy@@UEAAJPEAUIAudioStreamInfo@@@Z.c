/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180012C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800C6CEC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FABDC (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FACCC (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FADB8 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::DestroyStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  CProcessSubmixProxy *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  struct IAudioStreamInfo **v12; // rcx
  struct IAudioStreamInfo **v13; // r14
  struct IAudioStreamInfo **i; // rax
  struct IAudioStreamInfo **v15; // rdx
  __int64 v16; // rbx
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r14
  signed int v21; // esi
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rsi
  _DWORD *v27; // rdx
  std::_Ref_count_base *v28; // rcx
  _BYTE *v29; // rdx
  struct _TP_WORK *ThreadpoolWork; // r14
  _QWORD *v31; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v37; // eax
  signed int v38; // eax
  int v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  CProcessSubmixProxy *v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v48[7]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp-58h]
  _BYTE v50[56]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v51; // [rsp+E8h] [rbp-18h]
  __int128 v52; // [rsp+F0h] [rbp-10h] BYREF
  int v53; // [rsp+100h] [rbp+0h]
  HANDLE hObject; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  __int64 v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+250h] [rbp+150h]
  __int64 v59; // [rsp+380h] [rbp+280h]
  int v60; // [rsp+4B0h] [rbp+3B0h]
  __int64 v61; // [rsp+4B8h] [rbp+3B8h]
  __int64 v62; // [rsp+5E8h] [rbp+4E8h]
  int v63; // [rsp+5F0h] [rbp+4F0h]
  unsigned __int16 *v64; // [rsp+600h] [rbp+500h] BYREF
  int v65; // [rsp+608h] [rbp+508h]
  int v66; // [rsp+60Ch] [rbp+50Ch]
  void *v67; // [rsp+610h] [rbp+510h]
  int v68; // [rsp+618h] [rbp+518h]
  int v69; // [rsp+61Ch] [rbp+51Ch]
  CProcessSubmixProxy **v70; // [rsp+620h] [rbp+520h]
  __int64 v71; // [rsp+628h] [rbp+528h]
  __int64 *v72; // [rsp+630h] [rbp+530h]
  __int64 v73; // [rsp+638h] [rbp+538h]
  __int64 *v74; // [rsp+640h] [rbp+540h]
  __int64 v75; // [rsp+648h] [rbp+548h]
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+598h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL);
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = v5(v4, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9C3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v39);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v43 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    LODWORD(v44) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v43);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 4u )
  {
    v46 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v47 = *((_QWORD *)this + 24);
    v9 = 0LL;
    if ( this != (CProcessSubmixProxy *)8 )
      v9 = this;
    v45 = v9;
    v74 = &v46;
    v75 = 8LL;
    v72 = &v47;
    v73 = 8LL;
    v70 = &v45;
    v71 = 8LL;
    v43 = 0x40B000000LL;
    v44 = 0LL;
    v64 = *(unsigned __int16 **)(v8 + 8);
    v65 = *v64;
    v66 = 2;
    v67 = &unk_1801897BF;
    v68 = 72;
    v69 = 1;
    LODWORD(v40) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), &v43, 0LL, 0LL, 5, &v64);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
    --*((_DWORD *)this + 28);
  v10 = *(_QWORD *)a2;
  Context = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, LPVOID *))(v10 + 112))(a2, &Context);
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v12 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  v13 = (struct IAudioStreamInfo **)*((_QWORD *)this + 21);
  if ( v13 != v12 )
  {
    do
    {
      if ( *v13 == a2 )
        break;
      ++v13;
    }
    while ( v13 != v12 );
    if ( v13 != v12 )
    {
      for ( i = v13 + 1; i != v12; ++i )
      {
        if ( *i != a2 )
          *v13++ = *i;
      }
    }
  }
  v15 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  if ( v13 != v15 )
  {
    memmove_0(v13, v15, 0LL);
    *((_QWORD *)this + 22) = v13;
  }
  v52 = 0LL;
  v53 = 0;
  hObject = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  (*(void (__fastcall **)(char *, __int128 *, _QWORD))(*((_QWORD *)a2 - 1) + 48LL))((char *)a2 - 8, &v52, 0LL);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( this != (CProcessSubmixProxy *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  (*(void (__fastcall **)(LPVOID, __int64, __int64, _QWORD))(*(_QWORD *)Context + 200LL))(
    Context,
    2LL,
    0xFFFFFFFFLL,
    v11);
  if ( Context )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v16 = 0LL;
    v40 = 0LL;
    v17 = (**((__int64 (__fastcall ***)(char *, GUID *, __int64 *))this - 1))(
            (char *)this - 8,
            &GUID_00000038_0000_0000_c000_000000000046,
            &v40);
    if ( v17 < 0 )
    {
      v33 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    else
    {
      *(_QWORD *)fPending = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v40 + 24LL))(v40, fPending);
      if ( v17 < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)fPending);
        v34 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
      else
      {
        v18 = *(_QWORD *)fPending;
        v16 = *(_QWORD *)fPending;
        if ( *(_QWORD *)fPending )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 8LL))(*(_QWORD *)fPending);
          v18 = *(_QWORD *)fPending;
        }
        if ( v18 )
        {
          *(_QWORD *)fPending = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v17 = 0;
      }
    }
    if ( v17 < 0 )
      goto LABEL_79;
    v20 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v48[0] = off_1801676F8;
    v48[1] = v16;
    v49 = v48;
    v21 = 0;
    if ( *(_BYTE *)(v20 + 80) )
    {
LABEL_73:
      if ( v49 )
      {
        v31 = v48;
        if ( v49 == v48 )
          v31 = 0LL;
        else
          LOBYTE(v31) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v49 + 32LL))(v49, v31);
        v49 = 0LL;
      }
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9E2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v21,
          v39);
LABEL_79:
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      return 0LL;
    }
    if ( !*(_QWORD *)v20 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v20 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v21 = LastError;
        if ( LastError > 0 )
          v21 = (unsigned __int16)LastError | 0x80070000;
        if ( v21 < 0 )
          goto LABEL_73;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v20, 1u) )
      {
        v37 = GetLastError();
        v21 = v37;
        if ( v37 > 0 )
          v21 = (unsigned __int16)v37 | 0x80070000;
        if ( v21 < 0 )
          goto LABEL_73;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v20, 1u);
      *(_QWORD *)(v20 + 16) = *(_QWORD *)v20;
    }
    v22 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v22;
    if ( !v22 )
    {
      v21 = -2147024882;
      goto LABEL_73;
    }
    *v22 = 0LL;
    v22[1] = 0LL;
    v22[2] = 0LL;
    v51 = 0LL;
    if ( v49 )
      v51 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v49)(v49, v50);
    v23[2] = v20;
    ProcessHeap = GetProcessHeap();
    v25 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v26 = v25;
    if ( v25 )
    {
      v25[2] = 1;
      v25[3] = 1;
      *(_QWORD *)v25 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
      *((_QWORD *)v25 + 9) = 0LL;
      if ( v51 )
        *((_QWORD *)v25 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v51)(v51, (__int64)(v25 + 4));
    }
    else
    {
      v26 = 0LL;
    }
    v27 = v26 + 4;
    *v23 = v26 + 4;
    v28 = (std::_Ref_count_base *)v23[1];
    v23[1] = v26;
    if ( v28 )
    {
      std::_Ref_count_base::_Decref(v28);
      v27 = (_DWORD *)*v23;
    }
    v21 = 0;
    if ( !v27 )
      v21 = -2147024882;
    if ( v51 )
    {
      v29 = v50;
      if ( v51 == v50 )
        v29 = 0LL;
      else
        LOBYTE(v29) = 1;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v51 + 32LL))(v51, v29);
      v51 = 0LL;
    }
    if ( v21 >= 0 )
    {
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v23,
                         (PTP_CALLBACK_ENVIRON)(v20 + 8));
      if ( ThreadpoolWork )
      {
        v21 = 0;
LABEL_72:
        SubmitThreadpoolWork(ThreadpoolWork);
        goto LABEL_73;
      }
      v38 = GetLastError();
      v21 = v38;
      if ( v38 > 0 )
        v21 = (unsigned __int16)v38 | 0x80070000;
      if ( v21 >= 0 )
        goto LABEL_72;
    }
    _WorkTask::`scalar deleting destructor'((_WorkTask *)v23, (unsigned int)v27);
    goto LABEL_73;
  }
  return 0LL;
}
