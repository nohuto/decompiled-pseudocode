/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x18001EE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18001FE90 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_rtgGetDefaultAudioEndpoint(__int64 a1, unsigned int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  char *v8; // rbx
  _WORD *v9; // r13
  _FILETIME v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  DynamicAudioEndpointManager *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  int DefaultAudioEndpoint; // r14d
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, WINBOOL *); // r12
  char *v22; // r15
  char *v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  _WORD *v27; // rax
  unsigned __int64 v28; // rdx
  __int16 v29; // cx
  HANDLE ProcessHeap; // rax
  __int64 v32; // rdx
  DWORD LastError; // r14d
  int *v34; // [rsp+20h] [rbp-61h]
  WINBOOL fPending[2]; // [rsp+30h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-49h] BYREF
  __int64 v37; // [rsp+40h] [rbp-41h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-39h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp-31h] BYREF
  int v40; // [rsp+58h] [rbp-29h]
  _QWORD pv[2]; // [rsp+60h] [rbp-21h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-11h]
  const wchar_t *v43; // [rsp+78h] [rbp-9h]
  _FILETIME v44; // [rsp+80h] [rbp-1h]
  char v45; // [rsp+88h] [rbp+7h]
  __int64 v46; // [rsp+8Ch] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v48; // [rsp+F0h] [rbp+6Fh] BYREF
  _QWORD *v49; // [rsp+F8h] [rbp+77h]

  v49 = a4;
  v8 = 0LL;
  v9 = 0LL;
  LOBYTE(v48) = 0;
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v40 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&pftDueTime);
  }
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v43 = L"s_rtgGetDefaultAudioEndpoint";
  v44 = v10;
  v45 = 0;
  v46 = 0LL;
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
    goto LABEL_41;
  }
  if ( !v49 || !a5 )
  {
    DefaultAudioEndpoint = -2147467261;
    goto LABEL_41;
  }
  *a5 = 0;
  v14 = g_DynamicAudioEndpointManager;
  v38 = 0LL;
  v37 = 0LL;
  *(_QWORD *)fPending = 0LL;
  v15 = *(_QWORD *)g_PolicyManager;
  Context = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, LPVOID *))(v15 + 32))(
          g_PolicyManager,
          a1,
          &Context);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v32 = 230LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v16,
      (int)v34);
LABEL_40:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)fPending);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
    if ( DefaultAudioEndpoint < 0 )
      goto LABEL_41;
LABEL_42:
    DefaultAudioEndpoint = -2147023728;
    goto LABEL_41;
  }
  v18 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 40LL))(Context);
  v34 = &v48;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v14, v18, a2, (unsigned int)a3);
  if ( DefaultAudioEndpoint < 0 )
    goto LABEL_40;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v19 = (__int64)v38;
  v16 = (**v38)(v38, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v37);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v32 = 235LL;
    goto LABEL_48;
  }
  v20 = v37;
  v21 = *(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v37 + 56LL);
  v22 = *(char **)fPending;
  if ( *(_QWORD *)fPending )
  {
    LastError = GetLastError();
    CoTaskMemFree(v22);
    SetLastError(LastError);
  }
  v16 = v21(v20, fPending);
  DefaultAudioEndpoint = v16;
  if ( v16 < 0 )
  {
    v32 = 236LL;
    goto LABEL_48;
  }
  v8 = *(char **)fPending;
  v23 = 0LL;
  *(_QWORD *)fPending = 0LL;
  if ( Context )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
    v23 = *(char **)fPending;
  }
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( !v8 )
    goto LABEL_42;
  v24 = -1LL;
  do
    ++v24;
  while ( *(_WORD *)&v8[2 * v24] );
  v25 = 2 * v24 + 2;
  if ( v25 > 0x40000 )
  {
    v9 = 0LL;
    goto LABEL_50;
  }
  v9 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
LABEL_50:
    DefaultAudioEndpoint = -2147024882;
    goto LABEL_41;
  }
  v26 = v25 >> 1;
  if ( v26 - 1 > 0x7FFFFFFE )
  {
    DefaultAudioEndpoint = -2147024809;
    if ( v26 )
    {
      *v9 = 0;
      goto LABEL_41;
    }
  }
  else
  {
    v27 = v9;
    DefaultAudioEndpoint = 0;
    v28 = 2147483646 - v26;
    while ( v26 + v28 )
    {
      v29 = *(_WORD *)((char *)v27 + v8 - (char *)v9);
      if ( !v29 )
      {
        if ( v26 )
          break;
LABEL_51:
        --v27;
        DefaultAudioEndpoint = -2147024774;
        break;
      }
      *v27++ = v29;
      if ( !--v26 )
        goto LABEL_51;
    }
    *v27 = 0;
  }
  if ( DefaultAudioEndpoint < 0 )
  {
LABEL_41:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
    goto LABEL_39;
  }
  *v49 = v9;
  *a5 = (unsigned __int8)v48;
LABEL_39:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v8);
  return (unsigned int)DefaultAudioEndpoint;
}
