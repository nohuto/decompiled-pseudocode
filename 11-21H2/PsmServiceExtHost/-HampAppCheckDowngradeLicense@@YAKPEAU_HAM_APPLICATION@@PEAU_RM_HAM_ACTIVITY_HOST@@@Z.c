/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800396A4 (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800399C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180039DA0 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CD30 (-HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DB08 (-HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003E24C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007B2C0 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007B324 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 *Value; // rax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 *v11; // rax
  __int64 v12; // rcx
  DWORD v13; // r14d
  _QWORD *v14; // rdi
  char *v15; // r15
  int v16; // r13d
  DWORD v17; // ecx
  unsigned int v18; // r12d
  __int64 *v19; // rax
  __int64 v20; // rcx
  DWORD v21; // r14d
  _QWORD *v22; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v24; // r14d
  _QWORD *v25; // rdi
  struct _HAM_APPLICATION *v26; // r13
  struct _HAM_APPLICATION *v27; // rax
  char *v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rcx
  DWORD v34; // r15d
  _QWORD *v35; // r14
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rcx
  DWORD v39; // r15d
  __int64 v40; // r13
  _QWORD *v41; // r14
  DWORD v42; // eax
  DWORD v43; // r15d
  _QWORD *v44; // r14
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r13
  char *v48; // r12
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rcx
  DWORD v53; // r15d
  _QWORD *v54; // r14
  __int64 *v55; // rax
  __int64 v56; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v57; // rdx
  __int64 v58; // rdi
  const unsigned __int16 *v59; // rcx
  __int64 v60; // rax
  int v61; // edx
  DWORD v62; // r14d
  _QWORD *v63; // rdi
  DWORD v64; // eax
  DWORD v65; // r14d
  _QWORD *v66; // rdi
  int *v67; // rax
  struct _RM_HAM_ACTIVITY_HOST *v68; // rdi
  __int64 *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // rcx
  DWORD v73; // r15d
  __int64 v74; // r13
  _QWORD *v75; // r14
  DWORD v76; // eax
  DWORD v77; // r15d
  _QWORD *v78; // r14
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // r13
  struct _RM_HAM_ACTIVITY_HOST *v82; // r12
  __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rcx
  DWORD v87; // r15d
  _QWORD *v88; // r14
  __int64 *v89; // rax
  __int64 v90; // rcx
  DWORD v91; // r14d
  _QWORD *v92; // rdi
  __int64 *v93; // rax
  __int64 v94; // rdx
  DWORD v95; // esi
  _QWORD *v96; // rdi
  DWORD v97; // eax
  DWORD v98; // esi
  _QWORD *v99; // rdi
  int v100; // r8d
  const unsigned __int16 *v101; // rax
  int v102; // ecx
  __int64 *v103; // rdx
  unsigned int v104; // edx
  __int64 *v105; // rdx
  char v106; // [rsp+30h] [rbp-D0h] BYREF
  int v107; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v108; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v110; // [rsp+48h] [rbp-B8h] BYREF
  int v111; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v112; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v114; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+80h] [rbp-80h] BYREF
  void *v116; // [rsp+90h] [rbp-70h]
  int v117; // [rsp+98h] [rbp-68h]
  int v118; // [rsp+9Ch] [rbp-64h]
  int *v119; // [rsp+A0h] [rbp-60h]
  __int64 v120; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v121; // [rsp+B0h] [rbp-50h]
  int v122; // [rsp+B8h] [rbp-48h]
  int v123; // [rsp+BCh] [rbp-44h]
  __int64 *v124; // [rsp+C0h] [rbp-40h]
  __int64 v125; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v127; // [rsp+E0h] [rbp-20h]
  int v128; // [rsp+E8h] [rbp-18h]
  int v129; // [rsp+ECh] [rbp-14h]
  unsigned int *v130; // [rsp+F0h] [rbp-10h]
  __int64 v131; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v132; // [rsp+100h] [rbp+0h]
  int v133; // [rsp+108h] [rbp+8h]
  int v134; // [rsp+10Ch] [rbp+Ch]
  __int64 *v135; // [rsp+110h] [rbp+10h]
  __int64 v136; // [rsp+118h] [rbp+18h]
  char *v137; // [rsp+120h] [rbp+20h]
  __int64 v138; // [rsp+128h] [rbp+28h]

  if ( (*((_BYTE *)a2 + 788) & 1) == 0 )
    return 0LL;
  if ( ((*((_QWORD *)a2 + 83) >> 61) & 3) != 0 )
    return 0LL;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v111, (union _RM_OPTIMIZATION_STATE *)&v110);
  if ( (v111 & 0x100) == 0
    || (v110 & 0x100) != 0
    || *((_BYTE *)a2 + 592) == 1 && (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0 )
  {
    return 0LL;
  }
  v5 = *((_QWORD *)a2 + 84);
  if ( (v5 & 1) != 0 )
  {
    v6 = *((_QWORD *)a2 + 83);
    goto LABEL_12;
  }
  if ( (v5 & 2) == 0 )
    return 0LL;
  v6 = *((_QWORD *)a2 + 83);
  if ( (v6 & 0x2000000000000LL) != 0 )
    return 0LL;
LABEL_12:
  v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a2 + 84) = v7;
  if ( (v6 & 0x2000000000000LL) == 0 )
    *((_QWORD *)a2 + 84) = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *Value;
    if ( (*Value & 2) == 0 )
      __int2c();
    v10 = Value[2]-- == 1;
    if ( v10 )
      *Value = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 2) = 0;
  RtlReleaseSRWLockExclusive(a2);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 1) == 0 )
      __int2c();
    v10 = v11[1]-- == 1;
    if ( v10 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v14 |= 0x20uLL;
    ++v14[6];
  }
  v15 = (char *)a1 + 584;
  RtlAcquireSRWLockExclusive((char *)a1 + 584);
  *((_DWORD *)a1 + 148) = GetCurrentThreadId();
  LODWORD(v109) = *((_DWORD *)a1 + 154);
  v16 = v109;
  if ( (v109 & 0x100000) != 0 )
  {
    do
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      LODWORD(v109) = *((_DWORD *)a1 + 154);
    }
    while ( (v109 & 0x100000) != 0 );
    v16 = v109;
    v15 = (char *)a1 + 584;
  }
  v17 = HampLockTrackerId;
  v18 = ((v16 & 0xFF8FFFFF | 0x100000) >> 23) & 3;
  *((_DWORD *)a1 + 154) = v16 & 0xFE0FFFFF | 0x100000;
  v108 = v18;
  if ( v17 != -1 )
  {
    v19 = (__int64 *)TlsGetValue(v17);
    v20 = *v19;
    if ( (*v19 & 0x20) == 0 )
      __int2c();
    v10 = v19[6]-- == 1;
    if ( v10 )
      *v19 = v20 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)v15 + 2) = 0;
  RtlReleaseSRWLockExclusive(v15);
  v21 = HampLockTrackerId;
  v107 = 0;
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v21) )
      __int2c();
    *v22 |= 1uLL;
    ++v22[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v24 = HampLockTrackerId;
  dword_1800DD4E8 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v25 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v25 |= 0x20uLL;
    ++v25[6];
  }
  RtlAcquireSRWLockShared(v15);
  v26 = (struct _HAM_APPLICATION *)((char *)a1 + 600);
  v27 = (struct _HAM_APPLICATION *)*((_QWORD *)a1 + 75);
  if ( v27 == (struct _HAM_APPLICATION *)((char *)a1 + 600) )
  {
LABEL_202:
    v28 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v28 = (char *)v27 - 824;
      if ( *((int *)v27 - 216) >= 0 )
        break;
      v27 = *(struct _HAM_APPLICATION **)v27;
      if ( v27 == v26 )
        goto LABEL_202;
    }
    ++*((_QWORD *)v28 + 75);
  }
  if ( HampLockTrackerId != -1 )
  {
    v29 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v30 = *v29;
    if ( (*v29 & 0x20) == 0 )
      __int2c();
    v10 = v29[6]-- == 1;
    if ( v10 )
      *v29 = v30 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v15);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v32 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v33 = *v32;
    if ( (*v32 & 1) == 0 )
      __int2c();
    v10 = v32[1]-- == 1;
    if ( v10 )
      *v32 = v33 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( v28 )
  {
    while ( 1 )
    {
      v34 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v35 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v35 |= 2uLL;
        ++v35[2];
      }
      RtlAcquireSRWLockShared(v28);
      if ( HampHostVetoesSuspendLicense((struct _RM_HAM_ACTIVITY_HOST *)v28) )
        break;
      v107 |= (*((_QWORD *)v28 + 83) >> 49) & 1;
      if ( HampLockTrackerId != -1 )
      {
        v37 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v38 = *v37;
        if ( (*v37 & 2) == 0 )
          __int2c();
        v10 = v37[2]-- == 1;
        if ( v10 )
          *v37 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(v28);
      v39 = HampLockTrackerId;
      v40 = *((_QWORD *)v28 + 99);
      if ( HampLockTrackerId != -1 )
      {
        v41 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v39) )
          __int2c();
        *v41 |= 1uLL;
        ++v41[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      v42 = GetCurrentThreadId();
      v43 = HampLockTrackerId;
      dword_1800DD4E8 = v42;
      if ( HampLockTrackerId != -1 )
      {
        v44 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v44 |= 0x20uLL;
        ++v44[6];
      }
      v45 = v40 + 584;
      RtlAcquireSRWLockShared(v40 + 584);
      v46 = *((_QWORD *)v28 + 103);
      v47 = v40 + 600;
      if ( v46 == v47 )
      {
LABEL_75:
        v48 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v48 = (char *)(v46 - 824);
          if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v46 - 824)) )
            break;
          v46 = *v103;
          if ( v46 == v47 )
            goto LABEL_75;
        }
      }
      if ( HampLockTrackerId != -1 )
      {
        v49 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v50 = *v49;
        if ( (*v49 & 0x20) == 0 )
          __int2c();
        v10 = v49[6]-- == 1;
        if ( v10 )
          *v49 = v50 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v45);
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v51 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v52 = *v51;
        if ( (*v51 & 1) == 0 )
          __int2c();
        v10 = v51[1]-- == 1;
        if ( v10 )
          *v51 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v53 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v54 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v53) )
          __int2c();
        *v54 |= 1uLL;
        ++v54[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DD4E8 = GetCurrentThreadId();
      v10 = (*((_QWORD *)v28 + 75))-- == 1LL;
      if ( v10 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v28 - 64));
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v55 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v56 = *v55;
        if ( (*v55 & 1) == 0 )
          __int2c();
        v10 = v55[1]-- == 1;
        if ( v10 )
          *v55 = v56 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v28 = v48;
      if ( !v48 )
      {
        LOBYTE(v18) = v108;
        v15 = (char *)a1 + 584;
        v26 = (struct _HAM_APPLICATION *)((char *)a1 + 600);
        goto LABEL_99;
      }
    }
    CempLockTrackerMarkReleased(HampLockTrackerId, v36, 1u);
    RtlReleaseSRWLockShared(v28);
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)v28 + 75))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v28 - 64));
    RmpReleaseGlobalLock();
    HampAppAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 154) = (v108 << 23) | *((_DWORD *)a1 + 154) & 0xFE1FFFFF | v109 & 0x600000;
    HampAppReleaseLockExclusive(a1);
    HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
  }
  else
  {
LABEL_99:
    v57 = (struct _RM_HAM_ACTIVITY_HOST *)(unsigned int)HampSystemSuspendStoreLicense(a1, v31);
    v58 = -1LL;
    if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
    {
      v59 = (const unsigned __int16 *)((char *)a2 + 24);
      v112 = *((_QWORD *)a2 - 4);
      v137 = &v106;
      v135 = &v112;
      v106 = v18;
      v108 = (unsigned int)v57;
      v138 = 1LL;
      v136 = 8LL;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v59 = &word_1800B7A9C;
        v61 = 2;
      }
      else
      {
        v60 = -1LL;
        do
          v10 = v59[++v60] == 0;
        while ( !v10 );
        v61 = 2 * v60 + 2;
      }
      v132 = v59;
      v130 = &v108;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DC220;
      v133 = v61;
      v134 = 0;
      v131 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC220;
      v127 = &unk_1800C13EE;
      UserData.Reserved = 2;
      v128 = 65;
      v129 = 1;
      LODWORD(v109) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    if ( !v107 )
    {
      v100 = HampSystemRundownStoreLicense(a1, v57);
      if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
      {
        v109 = *((_QWORD *)a2 - 4);
        v101 = (const unsigned __int16 *)((char *)a2 + 24);
        v107 = v100;
        v124 = &v109;
        v125 = 8LL;
        if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
        {
          v101 = &word_1800B7A9C;
          v102 = 2;
        }
        else
        {
          do
            v10 = v101[++v58] == 0;
          while ( !v10 );
          v102 = 2 * v58 + 2;
        }
        v121 = v101;
        v122 = v102;
        v119 = &v107;
        *(_DWORD *)&v114.Level = 4;
        v115.Ptr = (ULONGLONG)off_1800DC220;
        v123 = 0;
        v120 = 4LL;
        *(_DWORD *)&v114.Id = 184549376;
        v114.Keyword = 8LL;
        v115.Size = *(unsigned __int16 *)off_1800DC220;
        v116 = &unk_1800C143B;
        v115.Reserved = 2;
        v117 = 55;
        v118 = 1;
        v110 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800DC238, &v114, 0LL, 0LL, 5u, &v115);
      }
    }
    v62 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v63 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v62) )
        __int2c();
      *v63 |= 1uLL;
      ++v63[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    v64 = GetCurrentThreadId();
    v65 = HampLockTrackerId;
    dword_1800DD4E8 = v64;
    if ( HampLockTrackerId != -1 )
    {
      v66 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v65) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v66 |= 0x20uLL;
      ++v66[6];
    }
    RtlAcquireSRWLockShared(v15);
    v67 = *(int **)v26;
    if ( *(struct _HAM_APPLICATION **)v26 == v26 )
    {
LABEL_208:
      v68 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v68 = (struct _RM_HAM_ACTIVITY_HOST *)(v67 - 206);
        if ( *(v67 - 216) >= 0 )
          break;
        v67 = *(int **)v67;
        if ( v67 == (int *)v26 )
          goto LABEL_208;
      }
      ++*((_QWORD *)v68 + 75);
    }
    if ( HampLockTrackerId != -1 )
    {
      v69 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v70 = *v69;
      if ( (*v69 & 0x20) == 0 )
        __int2c();
      v10 = v69[6]-- == 1;
      if ( v10 )
        *v69 = v70 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared(v15);
    dword_1800DD4E8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v71 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v72 = *v71;
      if ( (*v71 & 1) == 0 )
        __int2c();
      v10 = v71[1]-- == 1;
      if ( v10 )
        *v71 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    if ( !v68 )
      goto LABEL_165;
    do
    {
      if ( v68 != a2 )
      {
        HampHostAcquireLockExclusiveEx(v68, 0);
        HampHostCheckQueueStateWorker(v68, 0);
        HampHostReleaseLockExclusiveEx(v68, v104);
      }
      v73 = HampLockTrackerId;
      v74 = *((_QWORD *)v68 + 99);
      if ( HampLockTrackerId != -1 )
      {
        v75 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v73) )
          __int2c();
        *v75 |= 1uLL;
        ++v75[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      v76 = GetCurrentThreadId();
      v77 = HampLockTrackerId;
      dword_1800DD4E8 = v76;
      if ( HampLockTrackerId != -1 )
      {
        v78 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v77) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v78 |= 0x20uLL;
        ++v78[6];
      }
      v79 = v74 + 584;
      RtlAcquireSRWLockShared(v74 + 584);
      v80 = *((_QWORD *)v68 + 103);
      v81 = v74 + 600;
      if ( v80 == v81 )
      {
LABEL_141:
        v82 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v82 = (struct _RM_HAM_ACTIVITY_HOST *)(v80 - 824);
          if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v80 - 824)) )
            break;
          v80 = *v105;
          if ( v80 == v81 )
            goto LABEL_141;
        }
      }
      if ( HampLockTrackerId != -1 )
      {
        v83 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v84 = *v83;
        if ( (*v83 & 0x20) == 0 )
          __int2c();
        v10 = v83[6]-- == 1;
        if ( v10 )
          *v83 = v84 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v79);
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v85 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v86 = *v85;
        if ( (*v85 & 1) == 0 )
          __int2c();
        v10 = v85[1]-- == 1;
        if ( v10 )
          *v85 = v86 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v87 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v88 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v87) )
          __int2c();
        *v88 |= 1uLL;
        ++v88[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DD4E8 = GetCurrentThreadId();
      v10 = (*((_QWORD *)v68 + 75))-- == 1LL;
      if ( v10 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v68 - 64));
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v89 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v90 = *v89;
        if ( (*v89 & 1) == 0 )
          __int2c();
        v10 = v89[1]-- == 1;
        if ( v10 )
          *v89 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v68 = v82;
    }
    while ( v82 );
  }
  v15 = (char *)a1 + 584;
LABEL_165:
  v91 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v92 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v91) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v92 |= 0x20uLL;
    ++v92[6];
  }
  RtlAcquireSRWLockExclusive(v15);
  *((_DWORD *)v15 + 2) = GetCurrentThreadId();
  HampAppExitLicenseWorker(a1);
  if ( HampLockTrackerId != -1 )
  {
    v93 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v94 = *v93;
    if ( (*v93 & 0x20) == 0 )
      __int2c();
    v10 = v93[6]-- == 1;
    if ( v10 )
      *v93 = v94 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)v15 + 2) = 0;
  RtlReleaseSRWLockExclusive(v15);
  v95 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v96 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v95) )
      __int2c();
    *v96 |= 1uLL;
    ++v96[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  v97 = GetCurrentThreadId();
  v98 = HampLockTrackerId;
  dword_1800DD4E8 = v97;
  if ( HampLockTrackerId != -1 )
  {
    v99 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v98) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v99 |= 2uLL;
    ++v99[2];
  }
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  return 1LL;
}
