/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660
 * Callers:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180034C00 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x1800759D8 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000C2B0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18001B1E0 (-HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HOST_GROUP@@_K@Z @ 0x180020D64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HOST_GROUP@@_K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180022240 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180037424 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18003AE0C (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x18003DA18 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800516EA (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800774C8 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007BC78 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, int *a3, __int64 *a4)
{
  _OWORD *Heap; // rax
  void *v7; // rsi
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  HKEY v11; // rbp
  signed int v12; // edi
  int v13; // eax
  const WCHAR *v14; // rdx
  LSTATUS v15; // eax
  int *v16; // r14
  int *v17; // r12
  int v18; // edi
  struct _RM_HAM_ACTIVITY_HOST *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rdi
  __int64 *Value; // rax
  __int64 v23; // rdx
  bool v24; // zf
  int CanBeStartedInSystemState; // eax
  DWORD v26; // ebp
  int CanBeStartedInHostState; // r15d
  __int64 v28; // r14
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  _DWORD *v31; // r14
  unsigned int v32; // eax
  __int64 v33; // r13
  __int64 v34; // rbp
  int *v35; // rdi
  unsigned __int64 v36; // r12
  __int64 v37; // rdi
  int v38; // r12d
  __int64 *v39; // rax
  __int64 v40; // rdx
  DWORD v41; // esi
  __int64 v42; // rbp
  _QWORD *v43; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v44; // rcx
  char v45; // al
  BOOL v46; // ebp
  __int64 v47; // rcx
  struct _HAM_DEPENDENCY_GROUP *v48; // r13
  struct _HAM_DEPENDENCY_GROUP *v49; // rdi
  struct _HAM_HOST_DEPENDENCY *v50; // rsi
  __int64 v51; // rdi
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbp
  DWORD v55; // esi
  __int64 v56; // rbx
  _QWORD *v57; // rdi
  unsigned __int16 v58; // r11
  __int16 v59; // di
  __int64 v60; // r10
  __int64 v61; // r10
  __int64 v62; // r13
  __int64 v63; // r12
  char v64; // dl
  unsigned __int64 v65; // rcx
  __int16 v66; // ax
  __int16 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int16 v73; // r11
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // eax
  DWORD v77; // edi
  _QWORD *v78; // rbx
  __int64 *v79; // rax
  __int64 v80; // rdx
  __int64 *v81; // rax
  __int64 v82; // rcx
  struct _HAM_ACTIVITY *v84; // rdx
  unsigned __int64 v85; // rcx
  int v86; // r12d
  char v87[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v88; // [rsp+48h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-68h] BYREF
  __int64 v90; // [rsp+58h] [rbp-60h]
  BYTE Data[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v92; // [rsp+68h] [rbp-50h] BYREF
  _OWORD *v93; // [rsp+70h] [rbp-48h]
  DWORD cbData; // [rsp+C8h] [rbp+10h] BYREF
  int *v95; // [rsp+D0h] [rbp+18h]
  __int64 *v96; // [rsp+D8h] [rbp+20h]

  v96 = a4;
  v95 = a3;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    v18 = -1073741776;
    CanBeStartedInHostState = 16;
    goto LABEL_118;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v93 = Heap;
  v7 = Heap;
  if ( !Heap )
  {
    v18 = -1073741801;
    CanBeStartedInHostState = 16;
    goto LABEL_118;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  Heap[2] = 0LL;
  RtlQueryPerformanceCounter(Heap);
  v8 = *(_QWORD *)(a1 + 80);
  v90 = v8;
  hKey = 0LL;
  v9 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)v8, 0, &hKey);
  v11 = hKey;
  v12 = v9;
  if ( v9 >= 0 )
  {
    v13 = *(_DWORD *)(v8 + 560);
    switch ( v13 )
    {
      case 4:
        v14 = L"Pure";
        break;
      case 2:
        v14 = L"Mixed";
        break;
      case 8:
        v14 = L"System";
        break;
      default:
        __int2c();
        v14 = 0LL;
        break;
    }
    cbData = 8;
    v15 = RegQueryValueExW(hKey, v14, 0LL, 0LL, Data, &cbData);
    v12 = v15;
    if ( v15 > 0 )
      v12 = (unsigned __int16)v15 | 0xC0070000;
    if ( v12 >= 0 )
    {
      if ( cbData == 8 )
      {
        v16 = *(int **)Data;
        v12 = 0;
        goto LABEL_11;
      }
      v12 = -1073739509;
    }
  }
  v16 = v95;
LABEL_11:
  if ( v11 )
    RegCloseKey(v11);
  v17 = 0LL;
  LOBYTE(v10) = 2;
  if ( v12 >= 0 )
    v17 = v16;
  v18 = HampActBeginStateChange(a1, v10);
  if ( v18 < 0 )
  {
    CanBeStartedInHostState = 16;
    goto LABEL_166;
  }
  v19 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 563) = 0;
  HampHostUpdateActivityState(v19);
  if ( *(_QWORD *)(a1 + 512) && a2 == 1 )
  {
    v18 = -1073741776;
    CanBeStartedInHostState = 16;
LABEL_159:
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), v20);
    goto LABEL_165;
  }
  HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v88);
  while ( 1 )
  {
    v21 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      Value = (__int64 *)TlsGetValue(HampLockTrackerId);
      v23 = *Value;
      if ( (*Value & 2) == 0 )
        __int2c();
      v24 = Value[2]-- == 1;
      if ( v24 )
        *Value = v23 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v21 + 8) = 0;
    RtlReleaseSRWLockExclusive(v21);
    CanBeStartedInSystemState = HampActCanBeStartedInSystemState(a1, &v88);
    v26 = HampLockTrackerId;
    CanBeStartedInHostState = CanBeStartedInSystemState;
    v28 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v29 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v29 |= 2uLL;
      ++v29[2];
    }
    RtlAcquireSRWLockExclusive(v28);
    *(_DWORD *)(v28 + 8) = GetCurrentThreadId();
    HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v92);
    if ( v88 == v92 )
      break;
    v88 = v92;
  }
  v7 = v93;
  if ( CanBeStartedInHostState || (CanBeStartedInHostState = HampActCanBeStartedInHostState(a1)) != 0 )
  {
    if ( CanBeStartedInHostState == 15 )
    {
      v18 = -1058275327;
      goto LABEL_159;
    }
    if ( CanBeStartedInHostState >= 1 && CanBeStartedInHostState <= 8 )
    {
      v18 = -1058275328;
      goto LABEL_159;
    }
    if ( (unsigned int)(CanBeStartedInHostState - 9) <= 5 )
    {
      v18 = -1058275324;
      goto LABEL_159;
    }
  }
  else
  {
    CanBeStartedInHostState = 0;
  }
  v30 = *(_QWORD *)(a1 + 520);
  v31 = (_DWORD *)(a1 + 552);
  v32 = *(_DWORD *)(a1 + 552) | 4;
  *(_QWORD *)(a1 + 528) = v7;
  *(_DWORD *)(a1 + 552) = v32;
  v7 = 0LL;
  if ( v30 )
    *(_QWORD *)(a1 + 512) = v30;
  v24 = a2 == 1;
  v33 = v90;
  if ( v24 )
    HampHostQueueTerminateEx(v90, 1LL, 5376LL, *(_QWORD *)(a1 + 64), (((v32 >> 1) & 1) == 0) | 2, 0, 0LL, v87);
  v34 = *(_QWORD *)(a1 + 80);
  v35 = *(int **)(a1 + 400);
  if ( v17 && (unsigned __int64)v17 <= *(_QWORD *)(a1 + 456) && v35 && (*(_BYTE *)(a1 + 408) & 1) != 0 )
    v35 = v17;
  v36 = 0LL;
  if ( (*(_BYTE *)(a1 + 480) & 0x20) != 0 )
  {
    v84 = *(struct _HAM_ACTIVITY **)(v34 + 1016);
    if ( (*(_QWORD *)(v34 + 664) & 0x2000000000000LL) != 0 )
      v36 = *(_QWORD *)(v34 + 1128);
    if ( v84
      && v84 != (struct _HAM_ACTIVITY *)a1
      && (int)HampActCompareForMaxCommit((struct _HAM_ACTIVITY *)a1, v84, 1u) <= 0 )
    {
      v35 = 0LL;
    }
  }
  if ( v35 == (int *)-1LL )
  {
    v37 = -1LL;
    v38 = 0;
  }
  else if ( (unsigned __int64)v35 < v36 )
  {
    v38 = 0;
    v37 = 0LL;
  }
  else
  {
    v37 = (__int64)v35 - v36;
    v38 = 0;
  }
  if ( HampLockTrackerId != -1 )
  {
    v39 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v40 = *v39;
    if ( (*v39 & 2) == 0 )
      __int2c();
    v24 = v39[2]-- == 1;
    if ( v24 )
      *v39 = v40 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v34 + 8) = 0;
  RtlReleaseSRWLockExclusive(v34);
  if ( v96 )
    *v96 = v37;
  v18 = HampRmContextAcquireResourceSet(*(_QWORD *)(a1 + 88), *(unsigned __int8 *)(v33 + 592), v37);
  if ( v18 < 0 )
  {
    CanBeStartedInHostState = 16;
LABEL_165:
    HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 1);
    if ( !v7 )
      goto LABEL_118;
LABEL_166:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    goto LABEL_118;
  }
  v41 = HampLockTrackerId;
  v42 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v43 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v43 |= 2uLL;
    ++v43[2];
  }
  RtlAcquireSRWLockExclusive(v42);
  *(_DWORD *)(v42 + 8) = GetCurrentThreadId();
  v44 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *v31 &= ~1u;
  HampHostUpdateActivityState(v44);
  v45 = *(_BYTE *)(a1 + 562);
  if ( (v45 == 2 || v45 == 3) && (*v31 & 0x180) != 0 )
  {
    HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1);
    v45 = *(_BYTE *)(a1 + 562);
  }
  v46 = (v45 == 1 || v45 == 4) && ((*(_DWORD *)(a1 + 120) & 0x20C) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v47 = *(_QWORD *)(a1 + 80);
  v48 = 0LL;
  v49 = *(struct _HAM_DEPENDENCY_GROUP **)(v47 + 704);
  if ( v49 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v86 = *v31 >> 1;
    *v31 &= ~2u;
    v38 = v86 & 1;
    if ( v38 )
      v48 = v49;
  }
  else
  {
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v47, 0);
  }
  if ( *(_BYTE *)(a1 + 562) == 4 )
  {
    v50 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    v50 = 0LL;
  }
  v51 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v52 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v53 = *v52;
    if ( (*v52 & 2) == 0 )
      __int2c();
    v24 = v52[2]-- == 1;
    if ( v24 )
      *v52 = v53 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v51 + 8) = 0;
  RtlReleaseSRWLockExclusive(v51);
  RtlWakeAddressAll(a1 + 552);
  if ( v50 )
    HampHostDepDestroy(v50);
  if ( v46 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v38 )
    HampDepGroupRunStateChangeWorker(v48);
  v54 = *(_QWORD *)(a1 + 80);
  v55 = HampLockTrackerId;
  v56 = v54 - 64;
  if ( HampLockTrackerId != -1 )
  {
    v57 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v55) )
      __int2c();
    *v57 |= 1uLL;
    ++v57[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v58 = 102;
  v59 = *(_WORD *)(v56 + 1178);
  v60 = *(_QWORD *)(v56 + 1152);
  if ( v60 != v56 + 1152 )
  {
    v61 = v60 - 1296;
    if ( v61 )
    {
      v62 = 0x8800001000LL;
      v63 = 0x11000002000LL;
      while ( 1 )
      {
        if ( *(_DWORD *)(v61 + 1280) != 2 && (*(_BYTE *)(v61 + 1332) & 4) == 0 )
          goto LABEL_91;
        v64 = *(_BYTE *)(v61 + 1378);
        if ( (v64 & 8) != 0 )
          break;
        v65 = *(int *)(v61 + 1336);
        if ( (unsigned int)v65 <= 0x27 )
        {
          if ( _bittest64(&v62, v65) )
            break;
        }
        v66 = *(_WORD *)(v61 + 1376);
        if ( (v66 & 0x10) != 0 || (unsigned int)v65 <= 0x28 && _bittest64(&v63, v65) )
        {
          v67 = 4;
          goto LABEL_138;
        }
        v67 = 1;
LABEL_89:
        v67 |= 8u;
LABEL_90:
        v68 = *(_DWORD *)(v61 + 1332) >> 3;
        LOWORD(v68) = v67 | (8 * (v66 & 8 | (2 * (v66 & 3 | (8 * (((*(_DWORD *)(v61 + 1332) & 8) != 0) | 2))))));
        v58 = RmpPolicyDigestMerge(v58, v68);
LABEL_91:
        v69 = *(_QWORD *)(v61 + 1296);
        v70 = 3 * (*(int *)(v61 + 1328) + 47LL);
        v71 = *(_QWORD *)(v61 + 1320);
        v61 = 0LL;
        if ( v69 != v71 + 8 * v70 )
          v61 = v69 - 1296;
        if ( !v61 )
        {
          v56 = v54 - 64;
          goto LABEL_95;
        }
      }
      v66 = *(_WORD *)(v61 + 1376);
      v67 = 2;
LABEL_138:
      if ( (v66 & 0x10) != 0 || (v85 = *(int *)(v61 + 1336), (unsigned int)v85 <= 0x28) && _bittest64(&v63, v85) )
      {
        if ( (v64 & 0x40) == 0 )
          goto LABEL_90;
      }
      goto LABEL_89;
    }
  }
LABEL_95:
  *(_WORD *)(v56 + 1178) = v58;
  v72 = *(_QWORD *)(v56 + 56);
  v73 = v58 & 0x80;
  if ( (v59 & 0x80) != 0 )
  {
    if ( !v73 )
      --*(_DWORD *)(v72 + 212);
  }
  else if ( v73 )
  {
    ++*(_DWORD *)(v72 + 212);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v56, 2u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v56 + 1472));
  if ( ((*(_DWORD *)(*(_QWORD *)(v56 + 48) + 508LL) & 4) != 0
     || (*(_BYTE *)(v56 + 1176) & 4) != 0 && (*(_BYTE *)(v56 + 1178) & 4) != 0)
    && ((*(_BYTE *)(v56 + 852) & 1) == 0
     || HampHostCanKillForResourcePressure(
          (struct _RM_HAM_ACTIVITY_HOST *)v54,
          (*(_DWORD *)(*(_QWORD *)(v56 + 48) + 508LL) & 4) == 0))
    && (*(_BYTE *)(v56 + 1178) & 0x30) != 0 )
  {
    SetEvent(*(HANDLE *)(*(_QWORD *)(v56 + 56) + 88LL));
  }
  v74 = *(_QWORD *)(v56 + 48);
  *(_QWORD *)(v56 + 1224) = 0LL;
  v75 = *(_QWORD *)(v74 + 3232);
  v76 = *(_DWORD *)(v75 + 160);
  if ( (v76 & 3) == 0 )
  {
    *(_DWORD *)(v75 + 160) = v76 | 1;
    TpPostWork(*(_QWORD *)(v75 + 144));
  }
  v77 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v78 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v77) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v78 |= 2uLL;
    ++v78[2];
  }
  RtlAcquireSRWLockExclusive(v54);
  *(_DWORD *)(v54 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v54, 0);
  if ( HampLockTrackerId != -1 )
  {
    v79 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v80 = *v79;
    if ( (*v79 & 2) == 0 )
      __int2c();
    v24 = v79[2]-- == 1;
    if ( v24 )
      *v79 = v80 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v54 + 8) = 0;
  RtlReleaseSRWLockExclusive(v54);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v81 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v82 = *v81;
    if ( (*v81 & 1) == 0 )
      __int2c();
    v24 = v81[1]-- == 1;
    if ( v24 )
      *v81 = v82 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v18 = 0;
LABEL_118:
  *v95 = CanBeStartedInHostState;
  return (unsigned int)v18;
}
