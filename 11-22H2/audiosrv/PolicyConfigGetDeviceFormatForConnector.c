/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x180117AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
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
  unsigned int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  void *v16; // rax
  void *v17; // rcx
  void *Src; // [rsp+38h] [rbp-21h] BYREF
  void **p_Src; // [rsp+40h] [rbp-19h]
  int v20[2]; // [rsp+48h] [rbp-11h] BYREF
  char v21; // [rsp+50h] [rbp-9h]
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  if ( a3 > 3 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8FE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80070057LL);
    return v8;
  }
  Src = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v12 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v12[1],
    v11,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector",
    pftDueTime);
  *a5 = 0LL;
  v13 = *(_QWORD *)g_PolicyConfig;
  *(_QWORD *)v20 = 0LL;
  p_Src = &Src;
  v21 = 1;
  v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(v13 + 296))(
         g_PolicyConfig,
         a2,
         a3,
         a4,
         v20);
  if ( v21 )
  {
    v14 = *p_Src;
    *p_Src = *(void **)v20;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v15 = 2309LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v8);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
    return v8;
  }
  v16 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *a5 = v16;
  if ( !v16 )
  {
    v8 = -2147024882;
    v15 = 2316LL;
    goto LABEL_11;
  }
  memcpy_0(v16, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  v17 = Src;
  Src = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
  return 0LL;
}
