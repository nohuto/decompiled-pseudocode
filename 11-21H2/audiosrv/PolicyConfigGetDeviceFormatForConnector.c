/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x1800EB750
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatForConnector(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v8; // ebx
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // rdx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r9d
  void *v19; // rcx
  void *Src; // [rsp+38h] [rbp-21h] BYREF
  void **p_Src; // [rsp+40h] [rbp-19h]
  int v23[2]; // [rsp+48h] [rbp-11h] BYREF
  char v24; // [rsp+50h] [rbp-9h]
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  if ( a3 > 3 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x836,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80070057LL);
    return v8;
  }
  Src = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v10,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector",
    pftDueTime);
  *a5 = 0LL;
  v12 = *(_QWORD *)g_PolicyConfig;
  *(_QWORD *)v23 = 0LL;
  p_Src = &Src;
  v24 = 1;
  v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(v12 + 296))(
         g_PolicyConfig,
         a2,
         a3,
         a4,
         v23);
  if ( v24 )
  {
    v13 = *p_Src;
    *p_Src = *(void **)v23;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v14 = 2109LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  v15 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *a5 = v15;
  if ( !v15 )
  {
    v8 = -2147024882;
    v14 = 2116LL;
    goto LABEL_10;
  }
  memcpy_0(v15, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  v8 = 0;
LABEL_12:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v16, v17, v18);
  v19 = Src;
  Src = 0LL;
  if ( v19 )
    CoTaskMemFree(v19);
  return v8;
}
