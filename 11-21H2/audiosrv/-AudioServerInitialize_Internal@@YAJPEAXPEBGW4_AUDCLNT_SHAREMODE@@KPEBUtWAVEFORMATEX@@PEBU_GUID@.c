/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820
 * Callers:
 *     AudioServerInitialize @ 0x180025320 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x180108960 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18000BA80 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180024CB0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180025050 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003918C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800DB760 (WPP_SF_dS.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180117E50 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  _FILETIME v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v16; // rbx
  struct CAudioThreadPool *v17; // rdi
  HANDLE OwningThread; // rdx
  CAudioDGProcess *v19; // rcx
  int Instance; // ebx
  DWORD v21; // eax
  void *v22; // rdi
  LPCRITICAL_SECTION v23; // rbx
  LPCRITICAL_SECTION v24; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  int v30; // eax
  int v31; // ebx
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL fPending[2]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h]
  enum _AUDCLNT_SHAREMODE v36; // [rsp+7Ch] [rbp-84h]
  union _RTL_RUN_ONCE *v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  unsigned __int16 **v39; // [rsp+90h] [rbp-70h]
  const struct _GUID *v40; // [rsp+98h] [rbp-68h]
  const struct tWAVEFORMATEX *v41; // [rsp+A0h] [rbp-60h]
  _QWORD pv[2]; // [rsp+A8h] [rbp-58h] BYREF
  DWORD CurrentThreadId; // [rsp+B8h] [rbp-48h]
  const wchar_t *v44; // [rsp+C0h] [rbp-40h]
  _FILETIME v45; // [rsp+C8h] [rbp-38h]
  char v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D4h] [rbp-2Ch]
  LPCRITICAL_SECTION v48; // [rsp+E0h] [rbp-20h]
  __int128 v49; // [rsp+E8h] [rbp-18h]
  __int128 v50; // [rsp+F8h] [rbp-8h] BYREF

  v35 = a4;
  v36 = a3;
  v41 = a5;
  v40 = a6;
  v39 = a8;
  v49 = *(_OWORD *)a7;
  v50 = v49;
  EtwEventActivityIdControl(4LL, &v50);
  v12 = g_AudioHealthMonitor;
  v13 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v37 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v38 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v37);
  }
  v14 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v14;
  CurrentThreadId = GetCurrentThreadId();
  v44 = L"AudioServerInitialize_Internal";
  v45 = v12;
  v46 = 0;
  v47 = 0LL;
  if ( (unsigned int)v13 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v13 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v13 / 3, 0);
    }
  }
  v32 = 0LL;
  *(_QWORD *)fPending = 0LL;
  *a10 = 0LL;
  v16 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v48 = v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    v17 = ThreadPool;
    EnterCriticalSection(v16);
    v37 = (union _RTL_RUN_ONCE *)v16;
    OwningThread = v16[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v17 + 24LL))(
        v17,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v17 + 32LL))(
        v17,
        v16[3].OwningThread,
        1LL);
    }
    LeaveCriticalSection(v16);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v16);
  }
  LeaveCriticalSection(v16);
  Instance = CAudioDGProcess::CheckADGStatus(v19);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                          + 32LL))(
                 g_PolicyManager,
                 a1,
                 &v32);
    if ( Instance >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32);
      if ( (unsigned int)IsProcessAllowed(v21, a2) )
      {
        if ( !a9
          || (v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32),
              (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a9 + 176LL))(a9) == v31) )
        {
          Instance = ATL::CComObject<CVADServer>::CreateInstance(fPending);
          v22 = *(void **)fPending;
          if ( !Instance )
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 8LL))(*(_QWORD *)fPending);
            Instance = (*(__int64 (__fastcall **)(void *, __int64, const unsigned __int16 *, _QWORD, int, const struct tWAVEFORMATEX *, const struct _GUID *, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *))(*(_QWORD *)v22 + 48LL))(
                         v22,
                         v32,
                         a2,
                         (unsigned int)v36,
                         v35,
                         v41,
                         v40,
                         a7,
                         v39,
                         a9);
            if ( Instance >= 0 )
            {
              v23 = g_ADGProcess;
              EnterCriticalSection(g_ADGProcess);
              v37 = (union _RTL_RUN_ONCE *)v23;
              if ( ++LODWORD(v23[1].DebugInfo) == 1 )
              {
                CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v23);
                CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v23);
              }
              LeaveCriticalSection(v23);
              *a10 = v22;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8LL))(v22);
              Instance = 0;
            }
          }
          if ( v22 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        else
        {
          Instance = -2147024891;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            30,
            (unsigned int)&WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids,
            v30,
            (__int64)a2);
        }
        Instance = -2147024891;
      }
    }
  }
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v32 = 0LL;
  }
  v24 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v37 = (union _RTL_RUN_ONCE *)v24;
  if ( LODWORD(v24[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v24);
  LeaveCriticalSection(v24);
  if ( Instance < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xAD5u, Instance);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v26, v27, v28);
  EtwEventActivityIdControl(4LL, &v50);
  return (unsigned int)Instance;
}
