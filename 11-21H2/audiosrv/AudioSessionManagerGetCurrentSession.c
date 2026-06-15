/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x1800272B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetCurrentSession(_QWORD ***a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5)
{
  _FILETIME v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  _QWORD **v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ebx
  int v24; // r14d
  unsigned int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r9d
  int v31; // [rsp+20h] [rbp-81h]
  int v32; // [rsp+20h] [rbp-81h]
  LPVOID Context; // [rsp+50h] [rbp-51h] BYREF
  __int64 v34; // [rsp+58h] [rbp-49h] BYREF
  __int64 v35; // [rsp+60h] [rbp-41h] BYREF
  __int64 v36; // [rsp+68h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+70h] [rbp-31h] BYREF
  DWORD CurrentThreadId; // [rsp+80h] [rbp-21h]
  const wchar_t *v39; // [rsp+88h] [rbp-19h]
  _FILETIME v40; // [rsp+90h] [rbp-11h]
  char v41; // [rsp+98h] [rbp-9h]
  __int64 v42; // [rsp+9Ch] [rbp-5h]
  union _RTL_RUN_ONCE *v43; // [rsp+A8h] [rbp+7h] BYREF
  int v44; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]
  __int64 fPending; // [rsp+100h] [rbp+5Fh] BYREF
  int v47; // [rsp+118h] [rbp+77h] BYREF

  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v43 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v44 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v43);
  }
  v11 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  CurrentThreadId = GetCurrentThreadId();
  v39 = L"AudioSessionManagerGetCurrentSession";
  v40 = v9;
  v41 = 0;
  v42 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v10 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v10 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v13 = *a1;
  v14 = *(_QWORD *)g_PolicyManager;
  v36 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v14 + 32))(
          g_PolicyManager,
          0LL,
          &v36);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v15,
      v31);
  }
  else
  {
    v17 = *(_QWORD *)g_DeviceEnumerator;
    v35 = 0LL;
    v18 = *v13 + 2;
    if ( (*v13)[5] >= 8uLL )
      v18 = (_QWORD *)*v18;
    v19 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *, __int64 *))(v17 + 40))(g_DeviceEnumerator, v18, &v35);
    v16 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v19,
        v31);
    }
    else
    {
      v34 = 0LL;
      v20 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
              v35,
              &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
              &v34);
      v16 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E8,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
          (const char *)(unsigned int)v20,
          v31);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C1,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)v16,
          v32);
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 24LL))(v34, &v47);
        v16 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v21,
            v31);
        }
        else
        {
          v22 = 2;
          if ( (a3 & 0x80000) != 0 )
            v22 = 0;
          v23 = v22 | ((a3 & 0x10000000) != 0);
          v24 = a3 & 0x60000000;
          if ( g_ADGProcess
            && LODWORD(g_ADGProcess[2].OwningThread) == (*(unsigned int (__fastcall **)(_QWORD *))(*v13[1] + 40LL))(v13[1]) )
          {
            v24 = a3 & 0x40000000 | 0x20000000;
          }
          if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v13[1] + 88LL))(v13[1]) )
          {
            v24 |= 0x200000u;
            v23 |= 0x40000000u;
          }
          if ( v47 == 1 )
            v25 = v23 & 0xFFFFFFFD;
          else
            v25 = v23 | 8;
          v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*v13)[12] + 8LL))(
                  (*v13)[12],
                  v36,
                  a2,
                  v25);
          v16 = v26;
          if ( v26 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5EB,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v26,
              v24);
          else
            v16 = 0;
        }
      }
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v27, v28, v29);
  return v16;
}
