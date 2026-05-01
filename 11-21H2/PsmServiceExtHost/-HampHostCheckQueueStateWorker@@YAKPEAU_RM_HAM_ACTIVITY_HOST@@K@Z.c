/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000D5C0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180038000 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800399C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A410 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800436FC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180074D10 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078B84 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180079D88 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180079EF0 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007ABA4 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F500 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180091FAC (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800171D0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180086700 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  int v2; // r8d
  int v3; // r13d
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  DWORD v8; // edi
  __int64 v9; // rsi
  _QWORD *Value; // rbx
  bool v11; // bl
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // esi
  unsigned __int64 v16; // r13
  char v17; // bl
  _QWORD *v18; // r13
  unsigned int v19; // r13d
  __int64 *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r13
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm1
  int v27; // ebx
  __int64 v28; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _HAM_ACTIVITY *i; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  bool v37; // zf
  DWORD dwTlsIndex; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexa; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexb; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v42; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  char v48[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v51; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+78h] [rbp-88h] BYREF
  __int128 v54; // [rsp+88h] [rbp-78h]
  __int128 v55; // [rsp+98h] [rbp-68h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  _BYTE v60[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  _OWORD Buf2[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD Buf1[2]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v65[2]; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v66[2]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v67[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v68[32]; // [rsp+198h] [rbp+98h] BYREF

  v2 = *((_DWORD *)a1 + 197);
  v3 = a2 & 1;
  v44 = v3;
  if ( (v2 & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_66;
  }
  v5 = *((_QWORD *)a1 + 88);
  if ( v5 )
  {
    HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
    v34 = *((_QWORD *)a1 + 88);
    v6 = 0;
    v2 = *((_DWORD *)a1 + 197);
    dwTlsIndex = 1;
    v37 = *(_DWORD *)(v34 + 92) == 0;
    v42 = *(_QWORD *)(v34 + 104) < *((_QWORD *)a1 + 78);
    v43 = !v37;
  }
  else
  {
    v6 = 0;
    v42 = 0;
    v43 = 0;
    dwTlsIndex = 0;
  }
  LOWORD(v7) = 0;
  if ( (v2 & 1) != 0 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v41, (union _RM_OPTIMIZATION_STATE *)v48);
    v8 = HampLockTrackerId;
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared(v9 + 304);
    v11 = (*(_DWORD *)(v9 + 340) & 2) != 0;
    if ( HampLockTrackerId != -1 )
    {
      v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v13 = *v12;
      if ( (*v12 & 0x40) == 0 )
        __int2c();
      v37 = v12[7]-- == 1;
      if ( v37 )
        *v12 = v13 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    RtlReleaseSRWLockShared(v9 + 304);
    if ( !v11 )
      goto LABEL_15;
    v35 = *((_QWORD *)a1 + 83);
    if ( (v35 & 0x10000000000000LL) != 0 )
      goto LABEL_15;
    if ( (v41 & 0x80u) != 0 || (v36 = 1, v48[0] < 0) )
      v36 = 0;
    if ( (v35 & 0x30000) != 0 || (v35 & 0x2000000000000LL) == 0 || !v36 )
    {
LABEL_15:
      if ( v42 )
      {
        LOWORD(v7) = v41 & 0x188;
      }
      else
      {
        v14 = *((_QWORD *)a1 + 83);
        if ( (v14 & 0x10000000000LL) != 0 )
        {
          if ( v43 )
            LOWORD(v7) = v41;
        }
        else
        {
          if ( v5 && *(_DWORD *)(v5 + 88) )
            v7 = v41 & 0x100 | 0x80;
          else
            v7 = 384;
          if ( (v14 & 0x2080000000000LL) == 0x2000000000000LL && !*((_BYTE *)a1 + 592) )
            v7 |= v7 >> 5;
        }
      }
    }
  }
  else
  {
    v41 = 0;
  }
  if ( dwTlsIndex )
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v5);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v46, (union _RM_OPTIMIZATION_STATE *)&v47);
  v15 = v46 & 0x188;
  v16 = *((_QWORD *)a1 + 99);
  v17 = v47 & 0x88;
  v45 = v16;
  dwTlsIndexa = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(dwTlsIndexa) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v18 |= 0x20uLL;
    ++v18[6];
    v16 = v45;
  }
  v45 = v16 + 584;
  RtlAcquireSRWLockShared(v16 + 584);
  v19 = (*(_DWORD *)(v16 + 616) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 0x20) == 0 )
      __int2c();
    v37 = v20[6]-- == 1;
    if ( v37 )
      *v20 = v21 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v45);
  v45 = (*((_QWORD *)a1 + 83) >> 61) & 3LL;
  v50 = v19;
  if ( v44 || (v7 & 0x188) != v15 )
    goto LABEL_47;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v44, (union _RM_OPTIMIZATION_STATE *)&v43);
  v22 = *((_QWORD *)a1 + 83);
  if ( ((v22 >> 16) & 3) != 0 )
  {
    if ( ((v22 >> 16) & 3) == 1 )
    {
      if ( (v44 & 0x80u) == 0 || v43 < 0 || (v22 & 0x40000000000LL) != 0 )
        goto LABEL_34;
      for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity(i) )
      {
        if ( (*((_BYTE *)i + 552) & 0x48) == 0 )
        {
          LOBYTE(v32) = 5;
          if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v32) )
          {
            if ( (*((_DWORD *)i + 28) & 0x2000) != 0 )
              goto LABEL_34;
          }
        }
      }
    }
    else
    {
      if ( ((v22 >> 16) & 3) == 2 )
        v37 = (v22 & 0x8000000000000LL) == 0;
      else
        v37 = ((v22 >> 16) & 3) == 3;
      if ( !v37 )
        goto LABEL_34;
    }
LABEL_47:
    v3 = 1;
    goto LABEL_48;
  }
LABEL_34:
  if ( (v22 & 0x8000000000000LL) != 0 )
    goto LABEL_47;
  if ( (v22 & 0x40000000000000LL) != 0 )
    goto LABEL_47;
  if ( (v22 & 0x20000000000000LL) != 0 )
    goto LABEL_47;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v53,
    (struct _RM_COMMIT_THRESHOLDS *)v67,
    (struct _RM_COMMIT_THRESHOLDS *)v57,
    &v51);
  v23 = *((_QWORD *)a1 + 83);
  if ( (v23 & 0x80000000000000LL) != 0 && (SDWORD2(v54) >= 2 || (BYTE12(v54) & 0x70) != 0 || (BYTE12(v54) & 8) != 0) )
    goto LABEL_47;
  if ( *((struct _HAM_ACTIVITY **)a1 + 127) != v51 )
    goto LABEL_47;
  v24 = *((_OWORD *)a1 + 71);
  Buf1[0] = 0uLL;
  Buf1[1] = v24;
  Buf2[0] = 0uLL;
  Buf2[1] = v54;
  if ( memcmp_0(Buf1, Buf2, 0x20uLL)
    || v59 != *((_QWORD *)a1 + 108)
    || v58 != *((_QWORD *)a1 + 109)
    || memcmp_0(v67, (char *)a1 + 888, 0x20uLL) )
  {
    goto LABEL_47;
  }
  if ( ((v23 >> 61) & 3) == 0 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v42, (union _RM_OPTIMIZATION_STATE *)&v49);
    if ( (v42 & 0x100) != 0 && (v49 & 0x100) == 0 )
    {
      v30 = *((_QWORD *)a1 + 83);
      if ( *((_BYTE *)a1 + 592) != 1 || (v30 & 0x2000000000000LL) == 0 )
      {
        v31 = *((_QWORD *)a1 + 84);
        if ( (v31 & 1) != 0 || (v31 & 2) != 0 && (v30 & 0x2000000000000LL) == 0 )
          goto LABEL_47;
      }
    }
  }
  if ( v45 > v50 )
    goto LABEL_47;
  v3 = 0;
LABEL_48:
  v25 = *((_QWORD *)a1 + 83);
  if ( (v25 & 0x8000000000000LL) == 0
    || (v25 & 0xE0000000) == 0
    || (dwTlsIndexb = 1, (*((_QWORD *)a1 + 83) & 0xE0000000LL) == 0xA0000000LL) )
  {
    dwTlsIndexb = 0;
  }
  if ( (v25 & 0x40000000000000LL) != 0
    || (v25 & 0x20000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v55,
          (struct _RM_COMMIT_THRESHOLDS *)v68,
          (struct _RM_COMMIT_THRESHOLDS *)v60,
          &v52),
        (*((_QWORD *)a1 + 83) & 0x80000000000000LL) != 0)
    && (SDWORD2(v56) >= 2 || (BYTE12(v56) & 0x70) != 0 || (BYTE12(v56) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 127) != v52
    || (v26 = *((_OWORD *)a1 + 71), v66[0] = 0uLL,
                                    v66[1] = v26,
                                    v65[0] = 0uLL,
                                    v65[1] = v56,
                                    memcmp_0(v66, v65, 0x20uLL))
    || v62 != *((_QWORD *)a1 + 108)
    || v61 != *((_QWORD *)a1 + 109)
    || memcmp_0(v68, (char *)a1 + 888, 0x20uLL) )
  {
    v6 = 1;
    v27 = 1;
  }
  else
  {
    if ( (v7 & 0x80u) != 0 || ((v15 | v17) & 0x80u) == 0 )
    {
      if ( (v7 & 8) == 0 && ((v46 & 8) != 0 || (v47 & 8) != 0) )
      {
        v6 = 1;
      }
      else if ( (*((_QWORD *)a1 + 83) & 0x8000000000000LL) != 0 )
      {
        v6 = 1;
      }
      else
      {
        LOBYTE(v6) = v45 > v50;
      }
    }
    else
    {
      v6 = 1;
    }
    v27 = dwTlsIndexb;
    if ( !dwTlsIndexb && !v6 )
    {
LABEL_66:
      if ( !v3 )
        return v6;
      goto LABEL_67;
    }
  }
  if ( !v3 )
    return v6;
  if ( (*((_BYTE *)a1 + 1200) & 0x27) != 0 )
    RmHamEnforcementEmptySignalAbort(a1);
  if ( v27 )
    RtlWakeAllConditionVariable((char *)a1 + 696);
LABEL_67:
  v28 = *((_QWORD *)a1 + 83);
  if ( (v28 & 0x400000000LL) == 0 )
  {
    *((_QWORD *)a1 + 83) = v28 | 0x400000000LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 80));
  }
  return v6;
}
