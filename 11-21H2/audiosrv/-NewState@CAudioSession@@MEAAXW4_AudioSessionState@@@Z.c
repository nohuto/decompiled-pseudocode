/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18001F8F0
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001F7D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800D93B0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800202B0 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C22EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     WPP_SF_Sdd @ 0x1800DB64C (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  enum _AudioSessionState v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // r13
  __int64 v6; // r15
  volatile signed __int32 *v7; // r12
  std::_Ref_count_base *v8; // rcx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v10; // r15
  __int64 v11; // r13
  signed int v12; // r12d
  PTP_TIMER *v13; // rax
  PTP_TIMER *v14; // r15
  HANDLE ProcessHeap; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // r12
  PTP_TIMER v18; // rdx
  std::_Ref_count_base *v19; // rcx
  _BYTE *v20; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v22; // r13
  _RecurringTask **v23; // rax
  _RecurringTask *v24; // r13
  _QWORD *v25; // rdx
  int v26; // r9d
  __int64 v27; // r8
  int v28; // eax
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v31; // eax
  signed int v32; // eax
  int v33; // [rsp+20h] [rbp-B9h]
  union _RTL_RUN_ONCE *v34; // [rsp+40h] [rbp-99h] BYREF
  int v35; // [rsp+48h] [rbp-91h]
  void **v36; // [rsp+50h] [rbp-89h]
  CAudioSession *v37; // [rsp+58h] [rbp-81h]
  enum _AudioSessionState v38; // [rsp+60h] [rbp-79h]
  __int32 v39; // [rsp+64h] [rbp-75h]
  _QWORD v40[7]; // [rsp+68h] [rbp-71h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp-39h]
  _BYTE v42[56]; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE *v43; // [rsp+E0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+140h] [rbp+67h] BYREF
  unsigned __int32 v46; // [rsp+148h] [rbp+6Fh] BYREF
  struct _FILETIME pftDueTime; // [rsp+150h] [rbp+77h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = *((_DWORD *)this + 84);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      56,
      (unsigned int)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      *((_QWORD *)this + 82),
      v4,
      a2);
  }
  if ( v4 == AudioSessionStateInactive )
  {
    if ( a2 == 1 )
    {
      v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
      v6 = *((_QWORD *)this + 67);
      *((_QWORD *)this + 67) = 0LL;
      if ( v6 )
      {
        if ( *(_QWORD *)v6 )
        {
          SetThreadpoolTimer(*(PTP_TIMER *)v6, 0LL, 0, 0);
          WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v6, 1);
          CloseThreadpoolTimer(*(PTP_TIMER *)v6);
        }
        *(_QWORD *)(v6 + 8) = 0LL;
        v7 = *(volatile signed __int32 **)(v6 + 16);
        *(_QWORD *)(v6 + 16) = 0LL;
        if ( v7 )
        {
          if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
          }
          v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
        }
        v8 = *(std::_Ref_count_base **)(v6 + 16);
        if ( v8 )
          std::_Ref_count_base::_Decref(v8);
        operator delete((void *)v6, 0x20uLL);
      }
      if ( v5 )
        LeaveCriticalSection(v5);
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 340));
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          57LL,
          &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
          *((_QWORD *)this + 82));
      }
      *((_BYTE *)this + 904) = 1;
      *((_DWORD *)this + 84) = 1;
LABEL_21:
      v9 = *((_DWORD *)this + 58);
      if ( (v9 & 0x200000) != 0 )
        *((_DWORD *)this + 58) = v9 & 0xFFDFFFFF;
LABEL_60:
      if ( v4 == a2 )
        return;
      goto LABEL_61;
    }
LABEL_59:
    *((_DWORD *)this + 84) = a2;
    if ( a2 != 1 )
      goto LABEL_60;
    goto LABEL_21;
  }
  if ( v4 != AudioSessionStateActive || a2 )
    goto LABEL_59;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 348));
  *((_QWORD *)this + 40) = GetTickCount64();
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      58LL,
      &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      *((_QWORD *)this + 82));
  }
  *((_BYTE *)this + 904) = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v11 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v40[0] = off_1801766A8;
  v40[1] = this;
  v41 = v40;
  v46 = *((_DWORD *)this + 60);
  v12 = 0;
  if ( !*(_BYTE *)(v11 + 80) )
  {
    if ( !*(_QWORD *)v11 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v11 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v12 = LastError;
        if ( LastError > 0 )
          v12 = (unsigned __int16)LastError | 0x80070000;
        if ( v12 < 0 )
          goto LABEL_50;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v11, 1u) )
      {
        v31 = GetLastError();
        v12 = v31;
        if ( v31 > 0 )
          v12 = (unsigned __int16)v31 | 0x80070000;
        if ( v12 < 0 )
          goto LABEL_50;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v11, 1u);
      *(_QWORD *)(v11 + 16) = *(_QWORD *)v11;
    }
    v13 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( !v13 )
    {
      v12 = -2147024882;
      goto LABEL_49;
    }
    *v13 = 0LL;
    v13[1] = 0LL;
    v13[2] = 0LL;
    v43 = 0LL;
    if ( v41 )
      v43 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v41)(v41, v42);
    v14[3] = (PTP_TIMER)v11;
    ProcessHeap = GetProcessHeap();
    v16 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v17 = v16;
    if ( v16 )
    {
      v16[2] = 1;
      v16[3] = 1;
      *(_QWORD *)v16 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
      *((_QWORD *)v16 + 9) = 0LL;
      if ( v43 )
        *((_QWORD *)v16 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v43)(v43, (__int64)(v16 + 4));
    }
    else
    {
      v17 = 0LL;
    }
    v18 = (PTP_TIMER)(v17 + 4);
    v14[1] = (PTP_TIMER)(v17 + 4);
    v19 = v14[2];
    v14[2] = (PTP_TIMER)v17;
    if ( v19 )
    {
      std::_Ref_count_base::_Decref(v19);
      v18 = v14[1];
    }
    v12 = 0;
    if ( !v18 )
      v12 = -2147024882;
    if ( v43 )
    {
      v20 = v42;
      if ( v43 == v42 )
        v20 = 0LL;
      else
        LOBYTE(v20) = 1;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v43 + 32LL))(v43, v20);
      v43 = 0LL;
    }
    if ( v12 >= 0 )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                          v14,
                          (PTP_CALLBACK_ENVIRON)(v11 + 8));
      v22 = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v12 = 0;
        *v14 = ThreadpoolTimer;
        goto LABEL_46;
      }
      v32 = GetLastError();
      v12 = v32;
      if ( v32 > 0 )
        v12 = (unsigned __int16)v32 | 0x80070000;
      *v14 = 0LL;
      if ( v12 >= 0 )
      {
LABEL_46:
        pftDueTime = (struct _FILETIME)(-10000LL * v46);
        SetThreadpoolTimer(v22, &pftDueTime, 0, 0);
        v23 = (_RecurringTask **)((char *)this + 536);
        if ( (LPVOID *)((char *)this + 536) != &Context )
        {
          v24 = *v23;
          *v23 = (_RecurringTask *)v14;
          if ( v24 )
          {
            _RecurringTask::~_RecurringTask(v24);
            operator delete(v24, 0x20uLL);
          }
          goto LABEL_49;
        }
      }
    }
    _RecurringTask::~_RecurringTask((_RecurringTask *)v14);
    operator delete(v14, 0x20uLL);
LABEL_49:
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  }
LABEL_50:
  if ( v41 )
  {
    v25 = v40;
    if ( v41 == v40 )
      v25 = 0LL;
    else
      LOBYTE(v25) = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v41 + 32LL))(v41, v25);
    v41 = 0LL;
  }
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDC6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v12,
      v33);
  if ( v10 )
    LeaveCriticalSection(v10);
  *((_DWORD *)this + 84) = 0;
LABEL_61:
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v34 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v35 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v34);
  }
  v27 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v27 > 4u
    && (*(_DWORD *)(v27 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v27 + 24) & 0x200LL) == *(_QWORD *)(v27 + 24) )
  {
    v46 = a2;
    pftDueTime.dwLowDateTime = v4;
    v34 = (union _RTL_RUN_ONCE *)*((_QWORD *)this + 82);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v27,
      (unsigned int)&unk_180188ACD,
      v27,
      v26,
      (__int64)&v34,
      (__int64)&pftDueTime,
      (__int64)&v46);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v28 = CAudioSessionManager::OnSessionStateChanged(
          *((CAudioSessionManager **)this + 53),
          (CAudioSession *)((char *)this + 8),
          v4,
          (enum _AudioSessionState)a2);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD27,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v28,
      v33);
  v36 = &CAudioSessionStateChanged::`vftable';
  v37 = this;
  v38 = v4;
  v39 = a2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
}
