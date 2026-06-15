/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x18003ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v9; // rax
  int v10; // ebx
  void *v11; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  void *Src; // [rsp+A8h] [rbp+20h] BYREF

  Src = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v6,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormat",
    pftDueTime);
  *a4 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **))(*(_QWORD *)g_PolicyConfig + 32LL))(
          g_PolicyConfig,
          a2,
          a3,
          &Src);
  if ( v10 >= 0 )
  {
    v11 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v11;
    if ( v11 )
      memcpy_0(v11, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v10 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 2293, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
