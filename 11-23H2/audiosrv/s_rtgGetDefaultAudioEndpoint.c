/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x180035330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180035780 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_rtgGetDefaultAudioEndpoint(__int64 a1, unsigned int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  char *v9; // rbx
  struct _FILETIME v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  DynamicAudioEndpointManager *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  int DefaultAudioEndpoint; // r14d
  unsigned int v18; // eax
  void *v19; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v22; // rsi
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, WINBOOL *); // r15
  void *v25; // r12
  void *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  _WORD *v29; // rcx
  unsigned __int64 v30; // rdi
  _WORD *v31; // rax
  int v32; // r9d
  unsigned __int64 v33; // rdx
  signed __int64 v34; // r8
  __int16 v35; // cx
  __int64 v36; // rdx
  DWORD LastError; // r14d
  _WORD *lpMem; // [rsp+30h] [rbp-51h]
  WINBOOL fPending[2]; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  __int64 v41; // [rsp+48h] [rbp-39h] BYREF
  __int64 v42; // [rsp+50h] [rbp-31h] BYREF
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp-29h] BYREF
  int v44; // [rsp+60h] [rbp-21h]
  _QWORD pv[2]; // [rsp+68h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+78h] [rbp-9h]
  const wchar_t *v47; // [rsp+80h] [rbp-1h]
  struct _FILETIME v48; // [rsp+88h] [rbp+7h]
  char v49; // [rsp+90h] [rbp+Fh]
  __int64 v50; // [rsp+94h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v9 = 0LL;
  lpMem = 0LL;
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CFD38;
    qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v44 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&pftDueTime);
  }
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v47 = L"s_rtgGetDefaultAudioEndpoint";
  v48 = v10;
  v49 = 0;
  v50 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( a3 >= 9 )
  {
    DefaultAudioEndpoint = -2147024809;
    v19 = 0LL;
    goto LABEL_16;
  }
  if ( !a4 || !a5 )
  {
    DefaultAudioEndpoint = -2147467261;
    v19 = 0LL;
    goto LABEL_16;
  }
  *a5 = 0;
  v14 = g_DynamicAudioEndpointManager;
  Context = 0LL;
  v41 = 0LL;
  *(_QWORD *)fPending = 0LL;
  v15 = *(_QWORD *)g_PolicyManager;
  v42 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v15 + 32))(
          g_PolicyManager,
          a1,
          &v42);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v36 = 232LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_12;
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v14, v18, a2, (unsigned int)a3);
  if ( DefaultAudioEndpoint < 0 )
  {
LABEL_12:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
    if ( *(_QWORD *)fPending )
      CoTaskMemFree(*(LPVOID *)fPending);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&Context);
    goto LABEL_15;
  }
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  v22 = Context;
  v16 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))Context)(
          Context,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v41);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v36 = 237LL;
    goto LABEL_49;
  }
  v23 = v41;
  v24 = *(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v41 + 56LL);
  v25 = *(void **)fPending;
  if ( *(_QWORD *)fPending )
  {
    LastError = GetLastError();
    CoTaskMemFree(v25);
    SetLastError(LastError);
  }
  v16 = v24(v23, fPending);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v36 = 238LL;
    goto LABEL_49;
  }
  v9 = *(char **)fPending;
  v26 = 0LL;
  *(_QWORD *)fPending = 0LL;
  if ( v42 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    v26 = *(void **)fPending;
  }
  if ( v26 )
    CoTaskMemFree(v26);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v9 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)&v9[2 * v27] );
    v28 = 2 * v27 + 2;
    if ( v28 > 0x40000 )
    {
      v19 = 0LL;
    }
    else
    {
      v29 = operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
      lpMem = v29;
      if ( v29 )
      {
        v30 = v28 >> 1;
        if ( v30 - 1 > 0x7FFFFFFE )
        {
          DefaultAudioEndpoint = -2147024809;
          v32 = -2147024809;
          if ( v30 )
          {
            *v29 = 0;
            v19 = v29;
            goto LABEL_16;
          }
        }
        else
        {
          v31 = v29;
          v32 = 0;
          v33 = 2147483646 - v30;
          v34 = v9 - (char *)v29;
          while ( v30 + v33 )
          {
            v35 = *(_WORD *)((char *)v31 + v34);
            if ( !v35 )
            {
              if ( !v30 )
              {
LABEL_40:
                --v31;
                v32 = -2147024774;
                break;
              }
              break;
            }
            *v31++ = v35;
            if ( !--v30 )
              goto LABEL_40;
          }
          *v31 = 0;
          v29 = lpMem;
        }
        DefaultAudioEndpoint = v32;
        if ( v32 >= 0 )
        {
          *a4 = v29;
          *a5 = 0;
          goto LABEL_17;
        }
        goto LABEL_15;
      }
      v19 = 0LL;
    }
    DefaultAudioEndpoint = -2147024882;
    goto LABEL_16;
  }
  DefaultAudioEndpoint = -2147023728;
LABEL_15:
  v19 = lpMem;
LABEL_16:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v19);
LABEL_17:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v9);
  return (unsigned int)DefaultAudioEndpoint;
}
