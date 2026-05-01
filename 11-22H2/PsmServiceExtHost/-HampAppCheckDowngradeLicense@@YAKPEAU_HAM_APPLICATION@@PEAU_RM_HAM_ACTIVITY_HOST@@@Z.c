/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000E280 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001349C (-HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180014FCC (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015CC0 (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E1C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800537B4 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F970 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18007F9E0 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // r14
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 *Value; // rax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  DWORD v14; // edi
  _QWORD *v15; // rbx
  char *v16; // rsi
  int i; // r15d
  int v18; // r15d
  __int64 *v19; // rax
  __int64 v20; // rcx
  DWORD v21; // edi
  int v22; // r13d
  _QWORD *v23; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v25; // edi
  _QWORD *v26; // rbx
  _QWORD **v27; // r12
  _QWORD *v28; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v29; // rbx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rcx
  DWORD v36; // esi
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rcx
  DWORD v41; // esi
  __int64 v42; // r14
  _QWORD *v43; // rdi
  DWORD v44; // eax
  DWORD v45; // esi
  _QWORD *v46; // rdi
  __int64 v47; // r8
  struct _RM_HAM_ACTIVITY_HOST *v48; // rdi
  __int64 *v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rcx
  DWORD v55; // r14d
  _QWORD *v56; // rsi
  struct _RM_ACTIVITY_HOST *v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  const unsigned __int16 *v65; // rcx
  __int64 v66; // rax
  int v67; // edx
  struct _RM_ACTIVITY_HOST *v68; // rcx
  struct _HAM_APPLICATION *v69; // r13
  struct _RM_HAM_ACTIVITY_HOST *v70; // r14
  char *v71; // rsi
  unsigned int v72; // r8d
  const unsigned __int16 *v73; // rax
  int v74; // ecx
  DWORD v75; // edi
  _QWORD *v76; // rbx
  DWORD v77; // eax
  DWORD v78; // edi
  _QWORD *v79; // rbx
  char *v80; // rsi
  _QWORD *v81; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v82; // rbx
  __int64 v83; // rcx
  __int64 *v84; // rax
  __int64 v85; // rcx
  __int64 *v86; // rax
  __int64 v87; // rcx
  DWORD v88; // esi
  __int64 v89; // r14
  _QWORD *v90; // rdi
  DWORD v91; // eax
  DWORD v92; // esi
  _QWORD *v93; // rdi
  __int64 v94; // r8
  struct _RM_HAM_ACTIVITY_HOST *v95; // rdi
  __int64 *v96; // r8
  __int64 v97; // r9
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 *v100; // rax
  __int64 v101; // rcx
  DWORD v102; // r14d
  _QWORD *v103; // rsi
  struct _RM_ACTIVITY_HOST *v104; // rcx
  __int64 *v105; // rax
  __int64 v106; // rcx
  DWORD v107; // edi
  _QWORD *v108; // rbx
  __int64 *v109; // rax
  __int64 v110; // rdx
  DWORD v111; // edi
  _QWORD *v112; // rbx
  DWORD v113; // eax
  DWORD v114; // edi
  _QWORD *v115; // rbx
  __int64 v116; // rbx
  char v117; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v118; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_APPLICATION *v119; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v120; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v121; // [rsp+44h] [rbp-BCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v122; // [rsp+48h] [rbp-B8h]
  int v123; // [rsp+50h] [rbp-B0h] BYREF
  int v124; // [rsp+54h] [rbp-ACh] BYREF
  int v125; // [rsp+58h] [rbp-A8h] BYREF
  char *v126; // [rsp+60h] [rbp-A0h]
  __int64 v127; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v129; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+90h] [rbp-70h] BYREF
  void *v131; // [rsp+A0h] [rbp-60h]
  int v132; // [rsp+A8h] [rbp-58h]
  int v133; // [rsp+ACh] [rbp-54h]
  unsigned int *v134; // [rsp+B0h] [rbp-50h]
  __int64 v135; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v136; // [rsp+C0h] [rbp-40h]
  int v137; // [rsp+C8h] [rbp-38h]
  int v138; // [rsp+CCh] [rbp-34h]
  struct _HAM_APPLICATION **v139; // [rsp+D0h] [rbp-30h]
  __int64 v140; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v142; // [rsp+F0h] [rbp-10h]
  int v143; // [rsp+F8h] [rbp-8h]
  int v144; // [rsp+FCh] [rbp-4h]
  unsigned int *v145; // [rsp+100h] [rbp+0h]
  __int64 v146; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v147; // [rsp+110h] [rbp+10h]
  int v148; // [rsp+118h] [rbp+18h]
  int v149; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v150; // [rsp+120h] [rbp+20h]
  __int64 v151; // [rsp+128h] [rbp+28h]
  char *v152; // [rsp+130h] [rbp+30h]
  __int64 v153; // [rsp+138h] [rbp+38h]

  v2 = *((_QWORD *)a2 + 83) >> 61;
  v3 = a2;
  v122 = a2;
  v119 = a1;
  if ( (v2 & 3) != 0 )
    return 0LL;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v123, (union _RM_OPTIMIZATION_STATE *)&v124);
  if ( (v123 & 0x100) == 0
    || (v124 & 0x100) != 0
    || *((_BYTE *)v3 + 592) == 1 && (*((_QWORD *)v3 + 83) & 0x2000000000000LL) != 0 )
  {
    return 0LL;
  }
  v5 = *((_QWORD *)v3 + 84);
  if ( (v5 & 1) == 0 && ((v5 & 2) == 0 || (*((_QWORD *)v3 + 83) & 0x2000000000000LL) != 0) )
    return 0LL;
  v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)v3 + 84) = v7;
  if ( (*((_QWORD *)v3 + 83) & 0x2000000000000LL) == 0 )
    *((_QWORD *)v3 + 84) = v7 & 0xFFFFFFFFFFFFFFFDuLL;
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
  v11 = 64LL;
  if ( v3 )
    v11 = (__int64)v3;
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 1) == 0 )
      __int2c();
    v10 = v12[1]-- == 1;
    if ( v10 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v15 |= 0x20uLL;
    ++v15[6];
  }
  v16 = (char *)a1 + 584;
  v126 = (char *)a1 + 584;
  RtlAcquireSRWLockExclusive((char *)a1 + 584);
  *((_DWORD *)a1 + 148) = GetCurrentThreadId();
  for ( i = *((_DWORD *)a1 + 154); (i & 0x100000) != 0; i = *((_DWORD *)a1 + 154) )
  {
    HampAppTraceWaitForLicenseWorkerForHost(v3);
    HampAppWaitForFlagChange(a1);
  }
  v18 = i | 0x100000;
  *((_DWORD *)a1 + 154) = v18 & 0xFE1FFFFF;
  v118 = ((v18 & 0xFF9FFFFF) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v20 = *v19;
    if ( (*v19 & 0x20) == 0 )
      __int2c();
    v10 = v19[6]-- == 1;
    if ( v10 )
      *v19 = v20 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  v21 = HampLockTrackerId;
  v22 = 0;
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v21) )
      __int2c();
    *v23 |= 1uLL;
    ++v23[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v25 = HampLockTrackerId;
  dword_1800DC590 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v26 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v26 |= 0x20uLL;
    ++v26[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  v27 = (_QWORD **)((char *)a1 + 600);
  v28 = *v27;
  if ( *v27 == v27 )
  {
LABEL_48:
    v29 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v29 = (struct _RM_HAM_ACTIVITY_HOST *)(v28 - 103);
      v30 = 24LL;
      if ( v28 != (_QWORD *)824 )
        v30 = (__int64)(v28 - 108);
      if ( *(int *)v30 >= 0 )
        break;
      v28 = (_QWORD *)*v28;
      if ( v28 == v27 )
        goto LABEL_48;
    }
    ++*((_QWORD *)v29 + 75);
  }
  if ( HampLockTrackerId != -1 )
  {
    v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v32 = *v31;
    if ( (*v31 & 0x20) == 0 )
      __int2c();
    v10 = v31[6]-- == 1;
    if ( v10 )
      *v31 = v32 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v16);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v34 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v35 = *v34;
    if ( (*v34 & 1) == 0 )
      __int2c();
    v10 = v34[1]-- == 1;
    if ( v10 )
      *v34 = v35 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( v29 )
  {
    while ( 1 )
    {
      v36 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v37 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v37 |= 2uLL;
        ++v37[2];
      }
      RtlAcquireSRWLockShared(v29);
      if ( ((*((_QWORD *)v29 + 83) >> 61) & 3) != 0 )
        break;
      RmHamHostGetCurrentState(v29, (union _RM_OPTIMIZATION_STATE *)&v125, (union _RM_OPTIMIZATION_STATE *)&v120);
      if ( (v125 & 0x100) == 0
        || (v120 & 0x100) != 0
        || *((_BYTE *)v29 + 592) == 1 && (*((_QWORD *)v29 + 83) & 0x2000000000000LL) != 0 )
      {
        break;
      }
      v22 |= (*((_QWORD *)v29 + 83) >> 49) & 1;
      if ( HampLockTrackerId != -1 )
      {
        v39 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v40 = *v39;
        if ( (*v39 & 2) == 0 )
          __int2c();
        v10 = v39[2]-- == 1;
        if ( v10 )
          *v39 = v40 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(v29);
      v41 = HampLockTrackerId;
      v42 = *((_QWORD *)v29 + 99);
      if ( HampLockTrackerId != -1 )
      {
        v43 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v41) )
          __int2c();
        *v43 |= 1uLL;
        ++v43[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      v44 = GetCurrentThreadId();
      v45 = HampLockTrackerId;
      dword_1800DC590 = v44;
      if ( HampLockTrackerId != -1 )
      {
        v46 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v46 |= 0x20uLL;
        ++v46[6];
      }
      RtlAcquireSRWLockShared(v42 + 584);
      v47 = *((_QWORD *)v29 + 103);
      if ( v47 == v42 + 600 )
      {
LABEL_85:
        v48 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v48 = (struct _RM_HAM_ACTIVITY_HOST *)(v47 - 824);
          if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v47 - 824)) )
            break;
          v47 = *v49;
          if ( v47 == v50 )
            goto LABEL_85;
        }
      }
      if ( HampLockTrackerId != -1 )
      {
        v51 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v52 = *v51;
        if ( (*v51 & 0x20) == 0 )
          __int2c();
        v10 = v51[6]-- == 1;
        if ( v10 )
          *v51 = v52 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v42 + 584);
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v53 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v54 = *v53;
        if ( (*v53 & 1) == 0 )
          __int2c();
        v10 = v53[1]-- == 1;
        if ( v10 )
          *v53 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v55 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v56 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v55) )
          __int2c();
        *v56 |= 1uLL;
        ++v56[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DC590 = GetCurrentThreadId();
      v10 = (*((_QWORD *)v29 + 75))-- == 1LL;
      if ( v10 )
      {
        v57 = 0LL;
        if ( v29 )
          v57 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v29 - 64);
        RmpActivityHostCheckQueueDelete(v57);
      }
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v58 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v59 = *v58;
        if ( (*v58 & 1) == 0 )
          __int2c();
        v10 = v58[1]-- == 1;
        if ( v10 )
          *v58 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v29 = v48;
      if ( !v48 )
      {
        v3 = v122;
        goto LABEL_111;
      }
    }
    CempLockTrackerMarkReleased(HampLockTrackerId, v38, 1u);
    RtlReleaseSRWLockShared(v29);
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)v29 + 75))-- == 1LL;
    if ( v10 )
    {
      v68 = 0LL;
      if ( v29 )
        v68 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v29 - 64);
      RmpActivityHostCheckQueueDelete(v68);
    }
    RmpReleaseGlobalLock();
    v69 = v119;
    HampAppAcquireLockExclusive(v119);
    *((_DWORD *)v119 + 154) = (v118 << 23) | *((_DWORD *)v119 + 154) & 0xFE1FFFFF | v18 & 0x600000;
    HampAppReleaseLockExclusive(v69);
    v70 = v122;
    HampAppCheckQueueHostWorkersPostLicensing(v69, v122);
    v71 = v126;
  }
  else
  {
LABEL_111:
    v60 = 32LL;
    v61 = (struct _RM_HAM_ACTIVITY_HOST *)(unsigned int)HampSystemSuspendStoreLicense(v119, v33);
    v62 = -1LL;
    if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
    {
      v117 = v118;
      v63 = 32LL;
      v118 = (unsigned int)v61;
      if ( v3 )
        v63 = (__int64)v3 - 32;
      v153 = 1LL;
      v151 = 8LL;
      v64 = *(_QWORD *)v63;
      v65 = (const unsigned __int16 *)((char *)v3 + 24);
      v127 = v64;
      v152 = &v117;
      v150 = &v127;
      if ( v3 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v65 = &word_1800B66C4;
        v67 = 2;
      }
      else
      {
        v66 = -1LL;
        do
          v10 = v65[++v66] == 0;
        while ( !v10 );
        v67 = 2 * v66 + 2;
      }
      v147 = v65;
      v145 = &v118;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DB220;
      v148 = v67;
      v149 = 0;
      v146 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800DB220;
      v142 = &unk_1800C2880;
      UserData.Reserved = 2;
      v143 = 65;
      v144 = 1;
      v121 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    v10 = v22 == 0;
    v69 = v119;
    if ( v10 )
    {
      v72 = HampSystemRundownStoreLicense(v119, v61);
      if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
      {
        v121 = v72;
        v140 = 8LL;
        if ( v3 )
          v60 = (__int64)v3 - 32;
        v139 = &v119;
        v119 = *(struct _HAM_APPLICATION **)v60;
        v73 = (const unsigned __int16 *)((char *)v3 + 24);
        if ( v3 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
        {
          v73 = &word_1800B66C4;
          v74 = 2;
        }
        else
        {
          do
            v10 = v73[++v62] == 0;
          while ( !v10 );
          v74 = 2 * v62 + 2;
        }
        v136 = v73;
        v137 = v74;
        v134 = &v121;
        *(_DWORD *)&v129.Level = 4;
        v130.Ptr = (ULONGLONG)off_1800DB220;
        v138 = 0;
        v135 = 4LL;
        *(_DWORD *)&v129.Id = 184549376;
        v129.Keyword = 8LL;
        v130.Size = *(unsigned __int16 *)off_1800DB220;
        v131 = &unk_1800C2A64;
        v130.Reserved = 2;
        v132 = 55;
        v133 = 1;
        v120 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800DB238, &v129, 0LL, 0LL, 5u, &v130);
      }
    }
    v75 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v76 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v75) )
        __int2c();
      *v76 |= 1uLL;
      ++v76[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    v77 = GetCurrentThreadId();
    v78 = HampLockTrackerId;
    dword_1800DC590 = v77;
    if ( HampLockTrackerId != -1 )
    {
      v79 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v78) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v79 |= 0x20uLL;
      ++v79[6];
    }
    v80 = v126;
    RtlAcquireSRWLockShared(v126);
    v81 = *v27;
    if ( *v27 == v27 )
    {
LABEL_152:
      v82 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v82 = (struct _RM_HAM_ACTIVITY_HOST *)(v81 - 103);
        v83 = 24LL;
        if ( v81 != (_QWORD *)824 )
          v83 = (__int64)(v81 - 108);
        if ( *(int *)v83 >= 0 )
          break;
        v81 = (_QWORD *)*v81;
        if ( v81 == v27 )
          goto LABEL_152;
      }
      ++*((_QWORD *)v82 + 75);
    }
    if ( HampLockTrackerId != -1 )
    {
      v84 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v85 = *v84;
      if ( (*v84 & 0x20) == 0 )
        __int2c();
      v10 = v84[6]-- == 1;
      if ( v10 )
        *v84 = v85 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared(v80);
    dword_1800DC590 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v86 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v87 = *v86;
      if ( (*v86 & 1) == 0 )
        __int2c();
      v10 = v86[1]-- == 1;
      if ( v10 )
        *v86 = v87 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    if ( v82 )
    {
      do
      {
        if ( v82 != v3 )
        {
          HampHostAcquireLockExclusiveEx(v82, 0);
          HampHostCheckQueueStateWorker(v82, 0);
          HampHostReleaseLockExclusiveEx(v82);
        }
        v88 = HampLockTrackerId;
        v89 = *((_QWORD *)v82 + 99);
        if ( HampLockTrackerId != -1 )
        {
          v90 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v88) )
            __int2c();
          *v90 |= 1uLL;
          ++v90[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        v91 = GetCurrentThreadId();
        v92 = HampLockTrackerId;
        dword_1800DC590 = v91;
        if ( HampLockTrackerId != -1 )
        {
          v93 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v92) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
            __int2c();
          *v93 |= 0x20uLL;
          ++v93[6];
        }
        RtlAcquireSRWLockShared(v89 + 584);
        v94 = *((_QWORD *)v82 + 103);
        if ( v94 == v89 + 600 )
        {
LABEL_177:
          v95 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v95 = (struct _RM_HAM_ACTIVITY_HOST *)(v94 - 824);
            if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v94 - 824)) )
              break;
            v94 = *v96;
            if ( v94 == v97 )
              goto LABEL_177;
          }
        }
        if ( HampLockTrackerId != -1 )
        {
          v98 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v99 = *v98;
          if ( (*v98 & 0x20) == 0 )
            __int2c();
          v10 = v98[6]-- == 1;
          if ( v10 )
            *v98 = v99 & 0xFFFFFFFFFFFFFFDFuLL;
        }
        RtlReleaseSRWLockShared(v89 + 584);
        dword_1800DC590 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v100 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v101 = *v100;
          if ( (*v100 & 1) == 0 )
            __int2c();
          v10 = v100[1]-- == 1;
          if ( v10 )
            *v100 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v102 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v103 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v102) )
            __int2c();
          *v103 |= 1uLL;
          ++v103[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800DC590 = GetCurrentThreadId();
        v10 = (*((_QWORD *)v82 + 75))-- == 1LL;
        if ( v10 )
        {
          v104 = 0LL;
          if ( v82 )
            v104 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v82 - 64);
          RmpActivityHostCheckQueueDelete(v104);
        }
        dword_1800DC590 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v105 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v106 = *v105;
          if ( (*v105 & 1) == 0 )
            __int2c();
          v10 = v105[1]-- == 1;
          if ( v10 )
            *v105 = v106 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v3 = v122;
        v82 = v95;
      }
      while ( v95 );
    }
    v70 = v122;
    v71 = (char *)v69 + 584;
  }
  v107 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v108 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v107) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v108 |= 0x20uLL;
    ++v108[6];
  }
  RtlAcquireSRWLockExclusive(v71);
  *((_DWORD *)v71 + 2) = GetCurrentThreadId();
  HampAppExitLicenseWorker(v69);
  if ( HampLockTrackerId != -1 )
  {
    v109 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v110 = *v109;
    if ( (*v109 & 0x20) == 0 )
      __int2c();
    v10 = v109[6]-- == 1;
    if ( v10 )
      *v109 = v110 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)v71 + 2) = 0;
  RtlReleaseSRWLockExclusive(v71);
  v111 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v112 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v111) )
      __int2c();
    *v112 |= 1uLL;
    ++v112[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  v113 = GetCurrentThreadId();
  v114 = HampLockTrackerId;
  dword_1800DC590 = v113;
  if ( HampLockTrackerId != -1 )
  {
    v115 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v114) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v115 |= 2uLL;
    ++v115[2];
  }
  v116 = 64LL;
  if ( v70 )
    v116 = (__int64)v70;
  RtlAcquireSRWLockExclusive(v116);
  *(_DWORD *)(v116 + 8) = GetCurrentThreadId();
  return 1LL;
}
