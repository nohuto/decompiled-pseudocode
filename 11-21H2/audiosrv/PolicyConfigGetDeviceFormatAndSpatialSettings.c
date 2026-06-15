/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800EB320
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
 *     _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x1800E7F88 (_lambda_4a543277d9c921e33bd9dfb8d5328f97_--operator().c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  void **v13; // rax
  char v14; // di
  bool v15; // zf
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  void *v21; // rcx
  void *v22; // rcx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  __int64 v30; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int16 *Src; // [rsp+50h] [rbp-89h] BYREF
  void *Src_8[2]; // [rsp+58h] [rbp-81h] BYREF
  va_list v33; // [rsp+68h] [rbp-71h]
  LPVOID v34; // [rsp+70h] [rbp-69h] BYREF
  void *pv; // [rsp+78h] [rbp-61h] BYREF
  LPVOID *v36; // [rsp+80h] [rbp-59h]
  int v37[2]; // [rsp+88h] [rbp-51h] BYREF
  char v38; // [rsp+90h] [rbp-49h]
  void **p_Src; // [rsp+98h] [rbp-41h]
  void *v40; // [rsp+A0h] [rbp-39h] BYREF
  char v41; // [rsp+A8h] [rbp-31h]
  __int128 v42; // [rsp+B0h] [rbp-29h] BYREF
  va_list v43; // [rsp+C0h] [rbp-19h]
  char v44; // [rsp+C8h] [rbp-11h]
  struct _TP_TIMER *v45[7]; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+47h]
  void **v47; // [rsp+140h] [rbp+67h] BYREF
  va_list va; // [rsp+140h] [rbp+67h]
  void **v49; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+148h] [rbp+6Fh]
  _DWORD *v51; // [rsp+150h] [rbp+77h]
  void **v52; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+158h] [rbp+7Fh]
  va_list va3; // [rsp+160h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v47 = va_arg(va1, void **);
  va_copy(va2, va1);
  v49 = va_arg(va2, void **);
  v51 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v52 = va_arg(va3, void **);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v45,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings",
    pftDueTime);
  if ( !v47 )
  {
    v8 = 2624LL;
LABEL_5:
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_49;
  }
  *v47 = 0LL;
  if ( !v49 )
  {
    v8 = 2627LL;
    goto LABEL_5;
  }
  *v49 = 0LL;
  v13 = v52;
  if ( v52 )
  {
    *v52 = 0LL;
    v13 = v52;
  }
  Src = 0LL;
  va_copy((va_list)Src_8[0], va);
  v14 = 1;
  v34 = 0LL;
  va_copy((va_list)Src_8[1], va1);
  v15 = v13 == 0LL;
  pv = 0LL;
  va_copy(v33, va2);
  LODWORD(v30) = 0;
  v42 = *(_OWORD *)Src_8;
  v16 = *(_QWORD *)g_PolicyConfig;
  Src_8[1] = 0LL;
  LOBYTE(v33) = 1;
  *(_QWORD *)v37 = 0LL;
  v38 = 1;
  va_copy(v43, va2);
  if ( v15 )
  {
    v36 = &v34;
    Src_8[0] = &Src;
    v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, _QWORD))(v16 + 272))(
           g_PolicyConfig,
           a2,
           a3,
           &Src_8[1],
           v37,
           &v30,
           0LL);
    if ( (_BYTE)v33 )
    {
      v21 = *(void **)Src_8[0];
      *(_QWORD *)Src_8[0] = Src_8[1];
      if ( v21 )
        CoTaskMemFree(v21);
    }
    if ( v38 )
    {
      v22 = *v36;
      *v36 = *(LPVOID *)v37;
      if ( v22 )
        CoTaskMemFree(v22);
    }
    if ( v9 < 0 )
    {
      v20 = 2671LL;
      goto LABEL_38;
    }
LABEL_28:
    *v47 = MIDL_user_allocate(Src[8] + 18LL);
    if ( *v47 )
    {
      memcpy_0(*v47, Src, Src[8] + 18LL);
      *v49 = MIDL_user_allocate(0x48uLL);
      v23 = *v49;
      if ( *v49 )
      {
        v24 = v34;
        *v23 = *(_OWORD *)v34;
        v23[1] = v24[1];
        v23[2] = v24[2];
        v23[3] = v24[3];
        *((_QWORD *)v23 + 8) = *((_QWORD *)v24 + 8);
        v25 = (unsigned int)v30;
        if ( v51 )
          *v51 = v30;
        if ( v52 )
        {
          *v52 = MIDL_user_allocate(834 * v25);
          if ( !*v52 )
          {
            v20 = 2692LL;
            goto LABEL_37;
          }
          memcpy_0(*v52, pv, 834LL * (unsigned int)v30);
        }
        v14 = 0;
        v9 = 0;
        goto LABEL_41;
      }
      v20 = 2681LL;
    }
    else
    {
      v20 = 2677LL;
    }
LABEL_37:
    v9 = -2147024882;
    goto LABEL_38;
  }
  v40 = 0LL;
  Src_8[0] = &pv;
  v36 = &v34;
  p_Src = (void **)&Src;
  v41 = 1;
  v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **, int *, __int64 *, void **))(v16 + 272))(
         g_PolicyConfig,
         a2,
         a3,
         &v40,
         v37,
         &v30,
         &Src_8[1]);
  if ( v41 )
  {
    v17 = *p_Src;
    *p_Src = v40;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  if ( v38 )
  {
    v18 = *v36;
    *v36 = *(LPVOID *)v37;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( (_BYTE)v33 )
  {
    v19 = *(void **)Src_8[0];
    *(_QWORD *)Src_8[0] = Src_8[1];
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( v9 >= 0 )
    goto LABEL_28;
  v20 = 2663LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v9);
LABEL_41:
  v26 = pv;
  pv = 0LL;
  if ( v26 )
    CoTaskMemFree(v26);
  v27 = v34;
  v34 = 0LL;
  if ( v27 )
    CoTaskMemFree(v27);
  v28 = Src;
  Src = 0LL;
  if ( v28 )
    CoTaskMemFree(v28);
  if ( v14 )
  {
    v44 = 0;
    lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()((__int64)&v42);
  }
LABEL_49:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v45, v10, v11, v12);
  return (unsigned int)v9;
}
