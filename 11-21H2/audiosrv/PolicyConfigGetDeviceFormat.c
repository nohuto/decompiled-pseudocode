/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x18003F780
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  int v13; // r9d
  void *v14; // rax
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
  v11 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **))(*(_QWORD *)g_PolicyConfig + 32LL))(
          g_PolicyConfig,
          a2,
          a3,
          &Src);
  if ( v11 >= 0 )
  {
    v14 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v14;
    if ( v14 )
      memcpy_0(v14, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v11 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 0x82Du, v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v12, v13);
  return (unsigned int)v11;
}
