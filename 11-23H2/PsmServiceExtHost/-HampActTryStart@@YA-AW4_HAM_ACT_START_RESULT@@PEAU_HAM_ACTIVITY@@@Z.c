/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180027130 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800409F0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000C220 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800126CC (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180012CD0 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800139C8 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800406C4 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rsi
  DWORD v3; // r14d
  __int64 v4; // r15
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v7; // ecx
  bool v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  DWORD v12; // r14d
  __int64 v13; // r15
  _QWORD *v14; // rdi
  char v15; // di
  __int64 *v16; // rax
  __int64 v17; // rcx
  DWORD v18; // r14d
  __int64 v19; // r15
  _QWORD *v20; // rdi
  unsigned int v21; // edi
  __int64 *v22; // rax
  __int64 v23; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v24; // rcx
  unsigned int v25; // edi
  __int16 v26; // cx
  __int64 v27; // rcx
  unsigned int v28; // eax
  char v29; // al
  struct _RM_HAM_ACTIVITY_HOST *v30; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int64 v36; // r9
  struct _RM_HAM_ACTIVITY_HOST *v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  char v45[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct _HAM_ACTIVITY *v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h]
  _DWORD v50[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+98h] [rbp-68h]
  _BYTE v54[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  _OWORD Buf2[2]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD Buf1[2]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v59[32]; // [rsp+108h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_QWORD *)(v1 + 664) & 0x10000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 15;
  v3 = HampLockTrackerId;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v4 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v7 = HampLockTrackerId;
  *(_DWORD *)(v4 + 104) = CurrentThreadId;
  v8 = (*(_DWORD *)(v4 + 144) & 2) != 0;
  if ( v7 != -1 )
  {
    v9 = (__int64 *)TlsGetValue(v7);
    v10 = *v9;
    if ( (*v9 & 0x100) == 0 )
      __int2c();
    v11 = v9[9]-- == 1;
    if ( v11 )
      *v9 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *(_DWORD *)(v4 + 104) = 0;
  RtlReleaseSRWLockExclusive(v4 + 96);
  if ( v8 )
    return 7;
  v12 = HampLockTrackerId;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v14 |= 0x80uLL;
    ++v14[8];
  }
  RtlAcquireSRWLockShared(v13 + 168);
  v15 = *(_BYTE *)(v13 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v16 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v17 = *v16;
    if ( (*v16 & 0x80u) == 0LL )
      __int2c();
    v11 = v16[8]-- == 1;
    if ( v11 )
      *v16 = v17 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared(v13 + 168);
  if ( v15 )
    return 7;
  if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 552) & 0x300u) >= 0x100 )
    return 5;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)v45,
    (union _RM_OPTIMIZATION_STATE *)&v44);
  if ( ((v45[0] & 8) != 0 || (v44 & 8) != 0) && (*(_QWORD *)(v1 + 664) & 0x80000000000LL) != 0 )
    return 9;
  if ( *(_BYTE *)(a1 + 563) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 16LL);
    v38 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 2;
    HampHostUpdateActivityState(v38);
  }
  v18 = HampLockTrackerId;
  v19 = *(_QWORD *)(v1 + 792);
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v20 |= 0x20uLL;
    ++v20[6];
  }
  RtlAcquireSRWLockShared(v19 + 584);
  v21 = (*(_DWORD *)(v19 + 616) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v23 = *v22;
    if ( (*v22 & 0x20) == 0 )
      __int2c();
    v11 = v22[6]-- == 1;
    if ( v11 )
      *v22 = v23 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v19 + 584);
  if ( v21 < ((*(_DWORD *)(a1 + 112) >> 23) & 3u) )
    return 10;
  if ( *(_BYTE *)(a1 + 563) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 24LL);
    v24 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 3;
    HampHostUpdateActivityState(v24);
  }
  v25 = 2;
  if ( (*(_BYTE *)(a1 + 552) & 0x20) == 0 )
  {
    v26 = *(_WORD *)(a1 + 424);
    if ( (v26 & 0xC0) == 0xC0 )
      v27 = 2LL;
    else
      v27 = (v26 & 0xEu) >= 8 && (v26 & 0x30u) >= 0x20;
    v28 = *(_DWORD *)(a1 + 480) & 3;
    if ( v28 <= (unsigned int)v27 )
      v28 = v27;
    if ( v28 >= 2 )
    {
      if ( (*(_QWORD *)(v1 + 664) & 0x2000000000000LL) != 0 )
      {
        if ( HampHostIsResumed((struct _RM_HAM_ACTIVITY_HOST *)v1) )
          goto LABEL_47;
        v41 = 500;
      }
      else
      {
        v41 = 2000;
      }
      *(_DWORD *)(a1 + 552) |= 0x20u;
      if ( (int)RmpPowerBoostStartTimedBoost((struct _RM_SERVICE_GLOBALS *)v27, v41) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
  }
LABEL_47:
  v29 = v44;
  if ( (*(_DWORD *)(a1 + 112) & 0x400) != 0 && (v44 & 0x80u) != 0 && v45[0] >= 0 )
    return 12;
  if ( *(_BYTE *)(a1 + 563) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 32LL);
    v30 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 4;
    HampHostUpdateActivityState(v30);
    v29 = v44;
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x1800) == 0 )
  {
    if ( (*(_DWORD *)(v1 + 664) & 0x30000) != 0 )
      return 11;
    if ( v29 < 0 )
      return 12;
  }
  if ( *(_BYTE *)(a1 + 563) < 5u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 40LL);
    v31 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 5;
    HampHostUpdateActivityState(v31);
  }
  v32 = *(_QWORD *)(a1 + 512);
  if ( v32 && v32 != *(_QWORD *)(v1 + 816) )
  {
    HampActInvalidateAndNotify(a1, 0LL);
    return 8;
  }
  v33 = *(_DWORD *)(a1 + 112);
  if ( (v33 & 0x400) != 0 )
  {
    if ( v45[0] < 0 )
      return 13;
  }
  else if ( (v33 & 0x800) != 0 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 664LL) & 0xE0000000LL;
    if ( v42 == 0x80000000LL || v42 == 2684354560LL )
    {
      HampActInvalidateAndNotify(a1, 6912LL);
      return 3;
    }
  }
  v34 = *(_QWORD *)(v1 + 664);
  if ( (v34 & 0x40000000000000LL) == 0
    && (v34 & 0x20000000000000LL) == 0
    && ((HampHostComputeStaticEnforcementSettings(
           (struct _RM_HAM_ACTIVITY_HOST *)v1,
           (struct _RM_ENFORCEMENT_SETTINGS *)&v48,
           (struct _RM_COMMIT_THRESHOLDS *)v59,
           (struct _RM_COMMIT_THRESHOLDS *)v54,
           &v46),
         (*(_QWORD *)(v1 + 664) & 0x80000000000000LL) == 0)
     || SDWORD2(v49) < 2 && (BYTE12(v49) & 0x70) == 0 && (BYTE12(v49) & 8) == 0)
    && *(struct _HAM_ACTIVITY **)(v1 + 1016) == v46
    && (v35 = *(_OWORD *)(v1 + 1144),
        Buf1[0] = 0uLL,
        Buf1[1] = v35,
        Buf2[0] = 0uLL,
        Buf2[1] = v49,
        !memcmp_0(Buf1, Buf2, 0x20uLL))
    && v56 == *(_QWORD *)(v1 + 864)
    && v55 == *(_QWORD *)(v1 + 872)
    && !memcmp_0(v59, (const void *)(v1 + 888), 0x20uLL)
    || (*(_DWORD *)(a1 + 112) & 0x1000) != 0 )
  {
    v36 = *(unsigned int *)(a1 + 380);
    if ( (_DWORD)v36 != 5 )
    {
      v39 = *(_QWORD *)(a1 + 80);
      v50[1] = *(_DWORD *)(a1 + 384);
      v52 = a1 + 124;
      v40 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      v51 = 0LL;
      v53 = 0LL;
      v50[0] = 1;
      if ( (int)HampSystemActivationClientActivate(*(_QWORD *)(v40 + 144), (__int64)v50, a1, v36, v39 + 24, v43, &v47) < 0 )
      {
        HampActInvalidateAndNotify(a1, 6912LL);
        return v25;
      }
      *(_QWORD *)(a1 + 504) = v47;
    }
    HampActStart((struct _HAM_ACTIVITY *)a1);
    return 0;
  }
  else
  {
    return 14;
  }
}
