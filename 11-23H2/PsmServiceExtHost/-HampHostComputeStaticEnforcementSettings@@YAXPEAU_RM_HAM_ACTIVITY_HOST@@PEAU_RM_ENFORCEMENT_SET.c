/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000EDA0 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000709C (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180024970 (RmpActivityImportanceMergeVectors.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800289D0 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D510 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180053574 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x1800823A4 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008243C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  __int64 v7; // r10
  int v8; // edx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  char v22; // al
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  char v27; // di
  _BYTE *v28; // rsi
  __int64 v29; // rcx
  int v30; // ecx
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  DWORD v36; // edi
  __int64 v37; // rsi
  __int64 v38; // r14
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v41; // ecx
  bool v42; // bl
  __int64 *v43; // rax
  __int64 v44; // rdx
  DWORD v45; // edi
  _QWORD *v46; // rbx
  char v47; // bl
  __int64 *v48; // rax
  __int64 v49; // rdx
  DWORD v50; // edi
  _QWORD *v51; // rbx
  unsigned __int64 v52; // rdi
  BOOL v53; // ebx
  __int64 *v54; // rax
  __int64 v55; // rdx
  char *v56; // rdi
  unsigned __int16 v57; // bx
  int v58; // edx
  int v59; // eax
  char v60; // al
  char v61; // cl
  char v62; // al
  char v63; // cl
  __int64 v64; // r10
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r8
  __int64 v68; // r11
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r9
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r12
  __int128 v78; // xmm2
  unsigned __int64 v79; // rcx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  struct _RM_COMMIT_THRESHOLDS *v82; // rax
  struct _RM_COMMIT_THRESHOLDS *v83; // rax
  __int128 v84; // xmm1
  int v85; // edx
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  BOOL v93; // edx
  char v94; // al
  BOOL v95; // eax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // rax
  unsigned int v103; // r9d
  unsigned int v104; // r10d
  int v105; // ecx
  int v106; // eax
  unsigned __int8 v107; // al
  __int64 v108; // rcx
  __int128 v109; // xmm1
  __int128 v110; // [rsp+20h] [rbp-51h] BYREF
  __int128 v111; // [rsp+30h] [rbp-41h]
  __int64 v112; // [rsp+40h] [rbp-31h]
  __int64 v113; // [rsp+48h] [rbp-29h]
  __int64 v114; // [rsp+50h] [rbp-21h]
  char *v115; // [rsp+58h] [rbp-19h] BYREF
  __int64 v116; // [rsp+60h] [rbp-11h]
  int v117; // [rsp+68h] [rbp-9h] BYREF
  _BYTE *v118; // [rsp+70h] [rbp-1h]
  unsigned __int64 v119; // [rsp+78h] [rbp+7h]
  unsigned int v120; // [rsp+D0h] [rbp+5Fh] BYREF
  int v121; // [rsp+D8h] [rbp+67h]
  struct _RM_COMMIT_THRESHOLDS *v122; // [rsp+E0h] [rbp+6Fh]
  struct _RM_COMMIT_THRESHOLDS *v123; // [rsp+E8h] [rbp+77h]

  v123 = a4;
  v122 = a3;
  if ( a1 )
  {
    v115 = (char *)a1 - 64;
    v7 = (__int64)a1 - 64;
  }
  else
  {
    v115 = 0LL;
    v7 = -64LL;
  }
  v120 = 1;
  *(_OWORD *)a2 = 0LL;
  v8 = 0;
  v9 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v10 = *((_QWORD *)a1 + 99);
  v116 = 0LL;
  v121 = 0;
  v110 = 0LL;
  v11 = *(_QWORD *)(v10 + 88);
  v111 = 0LL;
  v12 = *(_DWORD *)(v7 + 624) == 2;
  v119 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
       - 392;
  *((_DWORD *)a2 + 6) = !v12;
  v118 = (_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 - 2132);
  v13 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  if ( v13 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v14 = (__int64)v13 - 96;
    if ( v14 )
    {
      v15 = v111;
      v16 = *((_QWORD *)&v110 + 1);
      v17 = v110;
      v18 = *((_QWORD *)&v111 + 1);
      v19 = v120;
      v114 = v111;
      v112 = *((_QWORD *)&v110 + 1);
      v113 = v110;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v14 + 512);
        v21 = *((_QWORD *)a1 + 102);
        if ( v20 == v21 )
        {
          v22 = *(_BYTE *)(v14 + 562);
        }
        else
        {
          if ( v20 )
            goto LABEL_21;
          if ( *(_BYTE *)(v14 + 562) != 2 )
            goto LABEL_21;
          v22 = 2;
          if ( *(_BYTE *)(v14 + 563) < 5u )
            goto LABEL_21;
        }
        v12 = (*(_BYTE *)(v14 + 480) & 0x20) == 0;
        v121 = v8 + 1;
        if ( v12 )
        {
          v23 = *(_QWORD *)(v14 + 464);
          v24 = *(_QWORD *)(v14 + 456);
          v25 = *(_QWORD *)(v14 + 448);
          v26 = *(_QWORD *)(v14 + 440);
          if ( v23 == -1LL || v18 == -1LL || (v18 += v23, v18 < v23) )
          {
            v18 = -1LL;
            *((_QWORD *)&v111 + 1) = -1LL;
          }
          else
          {
            *((_QWORD *)&v111 + 1) = v18;
          }
          if ( v24 == -1LL || v15 == -1 || (v100 = v24 + v15, v114 = v100, v100 < v24) )
          {
            v114 = -1LL;
            *(_QWORD *)&v111 = -1LL;
          }
          else
          {
            *(_QWORD *)&v111 = v100;
          }
          if ( v25 == -1LL || v16 == -1 || (v101 = v25 + v16, v112 = v101, v101 < v25) )
          {
            v112 = -1LL;
            *((_QWORD *)&v110 + 1) = -1LL;
          }
          else
          {
            *((_QWORD *)&v110 + 1) = v101;
          }
          if ( v26 == -1LL || v17 == -1 )
          {
            v17 = -1LL;
            *(_QWORD *)&v110 = -1LL;
          }
          else
          {
            v102 = v26 + v17;
            v17 = -1LL;
            if ( v102 >= v26 )
              v17 = v102;
            *(_QWORD *)&v110 = v17;
          }
          goto LABEL_21;
        }
        if ( !v9 )
        {
          v85 = 1;
LABEL_124:
          v86 = v14;
          if ( v85 <= 0 )
            v86 = v9;
          v116 = v86;
          goto LABEL_21;
        }
        if ( v22 == 3 )
        {
          v93 = 1;
        }
        else
        {
          v93 = 0;
          if ( v22 == 2 )
            v93 = *(_BYTE *)(v14 + 563) >= 5u;
        }
        v94 = *(_BYTE *)(v9 + 562);
        if ( v94 == 3 )
          v95 = 1;
        else
          v95 = v94 == 2 && *(_BYTE *)(v9 + 563) >= 5u;
        if ( v93 )
        {
          if ( !v95 )
          {
            v85 = 1;
            goto LABEL_124;
          }
        }
        else if ( v95 )
        {
          v116 = v9;
          goto LABEL_21;
        }
        if ( (*(_DWORD *)(v14 + 112) & 0x10000) != 0 )
        {
          if ( (*(_DWORD *)(v9 + 112) & 0x10000) != 0 )
            goto LABEL_191;
          v116 = v14;
        }
        else
        {
          if ( (*(_DWORD *)(v9 + 112) & 0x10000) == 0 )
          {
LABEL_191:
            v96 = *(_QWORD *)(v14 + 456);
            if ( v96 > *(_QWORD *)(v9 + 456) )
            {
              v85 = 1;
            }
            else if ( v96 < *(_QWORD *)(v9 + 456) )
            {
              v85 = -1;
            }
            else
            {
              v97 = *(_QWORD *)(v14 + 464);
              if ( v97 > *(_QWORD *)(v9 + 464) )
              {
                v85 = 1;
              }
              else if ( v97 < *(_QWORD *)(v9 + 464) )
              {
                v85 = -1;
              }
              else
              {
                v98 = *(_QWORD *)(*(_QWORD *)(v14 + 80) + 1016LL);
                if ( v14 == v98 )
                {
                  v85 = 1;
                }
                else
                {
                  v85 = 0;
                  if ( v9 == v98 )
                    v85 = -1;
                }
              }
            }
            goto LABEL_124;
          }
          v116 = v9;
        }
LABEL_21:
        v27 = *(_BYTE *)(v14 + 562);
        v28 = (_BYTE *)(v14 + 563);
        if ( v27 == 3 || v27 == 2 && *v28 >= 3u || v20 == v21 )
        {
          v29 = *(unsigned int *)(v14 + 424);
          if ( (v29 & 1) != 0 )
            LODWORD(v19) = RmpActivityImportanceMergeVectors(v29, (unsigned int)v19, v19, v21);
          if ( v27 == 3 || v27 == 2 && *v28 >= 3u )
          {
            v30 = *(_DWORD *)(v14 + 480) & 3;
            if ( v30 <= *((_DWORD *)a2 + 6) )
              v30 = *((_DWORD *)a2 + 6);
            *((_DWORD *)a2 + 6) = v30;
          }
        }
        v31 = *(_BYTE *)(v14 + 562);
        if ( v31 == 3 || v31 == 2 && *v28 >= 5u )
          *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) | (*(_DWORD *)(v14 + 480) >> 3))) & 1;
        if ( (*v118 & 0x10) != 0 )
        {
          if ( !HampActIsStartedOrReachedPendState(v14, 5u) && *(_QWORD *)(v14 + 512) == *((_QWORD *)a1 + 102) && v103 )
            v103 = v104;
          if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7u) > v103 )
            LOBYTE(v103) = (*((_BYTE *)a2 + 28) >> 4) & 7;
          *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0x8F | (16 * v103);
        }
        v32 = *(_QWORD *)(v14 + 96);
        v33 = *(_QWORD *)(v14 + 80);
        v14 = 0LL;
        v15 = v114;
        v16 = v112;
        v12 = v32 == v33 + 608;
        v9 = v116;
        v34 = v32 - 96;
        v8 = v121;
        if ( !v12 )
          v14 = v34;
        if ( !v14 )
        {
          v120 = v19;
          goto LABEL_40;
        }
      }
    }
  }
  v18 = *((_QWORD *)&v111 + 1);
  v17 = v110;
  v114 = v111;
  v112 = *((_QWORD *)&v110 + 1);
LABEL_40:
  v35 = *((_QWORD *)a1 + 99);
  v36 = HampLockTrackerId;
  v113 = v17;
  v37 = *(_QWORD *)(*(_QWORD *)(v35 + 88) + 88LL);
  v38 = *(_QWORD *)(v37 + 160);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v38 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v41 = HampLockTrackerId;
  *(_DWORD *)(v38 + 104) = CurrentThreadId;
  v42 = (*(_DWORD *)(v38 + 144) & 2) != 0;
  if ( v41 != -1 )
  {
    v43 = (__int64 *)TlsGetValue(v41);
    v44 = *v43;
    if ( (*v43 & 0x100) == 0 )
      __int2c();
    v12 = v43[9]-- == 1;
    if ( v12 )
      *v43 = v44 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *(_DWORD *)(v38 + 104) = 0;
  RtlReleaseSRWLockExclusive(v38 + 96);
  if ( v42 )
    goto LABEL_203;
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v46 |= 0x80uLL;
    ++v46[8];
  }
  RtlAcquireSRWLockShared(v37 + 168);
  v47 = *(_BYTE *)(v37 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v48 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v49 = *v48;
    if ( (*v48 & 0x80u) == 0LL )
      __int2c();
    v12 = v48[8]-- == 1;
    if ( v12 )
      *v48 = v49 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared(v37 + 168);
  if ( v47 )
  {
LABEL_203:
    v99 = 1;
    if ( *((int *)a2 + 6) > 1 )
      v99 = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v99;
  }
  v50 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v51 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v50) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v51 |= 0x400uLL;
    ++v51[11];
  }
  v52 = v119;
  RtlAcquireSRWLockShared(v119);
  v53 = *(_DWORD *)(v119 + 668) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v54 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v55 = *v54;
    if ( (*v54 & 0x400) == 0 )
      __int2c();
    v12 = v54[11]-- == 1;
    if ( v12 )
      *v54 = v55 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(v52);
  if ( v53 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v117, 0LL);
    v56 = v115;
    if ( (v117 & 0x100) != 0 )
    {
      v105 = *((_DWORD *)v115 + 304);
      if ( v105 <= *((_DWORD *)a2 + 6) )
        v105 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 6) = v105;
    }
    else
    {
      v106 = *((_DWORD *)a2 + 6);
      if ( v106 < 1 )
        v106 = 1;
      *((_DWORD *)a2 + 6) = v106;
    }
  }
  else
  {
    v56 = v115;
  }
  v57 = v120;
  if ( (v120 & 0xC0) == 0xC0 )
    v58 = 2;
  else
    v58 = (v120 & 0xE) >= 8 && (v120 & 0x30) >= 0x20;
  v59 = *((_DWORD *)a2 + 6);
  if ( v59 <= v58 )
  {
    if ( (v120 & 0xC0) == 0xC0 )
      v59 = 2;
    else
      v59 = (v120 & 0xE) >= 8 && (v120 & 0x30) >= 0x20;
  }
  *((_DWORD *)a2 + 6) = v59;
  *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (2 * (v57 >> 7))) & 2;
  if ( (v57 & 0x100) == 0
    || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v120, (union _RM_OPTIMIZATION_STATE *)&v115),
        (v120 & 0x10) != 0)
    || ((unsigned __int8)v115 & 0x10) != 0 )
  {
    v60 = 0;
  }
  else
  {
    v60 = 8;
  }
  v61 = v60 | *((_BYTE *)a2 + 28) & 0xF7;
  *((_BYTE *)a2 + 28) = v61;
  v62 = v61;
  if ( (v56[1220] & 8) != 0 && (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    v62 = v61 | 8;
    *((_BYTE *)a2 + 28) = v61 | 8;
  }
  if ( (v57 & 0x400) == 0 || (*((_QWORD *)a1 + 83) & 0x4000000000000LL) != 0 )
    v63 = 0;
  else
    v63 = 4;
  v64 = v116;
  *((_BYTE *)a2 + 28) = v63 | v62 & 0xFB;
  if ( v64 )
  {
    v87 = *(_QWORD *)(v64 + 464);
    v88 = *(_QWORD *)(v64 + 456);
    v89 = *(_QWORD *)(v64 + 448);
    v90 = *(_QWORD *)(v64 + 440);
    if ( v87 == -1LL || v18 == -1LL || (v18 += v87, v18 < v87) )
    {
      v18 = -1LL;
      *((_QWORD *)&v111 + 1) = -1LL;
    }
    else
    {
      *((_QWORD *)&v111 + 1) = v18;
    }
    if ( v88 == -1LL || v114 == -1 || (v91 = v88 + v114, v114 = v91, v91 < v88) )
    {
      v91 = -1LL;
      v114 = -1LL;
    }
    *(_QWORD *)&v111 = v91;
    if ( v89 == -1LL || v112 == -1 || (v92 = v89 + v112, v112 = v92, v92 < v89) )
    {
      v92 = -1LL;
      v112 = -1LL;
    }
    *((_QWORD *)&v110 + 1) = v92;
    if ( v90 == -1LL || v113 == -1 || (v65 = v90 + v113, v113 = v65, v65 < v90) )
    {
      v65 = -1LL;
      v113 = -1LL;
      *(_QWORD *)&v110 = -1LL;
    }
    else
    {
      *(_QWORD *)&v110 = v65;
    }
  }
  else
  {
    v65 = v113;
  }
  if ( v121 )
  {
    v66 = v114;
    v67 = v112;
  }
  else
  {
    v84 = *(_OWORD *)((char *)a1 + 904);
    v110 = *(_OWORD *)((char *)a1 + 888);
    v67 = *((_QWORD *)&v110 + 1);
    v65 = v110;
    v111 = v84;
    v18 = *((_QWORD *)&v84 + 1);
    v66 = v84;
    v112 = *((_QWORD *)&v110 + 1);
    v113 = v110;
  }
  if ( (*v118 & 0x20) != 0 )
  {
    v107 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
    v68 = -1LL;
    if ( v107 )
    {
      RmpCommitThresholdsAddValue((struct _RM_COMMIT_THRESHOLDS *)&v110, 0xFFFFFFFFFFFFFFFFuLL);
      v67 = *((_QWORD *)&v110 + 1);
      v65 = v110;
      v64 = v116;
      v18 = *((_QWORD *)&v111 + 1);
      v66 = v111;
    }
    else
    {
      v65 = v113;
      v67 = v112;
      v64 = v116;
    }
  }
  else
  {
    v68 = -1LL;
  }
  v69 = *((_QWORD *)a1 + 120);
  if ( v66 < v69 && v66 )
  {
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v110, v69, (struct _RM_COMMIT_THRESHOLDS *)&v110);
    v67 = *((_QWORD *)&v110 + 1);
    v68 = -1LL;
    v65 = v110;
    v64 = v116;
    v18 = *((_QWORD *)&v111 + 1);
    v66 = v111;
  }
  v70 = *((_QWORD *)a1 + 76);
  if ( (struct _RM_HAM_ACTIVITY_HOST *)v70 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608)
    && v70 != 96
    && (*(_DWORD *)(v70 + 16) & 0x80000) != 0 )
  {
    v108 = *((_QWORD *)HampHostGetFirstActivity(a1) + 9);
    v109 = *(_OWORD *)(v108 + 88);
    v110 = *(_OWORD *)(v108 + 72);
    v67 = *((_QWORD *)&v110 + 1);
    v65 = v110;
    v111 = v109;
    v18 = *((_QWORD *)&v109 + 1);
    v66 = v109;
  }
  v71 = *((_QWORD *)a1 + 121);
  if ( v18 == -1LL )
  {
    v72 = v68;
  }
  else if ( v18 < v71 )
  {
    v72 = 0LL;
  }
  else
  {
    v72 = v18 - v71;
  }
  if ( v66 == -1LL )
  {
    v73 = v68;
  }
  else if ( v66 < v71 )
  {
    v73 = 0LL;
  }
  else
  {
    v73 = v66 - v71;
  }
  if ( v67 == -1LL )
  {
    v74 = v68;
  }
  else if ( v67 < v71 )
  {
    v74 = 0LL;
  }
  else
  {
    v74 = v67 - v71;
  }
  if ( v65 == -1LL )
  {
    v75 = v68;
  }
  else if ( v65 < v71 )
  {
    v75 = 0LL;
  }
  else
  {
    v75 = v65 - v71;
  }
  v76 = *((_QWORD *)a1 + 122);
  if ( v72 == -1LL )
  {
    v77 = v68;
    *((_QWORD *)&v111 + 1) = v68;
  }
  else
  {
    if ( v72 < v76 )
      v77 = 0LL;
    else
      v77 = v72 - v76;
    *((_QWORD *)&v111 + 1) = v77;
  }
  if ( v73 == -1LL )
  {
    *(_QWORD *)&v111 = v68;
  }
  else if ( v73 < v76 )
  {
    *(_QWORD *)&v111 = 0LL;
  }
  else
  {
    *(_QWORD *)&v111 = v73 - v76;
  }
  if ( v74 == -1LL )
  {
    *((_QWORD *)&v110 + 1) = v68;
  }
  else if ( v74 < v76 )
  {
    *((_QWORD *)&v110 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v110 + 1) = v74 - v76;
  }
  if ( v75 == -1LL )
  {
    *(_QWORD *)&v110 = v68;
  }
  else if ( v75 < v76 )
  {
    *(_QWORD *)&v110 = 0LL;
  }
  else
  {
    *(_QWORD *)&v110 = v75 - v76;
  }
  v78 = v111;
  v79 = *((_QWORD *)a1 + 108);
  v80 = v110;
  v81 = v111;
  if ( v77 > v79 )
  {
    v79 = *((_QWORD *)&v111 + 1);
  }
  else
  {
    *((_QWORD *)&v111 + 1) = *((_QWORD *)a1 + 108);
    v81 = v111;
  }
  if ( (unsigned __int64)v81 <= *((_QWORD *)a1 + 109) )
  {
    *(_QWORD *)&v111 = *((_QWORD *)a1 + 109);
    v81 = v111;
  }
  v82 = v122;
  *((_QWORD *)a2 + 2) = v79;
  if ( v82 )
  {
    *(_OWORD *)v82 = v80;
    *((_OWORD *)v82 + 1) = v78;
  }
  v83 = v123;
  if ( v123 )
  {
    *(_OWORD *)v123 = v80;
    *((_OWORD *)v83 + 1) = v81;
  }
  if ( a5 )
    *a5 = (struct _HAM_ACTIVITY *)v64;
}
