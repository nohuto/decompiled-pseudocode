/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x1800072A0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015468 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E1C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180027130 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003C1F8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F2DC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800511D8 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18006F1B0 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x18006F340 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180070228 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E430 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EE08 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180084A58 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000709C (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ADB8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D510 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DC78 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180081D50 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // r14
  DWORD v4; // edi
  _QWORD *Value; // rbx
  unsigned int v6; // r15d
  __int64 v7; // rcx
  unsigned int v8; // ebx
  DWORD v9; // esi
  __int64 v10; // r12
  _QWORD *v11; // rdi
  bool v12; // di
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // r14d
  unsigned __int64 v21; // r12
  char v22; // di
  _QWORD *v23; // r12
  unsigned int v24; // r12d
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // r8
  bool v29; // zf
  unsigned __int64 v30; // r12
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v35; // rax
  int v36; // r12d
  __int128 v37; // xmm1
  int v38; // r8d
  int v39; // r9d
  __int64 *v41; // [rsp+30h] [rbp-D0h]
  BOOL v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+38h] [rbp-C8h]
  DWORD dwTlsIndex; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  char v51[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 Id; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY *v55; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_ACTIVITY *v56; // [rsp+80h] [rbp-80h] BYREF
  __int128 v57; // [rsp+88h] [rbp-78h] BYREF
  __int128 v58; // [rsp+98h] [rbp-68h]
  __int128 v59; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-48h]
  _BYTE v61[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  _BYTE v64[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h]
  __int64 v66; // [rsp+100h] [rbp+0h]
  _OWORD Buf2[2]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD Buf1[2]; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v69[2]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v70[2]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v71[32]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v72[32]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = *((_QWORD *)a1 + 88);
  v46 = a2 & 1;
  if ( v2 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v2 + 8);
    v6 = 0;
    dwTlsIndex = 1;
    *(_DWORD *)(v2 + 16) = GetCurrentThreadId();
    v7 = *((_QWORD *)a1 + 88);
    v42 = *(_QWORD *)(v7 + 104) < *((_QWORD *)a1 + 78);
    v45 = *(_DWORD *)(v7 + 92) != 0;
  }
  else
  {
    v6 = 0;
    v42 = 0;
    v45 = 0;
    dwTlsIndex = 0;
  }
  LOWORD(v8) = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v50, (union _RM_OPTIMIZATION_STATE *)v51);
  v9 = HampLockTrackerId;
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *v11 |= 0x40uLL;
    ++v11[7];
  }
  RtlAcquireSRWLockShared(v10 + 304);
  v12 = (*(_DWORD *)(v10 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *v13;
    if ( (*v13 & 0x40) == 0 )
      __int2c();
    v29 = v13[7]-- == 1;
    if ( v29 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v10 + 304);
  if ( v12 )
  {
    v15 = *((_QWORD *)a1 + 83);
    v41 = (__int64 *)((char *)a1 + 664);
    if ( (v15 & 0x10000000000000LL) == 0 )
    {
      if ( (v50 & 0x80u) != 0 || (v16 = 1, v51[0] < 0) )
        v16 = 0;
      if ( (v15 & 0x30000) == 0 && (v15 & 0x2000000000000LL) != 0 && v16 )
        goto LABEL_39;
    }
  }
  if ( v42 )
  {
    v41 = (__int64 *)((char *)a1 + 664);
    LOWORD(v8) = v50 & 0x188;
    goto LABEL_39;
  }
  v17 = *((_QWORD *)a1 + 83);
  v41 = (__int64 *)((char *)a1 + 664);
  if ( (v17 & 0x10000000000LL) != 0 )
  {
    if ( !v45 )
      goto LABEL_39;
    LOWORD(v8) = v50;
  }
  else
  {
    if ( v2 && *(_DWORD *)(v2 + 88) )
      v8 = v50 & 0x100 | 0x80;
    else
      v8 = 384;
    if ( (v17 & 0x80000000000LL) == 0 && (v17 & 0x2000000000000LL) != 0 && !*((_BYTE *)a1 + 592) )
      v8 |= v8 >> 5;
  }
  v41 = (__int64 *)((char *)a1 + 664);
LABEL_39:
  if ( dwTlsIndex )
  {
    *(_DWORD *)(v2 + 16) = 0;
    RtlReleaseSRWLockExclusive(v2 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v19 = *v18;
      if ( (*v18 & 8) == 0 )
        __int2c();
      v29 = v18[4]-- == 1;
      if ( v29 )
        *v18 = v19 & 0xFFFFFFFFFFFFFFF7uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v48, (union _RM_OPTIMIZATION_STATE *)&v49);
  v20 = v48 & 0x188;
  v21 = *((_QWORD *)a1 + 99);
  v22 = v49 & 0x88;
  v47 = v21;
  dwTlsIndex = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(dwTlsIndex) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v23 |= 0x20uLL;
    ++v23[6];
    v21 = v47;
  }
  v47 = v21 + 584;
  RtlAcquireSRWLockShared(v21 + 584);
  v24 = (*(_DWORD *)(v21 + 616) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v25 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v26 = *v25;
    if ( (*v25 & 0x20) == 0 )
      __int2c();
    v29 = v25[6]-- == 1;
    if ( v29 )
      *v25 = v26 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v47);
  v47 = ((unsigned __int64)*v41 >> 61) & 3;
  v53 = v24;
  if ( v46 || (v8 & 0x188) != v20 )
    goto LABEL_95;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v46, (union _RM_OPTIMIZATION_STATE *)&dwTlsIndex);
  v27 = v41;
  v28 = *v41;
  if ( (((unsigned __int64)*v41 >> 16) & 3) != 0 )
  {
    if ( (((unsigned __int64)*v41 >> 16) & 3) == 1 )
    {
      if ( (v46 & 0x80u) != 0 && (dwTlsIndex & 0x80u) == 0 && (v28 & 0x40000000000LL) == 0 )
      {
        FirstActivity = HampHostGetFirstActivity(a1);
        if ( !FirstActivity )
          goto LABEL_96;
        while ( (*((_BYTE *)FirstActivity + 552) & 0x48) != 0
             || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
             || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
        {
          FirstActivity = HampHostGetNextActivity(FirstActivity);
          if ( !FirstActivity )
            goto LABEL_96;
        }
      }
    }
    else
    {
      if ( (((unsigned __int64)*v41 >> 16) & 3) == 2 )
        v29 = (v28 & 0x8000000000000LL) == 0;
      else
        v29 = (((unsigned __int64)*v41 >> 16) & 3) == 3;
      if ( v29 )
        goto LABEL_96;
    }
  }
  if ( (v28 & 0x8000000000000LL) != 0 || (v28 & 0x40000000000000LL) != 0 || (v28 & 0x20000000000000LL) != 0 )
    goto LABEL_96;
  if ( (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v57,
          (struct _RM_COMMIT_THRESHOLDS *)v71,
          (struct _RM_COMMIT_THRESHOLDS *)v61,
          &v55),
        v30 = *v41,
        (*v41 & 0x80000000000000LL) != 0)
    && (SDWORD2(v58) >= 2 || (BYTE12(v58) & 0x70) != 0 || (BYTE12(v58) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 127) != v55
    || (v31 = *(_OWORD *)((char *)a1 + 1144),
        Buf1[0] = 0uLL,
        Buf1[1] = v31,
        Buf2[0] = 0uLL,
        Buf2[1] = v58,
        memcmp_0(Buf1, Buf2, 0x20uLL))
    || v63 != *((_QWORD *)a1 + 108)
    || v62 != *((_QWORD *)a1 + 109)
    || memcmp_0(v71, (char *)a1 + 888, 0x20uLL) )
  {
LABEL_95:
    v27 = v41;
    goto LABEL_96;
  }
  if ( ((v30 >> 61) & 3) != 0 )
  {
    v27 = v41;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v45, (union _RM_OPTIMIZATION_STATE *)&v52);
    v27 = v41;
    if ( (v45 & 0x100) != 0 && (v52 & 0x100) == 0 )
    {
      v32 = *v41;
      if ( *((_BYTE *)a1 + 592) != 1 || (v32 & 0x2000000000000LL) == 0 )
      {
        v33 = *((_QWORD *)a1 + 84);
        if ( (v33 & 1) != 0 || (v33 & 2) != 0 && (v32 & 0x2000000000000LL) == 0 )
          goto LABEL_96;
      }
    }
  }
  if ( v47 > v53 )
  {
LABEL_96:
    v43 = 1;
    goto LABEL_97;
  }
  v43 = 0;
LABEL_97:
  v35 = *v27;
  if ( (*v27 & 0x8000000000000LL) == 0 || (v35 & 0xE0000000) == 0 || (v36 = 1, (v35 & 0xE0000000) == 0xA0000000LL) )
    v36 = 0;
  if ( (v35 & 0x40000000000000LL) != 0
    || (v35 & 0x20000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v59,
          (struct _RM_COMMIT_THRESHOLDS *)v72,
          (struct _RM_COMMIT_THRESHOLDS *)v64,
          &v56),
        Id = *v41,
        (Id & 0x80000000000000LL) != 0)
    && (SDWORD2(v60) >= 2 || (BYTE12(v60) & 0x70) != 0 || (BYTE12(v60) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 127) != v56
    || (v37 = *(_OWORD *)((char *)a1 + 1144),
        v70[0] = 0uLL,
        v70[1] = v37,
        v69[0] = 0uLL,
        v69[1] = v60,
        memcmp_0(v70, v69, 0x20uLL))
    || v66 != *((_QWORD *)a1 + 108)
    || v65 != *((_QWORD *)a1 + 109)
    || memcmp_0(v72, (char *)a1 + 888, 0x20uLL) )
  {
    v6 = 1;
    v36 = 1;
  }
  else
  {
    if ( (v8 & 0x80u) != 0 || ((v20 | v22) & 0x80u) == 0 )
    {
      if ( (v8 & 8) == 0 && ((v48 & 8) != 0 || (v49 & 8) != 0) )
      {
        v6 = 1;
      }
      else if ( (Id & 0x8000000000000LL) != 0 )
      {
        v6 = 1;
      }
      else
      {
        LOBYTE(v6) = v47 > v53;
      }
    }
    else
    {
      v6 = 1;
    }
    if ( !v36 && !v6 )
    {
      if ( !v43 )
        return v6;
      goto LABEL_132;
    }
  }
  if ( !v43 )
    return v6;
  if ( (*((_BYTE *)a1 + 1208) & 0x27) != 0 )
    RmHamEnforcementEmptySignalAbort(a1);
  if ( v36 )
    RtlWakeAllConditionVariable((char *)a1 + 696);
LABEL_132:
  if ( (*v41 & 0x400000000LL) == 0 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    {
      Id = RmHamHostGetId(a1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DB218,
        (unsigned int)&unk_1800BF9BE,
        v38,
        v39,
        (__int64)&Id);
    }
    *v41 |= 0x400000000uLL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 80));
  }
  return v6;
}
