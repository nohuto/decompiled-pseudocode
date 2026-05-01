/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800171D0
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000CEAC (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x180009AA0 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180017D50 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180083B90 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x180083C28 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  unsigned __int64 v7; // rdx
  char *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  char *v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  char v20; // al
  bool v21; // zf
  char *v22; // rax
  char v23; // di
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // rax
  DWORD v30; // edi
  __int64 v31; // r14
  __int64 v32; // rsi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v35; // ecx
  bool v36; // bl
  __int64 *v37; // rax
  __int64 v38; // rdx
  DWORD v39; // edi
  _QWORD *v40; // rbx
  char v41; // bl
  __int64 *v42; // rax
  __int64 v43; // rdx
  DWORD v44; // edi
  _QWORD *v45; // rbx
  unsigned __int64 v46; // rdi
  BOOL v47; // ebx
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int16 v50; // bx
  unsigned __int8 v51; // cl
  int v52; // r8d
  int v53; // eax
  char v54; // al
  char v55; // cl
  char v56; // al
  char v57; // cl
  char *v58; // rdi
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int128 v66; // xmm2
  unsigned __int64 v67; // rcx
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  struct _RM_COMMIT_THRESHOLDS *v70; // rax
  struct _RM_COMMIT_THRESHOLDS *v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  int v82; // edx
  __int128 v83; // xmm1
  char v84; // al
  BOOL v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  char *v88; // rax
  int v89; // eax
  unsigned int v90; // r9d
  unsigned int v91; // r10d
  int v92; // ecx
  int v93; // eax
  __int64 v94; // rcx
  __int128 v95; // xmm1
  __int128 v96; // [rsp+20h] [rbp-51h] BYREF
  __int128 v97; // [rsp+30h] [rbp-41h]
  __int128 v98; // [rsp+40h] [rbp-31h]
  __int64 v99; // [rsp+50h] [rbp-21h]
  int v100; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v101; // [rsp+60h] [rbp-11h] BYREF
  char *v102; // [rsp+68h] [rbp-9h]
  _BYTE *v103; // [rsp+70h] [rbp-1h]
  unsigned int v104; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v105; // [rsp+D8h] [rbp+67h]
  struct _RM_COMMIT_THRESHOLDS *v106; // [rsp+E0h] [rbp+6Fh]
  struct _RM_COMMIT_THRESHOLDS *v107; // [rsp+E8h] [rbp+77h]

  v107 = a4;
  v106 = a3;
  v7 = 0LL;
  v8 = 0LL;
  v104 = 0;
  v102 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v105 = 0;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v9 = *((_QWORD *)a1 + 99);
  v96 = 0LL;
  LOWORD(v104) = 1;
  v97 = 0LL;
  v101 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v9 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
       - 168;
  *((_DWORD *)a2 + 6) = *((_DWORD *)a1 + 140) != 2;
  v10 = *((_QWORD *)a1 + 99);
  v103 = (_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v10 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 - 1908);
  v11 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  if ( v11 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v12 = (char *)v11 - 96;
    if ( v12 )
    {
      v13 = v97;
      v14 = *((_QWORD *)&v96 + 1);
      v15 = v96;
      v16 = *((_QWORD *)&v97 + 1);
      v17 = v104;
      v99 = v97;
      v98 = v96;
      while ( 1 )
      {
        v18 = *((_QWORD *)v12 + 64);
        v19 = *((_QWORD *)a1 + 102);
        if ( v18 == v19 )
        {
          v20 = v12[562];
        }
        else
        {
          if ( v18 )
            goto LABEL_12;
          if ( v12[562] != 2 )
            goto LABEL_12;
          v20 = 2;
          if ( (unsigned __int8)v12[563] < 5u )
            goto LABEL_12;
        }
        v21 = (v12[480] & 0x20) == 0;
        v105 = v7 + 1;
        if ( !v21 )
          break;
        v72 = *((_QWORD *)v12 + 58);
        v7 = *((_QWORD *)v12 + 57);
        v73 = *((_QWORD *)v12 + 56);
        v74 = *((_QWORD *)v12 + 55);
        if ( v72 == -1LL || v16 == -1LL || (v16 += v72, v16 < v72) )
          v16 = -1LL;
        *((_QWORD *)&v97 + 1) = v16;
        if ( v7 == -1LL || v13 == -1 || (v75 = v7 + v13, v99 = v75, v75 < v7) )
        {
          v75 = -1LL;
          v99 = -1LL;
        }
        *(_QWORD *)&v97 = v75;
        if ( v73 == -1LL || v14 == -1LL || (v14 += v73, *((_QWORD *)&v98 + 1) = v14, v14 < v73) )
        {
          *((_QWORD *)&v98 + 1) = -1LL;
          v14 = -1LL;
          *((_QWORD *)&v96 + 1) = -1LL;
        }
        else
        {
          *((_QWORD *)&v96 + 1) = v14;
        }
        if ( v74 == -1LL || v15 == -1LL || (v15 += v74, v15 < v74) )
          v15 = -1LL;
        *(_QWORD *)&v96 = v15;
LABEL_12:
        v23 = v12[562];
        if ( v23 == 3 || v23 == 2 && (unsigned __int8)v12[563] >= 3u || v18 == v19 )
        {
          v24 = *((unsigned int *)v12 + 106);
          if ( (v24 & 1) != 0 )
            v17 = RmpActivityImportanceMergeVectors(v24, v17);
          if ( v23 != 3 )
          {
            if ( v23 != 2 )
              goto LABEL_26;
            if ( (unsigned __int8)v12[563] < 3u )
            {
LABEL_17:
              if ( (unsigned __int8)v12[563] < 5u )
                goto LABEL_26;
LABEL_25:
              *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) | (*((_DWORD *)v12 + 120) >> 3))) & 1;
              goto LABEL_26;
            }
          }
          v25 = *((_DWORD *)v12 + 120) & 3;
          if ( v25 <= *((_DWORD *)a2 + 6) )
            v25 = *((_DWORD *)a2 + 6);
          *((_DWORD *)a2 + 6) = v25;
          v23 = v12[562];
          if ( v23 == 3 )
            goto LABEL_25;
        }
        if ( v23 == 2 )
          goto LABEL_17;
LABEL_26:
        if ( (*v103 & 0x10) != 0 )
        {
          LOBYTE(v7) = 5;
          if ( !(unsigned int)HampActIsStartedOrReachedPendState(v12, v7)
            && *((_QWORD *)v12 + 64) == *((_QWORD *)a1 + 102)
            && v90 )
          {
            v90 = v91;
          }
          if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7u) > v90 )
            LOBYTE(v90) = (*((_BYTE *)a2 + 28) >> 4) & 7;
          *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0x8F | (16 * v90);
        }
        v26 = *((_QWORD *)v12 + 12);
        v27 = *((_QWORD *)v12 + 10);
        v12 = 0LL;
        v13 = v99;
        v8 = v102;
        v21 = v26 == v27 + 608;
        v28 = (char *)(v26 - 96);
        v7 = v105;
        if ( !v21 )
          v12 = v28;
        if ( !v12 )
        {
          v10 = *((_QWORD *)a1 + 99);
          v104 = v17;
          goto LABEL_31;
        }
      }
      if ( !v8 )
      {
        v7 = 1LL;
LABEL_9:
        v22 = v12;
        if ( (int)v7 <= 0 )
          v22 = v8;
        v102 = v22;
        goto LABEL_12;
      }
      if ( v20 == 3 )
      {
        v82 = 1;
      }
      else
      {
        v82 = 0;
        if ( v20 == 2 )
          LOBYTE(v82) = (unsigned __int8)v12[563] >= 5u;
      }
      v84 = v8[562];
      if ( v84 == 3 )
        v85 = 1;
      else
        v85 = v84 == 2 && (unsigned __int8)v8[563] >= 5u;
      if ( v82 )
      {
        if ( !v85 )
        {
          v7 = 1LL;
          goto LABEL_9;
        }
      }
      else if ( v85 )
      {
        v7 = 0xFFFFFFFFLL;
        goto LABEL_9;
      }
      if ( (*((_DWORD *)v12 + 28) & 0x10000) != 0 )
      {
        if ( (*((_DWORD *)v8 + 28) & 0x10000) == 0 )
        {
          v7 = 1LL;
          goto LABEL_9;
        }
      }
      else if ( (*((_DWORD *)v8 + 28) & 0x10000) != 0 )
      {
        v7 = 0xFFFFFFFFLL;
        goto LABEL_9;
      }
      v86 = *((_QWORD *)v12 + 57);
      if ( v86 > *((_QWORD *)v8 + 57) )
      {
        v7 = 1LL;
      }
      else if ( v86 < *((_QWORD *)v8 + 57) )
      {
        v7 = 0xFFFFFFFFLL;
      }
      else
      {
        v87 = *((_QWORD *)v12 + 58);
        if ( v87 > *((_QWORD *)v8 + 58) )
        {
          v7 = 1LL;
        }
        else if ( v87 < *((_QWORD *)v8 + 58) )
        {
          v7 = 0xFFFFFFFFLL;
        }
        else
        {
          v88 = *(char **)(*((_QWORD *)v12 + 10) + 1016LL);
          if ( v12 == v88 )
            v7 = 1LL;
          else
            v7 = (unsigned int)(v8 != v88) - 1;
        }
      }
      goto LABEL_9;
    }
  }
  v15 = v96;
  v16 = *((_QWORD *)&v97 + 1);
  *((_QWORD *)&v98 + 1) = *((_QWORD *)&v96 + 1);
  v99 = v97;
LABEL_31:
  v29 = *(_QWORD *)(v10 + 88);
  v30 = HampLockTrackerId;
  *(_QWORD *)&v98 = v15;
  v31 = *(_QWORD *)(v29 + 88);
  v32 = *(_QWORD *)(v31 + 160);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v32 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v35 = HampLockTrackerId;
  *(_DWORD *)(v32 + 104) = CurrentThreadId;
  v36 = (*(_DWORD *)(v32 + 144) & 2) != 0;
  if ( v35 != -1 )
  {
    v37 = (__int64 *)TlsGetValue(v35);
    v38 = *v37;
    if ( (*v37 & 0x100) == 0 )
      __int2c();
    v21 = v37[9]-- == 1;
    if ( v21 )
      *v37 = v38 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *(_DWORD *)(v32 + 104) = 0;
  RtlReleaseSRWLockExclusive(v32 + 96);
  if ( v36 )
    goto LABEL_210;
  v39 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v40 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v39) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v40 |= 0x80uLL;
    ++v40[8];
  }
  RtlAcquireSRWLockShared(v31 + 168);
  v41 = *(_BYTE *)(v31 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v42 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v43 = *v42;
    if ( (*v42 & 0x80u) == 0LL )
      __int2c();
    v21 = v42[8]-- == 1;
    if ( v21 )
      *v42 = v43 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared(v31 + 168);
  if ( v41 )
  {
LABEL_210:
    v89 = 1;
    if ( *((int *)a2 + 6) > 1 )
      v89 = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v89;
  }
  v44 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v45 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v45 |= 0x400uLL;
    ++v45[11];
  }
  v46 = v101;
  RtlAcquireSRWLockShared(v101);
  v47 = *(_DWORD *)(v101 + 444) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v48 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v49 = *v48;
    if ( (*v48 & 0x400) == 0 )
      __int2c();
    v21 = v48[11]-- == 1;
    if ( v21 )
      *v48 = v49 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(v46);
  if ( v47 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v100, 0LL);
    if ( (v100 & 0x100) != 0 )
    {
      v92 = *((_DWORD *)a1 + 286);
      if ( v92 <= *((_DWORD *)a2 + 6) )
        v92 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 6) = v92;
    }
    else
    {
      v93 = *((_DWORD *)a2 + 6);
      if ( v93 < 1 )
        v93 = 1;
      *((_DWORD *)a2 + 6) = v93;
    }
  }
  v50 = v104;
  v51 = v104;
  if ( (v104 & 0xC0) == 0xC0 )
    v52 = 2;
  else
    v52 = (v104 & 0xE) >= 8 && (v104 & 0x30) >= 0x20;
  v53 = *((_DWORD *)a2 + 6);
  if ( v53 <= v52 )
  {
    if ( (v104 & 0xC0) == 0xC0 )
      v53 = 2;
    else
      v53 = (v104 & 0xE) >= 8 && (v104 & 0x30) >= 0x20;
  }
  *((_BYTE *)a2 + 28) &= ~2u;
  *((_DWORD *)a2 + 6) = v53;
  *((_BYTE *)a2 + 28) |= 2 * (v51 >> 7);
  if ( (v50 & 0x100) == 0
    || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v104, (union _RM_OPTIMIZATION_STATE *)&v101),
        (v104 & 0x10) != 0)
    || (v101 & 0x10) != 0 )
  {
    v54 = 0;
  }
  else
  {
    v54 = 8;
  }
  v55 = v54 | *((_BYTE *)a2 + 28) & 0xF7;
  *((_BYTE *)a2 + 28) = v55;
  v56 = v55;
  if ( (*((_BYTE *)a1 + 1148) & 8) != 0 && (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    v56 = v55 | 8;
    *((_BYTE *)a2 + 28) = v55 | 8;
  }
  if ( (v50 & 0x400) == 0 || (*((_QWORD *)a1 + 83) & 0x4000000000000LL) != 0 )
    v57 = 0;
  else
    v57 = 4;
  v58 = v102;
  *((_BYTE *)a2 + 28) = v57 | v56 & 0xFB;
  if ( v58 )
  {
    v76 = *((_QWORD *)v58 + 58);
    v77 = *((_QWORD *)v58 + 57);
    v78 = *((_QWORD *)v58 + 56);
    v79 = *((_QWORD *)v58 + 55);
    if ( v76 == -1LL || v16 == -1LL || (v16 += v76, v16 < v76) )
      v16 = -1LL;
    *((_QWORD *)&v97 + 1) = v16;
    if ( v77 == -1LL || v99 == -1 || (v80 = v77 + v99, v99 = v80, v80 < v77) )
    {
      v80 = -1LL;
      v99 = -1LL;
    }
    *(_QWORD *)&v97 = v80;
    if ( v78 == -1LL
      || *((_QWORD *)&v98 + 1) == -1LL
      || (v81 = v78 + *((_QWORD *)&v98 + 1), *((_QWORD *)&v98 + 1) = v81, v81 < v78) )
    {
      v81 = -1LL;
      *((_QWORD *)&v98 + 1) = -1LL;
    }
    *((_QWORD *)&v96 + 1) = v81;
    if ( v79 == -1LL || (_QWORD)v98 == -1LL || (v59 = v79 + v98, *(_QWORD *)&v98 = v59, v59 < v79) )
    {
      v59 = -1LL;
      *(_QWORD *)&v98 = -1LL;
      *(_QWORD *)&v96 = -1LL;
    }
    else
    {
      *(_QWORD *)&v96 = v59;
    }
  }
  else
  {
    v59 = v98;
  }
  if ( v105 )
  {
    v60 = v99;
    v61 = *((_QWORD *)&v98 + 1);
  }
  else
  {
    v83 = *(_OWORD *)((char *)a1 + 904);
    v96 = *(_OWORD *)((char *)a1 + 888);
    v61 = *((_QWORD *)&v96 + 1);
    v59 = v96;
    v97 = v83;
    v16 = *((_QWORD *)&v83 + 1);
    v60 = v83;
    v98 = v96;
  }
  if ( (*v103 & 0x20) != 0 )
  {
    if ( HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL)) )
    {
      RmpCommitThresholdsAddValue((struct _RM_COMMIT_THRESHOLDS *)&v96, 0xFFFFFFFFFFFFFFFFuLL);
      v61 = *((_QWORD *)&v96 + 1);
      v59 = v96;
      v16 = *((_QWORD *)&v97 + 1);
      v60 = v97;
    }
    else
    {
      v61 = *((_QWORD *)&v98 + 1);
      v59 = v98;
    }
  }
  v62 = *((_QWORD *)a1 + 120);
  if ( v60 < v62 && v60 )
  {
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v96, v62, (struct _RM_COMMIT_THRESHOLDS *)&v96);
    v61 = *((_QWORD *)&v96 + 1);
    v59 = v96;
    v16 = *((_QWORD *)&v97 + 1);
    v60 = v97;
  }
  v63 = *((_QWORD *)a1 + 76);
  if ( (struct _RM_HAM_ACTIVITY_HOST *)v63 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608)
    && v63 != 96
    && (*(_DWORD *)(v63 + 16) & 0x80000) != 0 )
  {
    v94 = *((_QWORD *)HampHostGetFirstActivity(a1) + 9);
    v95 = *(_OWORD *)(v94 + 88);
    v96 = *(_OWORD *)(v94 + 72);
    v61 = *((_QWORD *)&v96 + 1);
    v59 = v96;
    v97 = v95;
    v16 = *((_QWORD *)&v95 + 1);
    v60 = v95;
  }
  v64 = *((_QWORD *)a1 + 121);
  if ( v16 != -1LL )
  {
    if ( v16 < v64 )
      v16 = 0LL;
    else
      v16 -= v64;
  }
  if ( v60 != -1LL )
  {
    if ( v60 < v64 )
      v60 = 0LL;
    else
      v60 -= v64;
  }
  if ( v61 != -1LL )
  {
    if ( v61 < v64 )
      v61 = 0LL;
    else
      v61 -= v64;
  }
  if ( v59 != -1LL )
  {
    if ( v59 < v64 )
      v59 = 0LL;
    else
      v59 -= v64;
  }
  v65 = *((_QWORD *)a1 + 122);
  if ( v16 != -1LL )
  {
    if ( v16 < v65 )
      v16 = 0LL;
    else
      v16 -= v65;
  }
  *((_QWORD *)&v97 + 1) = v16;
  if ( v60 == -1LL )
  {
    *(_QWORD *)&v97 = -1LL;
  }
  else if ( v60 < v65 )
  {
    *(_QWORD *)&v97 = 0LL;
  }
  else
  {
    *(_QWORD *)&v97 = v60 - v65;
  }
  if ( v61 == -1LL )
  {
    *((_QWORD *)&v96 + 1) = -1LL;
  }
  else if ( v61 < v65 )
  {
    *((_QWORD *)&v96 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v96 + 1) = v61 - v65;
  }
  if ( v59 == -1LL )
  {
    *(_QWORD *)&v96 = -1LL;
  }
  else if ( v59 < v65 )
  {
    *(_QWORD *)&v96 = 0LL;
  }
  else
  {
    *(_QWORD *)&v96 = v59 - v65;
  }
  v66 = v97;
  v67 = *((_QWORD *)a1 + 108);
  v68 = v96;
  v69 = v97;
  if ( v16 > v67 )
  {
    v67 = *((_QWORD *)&v97 + 1);
  }
  else
  {
    *((_QWORD *)&v97 + 1) = *((_QWORD *)a1 + 108);
    v69 = v97;
  }
  if ( (unsigned __int64)v69 <= *((_QWORD *)a1 + 109) )
  {
    *(_QWORD *)&v97 = *((_QWORD *)a1 + 109);
    v69 = v97;
  }
  v70 = v106;
  *((_QWORD *)a2 + 2) = v67;
  if ( v70 )
  {
    *(_OWORD *)v70 = v68;
    *((_OWORD *)v70 + 1) = v66;
  }
  v71 = v107;
  if ( v107 )
  {
    *(_OWORD *)v107 = v68;
    *((_OWORD *)v71 + 1) = v69;
  }
  if ( a5 )
    *a5 = (struct _HAM_ACTIVITY *)v58;
}
