/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180117650
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     wil::details::lambda_call__lambda_4a543277d9c921e33bd9dfb8d5328f97___::_lambda_call__lambda_4a543277d9c921e33bd9dfb8d5328f97___ @ 0x180113F68 (wil--details--lambda_call__lambda_4a543277d9c921e33bd9dfb8d5328f97___--_lambda_call__lambda_4a54.c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  void **v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *Src; // [rsp+48h] [rbp-91h] BYREF
  LPVOID v27; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-81h] BYREF
  void *pv; // [rsp+60h] [rbp-79h] BYREF
  __int128 v30; // [rsp+68h] [rbp-71h] BYREF
  va_list v31; // [rsp+78h] [rbp-61h]
  LPVOID *v32; // [rsp+80h] [rbp-59h]
  int v33[2]; // [rsp+88h] [rbp-51h] BYREF
  char v34; // [rsp+90h] [rbp-49h]
  void **p_Src; // [rsp+98h] [rbp-41h]
  void *v36; // [rsp+A0h] [rbp-39h] BYREF
  char v37; // [rsp+A8h] [rbp-31h]
  __int128 v38; // [rsp+B0h] [rbp-29h] BYREF
  va_list v39; // [rsp+C0h] [rbp-19h]
  char v40; // [rsp+C8h] [rbp-11h]
  struct _TP_TIMER *v41[7]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+47h]
  void **v43; // [rsp+140h] [rbp+67h] BYREF
  va_list va; // [rsp+140h] [rbp+67h]
  void **v45; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+148h] [rbp+6Fh]
  unsigned int *v47; // [rsp+150h] [rbp+77h]
  void **v48; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+158h] [rbp+7Fh]
  va_list va3; // [rsp+160h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, void **);
  va_copy(va2, va1);
  v45 = va_arg(va2, void **);
  v47 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v48 = va_arg(va3, void **);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v41,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings",
    pftDueTime);
  if ( !v43 )
  {
    v8 = 2883LL;
LABEL_5:
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_46;
  }
  *v43 = 0LL;
  if ( !v45 )
  {
    v8 = 2886LL;
    goto LABEL_5;
  }
  *v45 = 0LL;
  v10 = v48;
  if ( v48 )
  {
    *v48 = 0LL;
    v10 = v48;
  }
  Src = 0LL;
  va_copy((va_list)v30, va);
  v11 = v10 == 0LL;
  v27 = 0LL;
  va_copy(*((va_list *)&v30 + 1), va1);
  va_copy(v31, va2);
  pv = 0LL;
  v28 = 0;
  v38 = v30;
  v12 = *(_QWORD *)g_PolicyConfig;
  *((_QWORD *)&v30 + 1) = 0LL;
  LOBYTE(v31) = 1;
  *(_QWORD *)v33 = 0LL;
  v34 = 1;
  va_copy(v39, va2);
  v40 = 1;
  if ( v11 )
  {
    v32 = &v27;
    *(_QWORD *)&v30 = &Src;
    v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, char *, int *, unsigned int *, _QWORD))(v12 + 272))(
           g_PolicyConfig,
           a2,
           a3,
           (char *)&v30 + 8,
           v33,
           &v28,
           0LL);
    if ( (_BYTE)v31 )
    {
      v17 = *(void **)v30;
      *(_QWORD *)v30 = *((_QWORD *)&v30 + 1);
      if ( v17 )
        CoTaskMemFree(v17);
    }
    if ( v34 )
    {
      v18 = *v32;
      *v32 = *(LPVOID *)v33;
      if ( v18 )
        CoTaskMemFree(v18);
    }
    if ( v9 < 0 )
    {
      v16 = 2930LL;
      goto LABEL_20;
    }
  }
  else
  {
    v36 = 0LL;
    *(_QWORD *)&v30 = &pv;
    v32 = &v27;
    p_Src = &Src;
    v37 = 1;
    v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, unsigned int *, char *))(v12 + 272))(
           g_PolicyConfig,
           a2,
           a3,
           &v36,
           v33,
           &v28,
           (char *)&v30 + 8);
    if ( v37 )
    {
      v13 = *p_Src;
      *p_Src = v36;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    if ( v34 )
    {
      v14 = *v32;
      *v32 = *(LPVOID *)v33;
      if ( v14 )
        CoTaskMemFree(v14);
    }
    if ( (_BYTE)v31 )
    {
      v15 = *(void **)v30;
      *(_QWORD *)v30 = *((_QWORD *)&v30 + 1);
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( v9 < 0 )
    {
      v16 = 2922LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v9);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v27);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
      wil::details::lambda_call__lambda_4a543277d9c921e33bd9dfb8d5328f97___::_lambda_call__lambda_4a543277d9c921e33bd9dfb8d5328f97___((__int64)&v38);
      goto LABEL_46;
    }
  }
  *v43 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  if ( !*v43 )
  {
    v9 = -2147024882;
    v16 = 2936LL;
    goto LABEL_20;
  }
  memcpy_0(*v43, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  *v45 = MIDL_user_allocate(0x48uLL);
  v19 = *v45;
  if ( !*v45 )
  {
    v9 = -2147024882;
    v16 = 2940LL;
    goto LABEL_20;
  }
  v20 = v27;
  *v19 = *(_OWORD *)v27;
  v19[1] = v20[1];
  v19[2] = v20[2];
  v19[3] = v20[3];
  *((_QWORD *)v19 + 8) = *((_QWORD *)v20 + 8);
  v21 = v28;
  if ( v47 )
    *v47 = v28;
  if ( v48 )
  {
    *v48 = MIDL_user_allocate(834 * v21);
    if ( !*v48 )
    {
      v9 = -2147024882;
      v16 = 2951LL;
      goto LABEL_20;
    }
    memcpy_0(*v48, pv, 834LL * v28);
  }
  v22 = pv;
  pv = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  v23 = v27;
  v27 = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  v24 = Src;
  Src = 0LL;
  if ( v24 )
    CoTaskMemFree(v24);
  v9 = 0;
LABEL_46:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v41);
  return (unsigned int)v9;
}
