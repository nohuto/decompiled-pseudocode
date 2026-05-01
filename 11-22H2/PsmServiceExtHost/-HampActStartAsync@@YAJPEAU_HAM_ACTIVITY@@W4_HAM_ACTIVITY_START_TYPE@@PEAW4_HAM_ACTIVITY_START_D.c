/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260
 * Callers:
 *     HamRpcSrvStartActivityAsync @ 0x180027DB0 (HamRpcSrvStartActivityAsync.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180039400 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007CE1C (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180013A04 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180025F50 (-HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z.c)
 *     ?HampActIsBoundToGeneration@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180026CC0 (-HampActIsBoundToGeneration@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180026CD4 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180026D70 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180026E30 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180039BFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D4B0 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D658 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180049A28 (__report_rangecheckfailure.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D6CC (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampRmContextStartActivityAsync@@YAJPEAX_K@Z @ 0x18004EBA0 (-HampRmContextStartActivityAsync@@YAJPEAX_K@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800502A4 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x18008E9DC (-HampSystemJobIoAttributionStop@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, unsigned int a2, int *a3, HKEY *a4)
{
  int CanBeStartedInHostState; // ebx
  NTSTATUS started; // esi
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rdx
  HKEY v11; // r14
  int v12; // ebx
  WCHAR *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  WCHAR *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // r9
  WCHAR v20; // r8
  WCHAR *v21; // rax
  LSTATUS v22; // eax
  HKEY v23; // rsi
  LSTATUS v24; // eax
  unsigned int v25; // edx
  LSTATUS v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  const WCHAR *v29; // rdx
  LSTATUS v30; // eax
  HKEY v31; // rsi
  struct _PEB *v32; // rcx
  HKEY v33; // rax
  _OWORD *Heap; // rax
  __int64 v35; // rdx
  void *v36; // r12
  struct _RM_HAM_ACTIVITY_HOST *v37; // rcx
  struct _HAM_ACTIVITY *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 *Value; // rax
  __int64 v42; // rdx
  bool v43; // zf
  int CanBeStartedInSystemState; // eax
  DWORD v45; // r14d
  __int64 v46; // r15
  _QWORD *v47; // rsi
  _DWORD *v48; // r13
  __int64 v49; // r15
  HKEY v50; // r14
  unsigned __int64 v51; // rsi
  __int64 v52; // rcx
  struct _HAM_ACTIVITY *v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rdx
  DWORD v56; // r15d
  __int64 v57; // r13
  _QWORD *v58; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v60; // ecx
  __int64 v61; // rsi
  __int64 *v62; // rax
  __int64 v63; // rdx
  int v64; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v65; // rcx
  int v66; // r8d
  int v67; // r9d
  DWORD v68; // r14d
  __int64 v69; // r15
  _QWORD *v70; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v71; // rcx
  char v72; // al
  struct _HAM_HOST_DEPENDENCY *v73; // r15
  int v74; // r12d
  __int64 v75; // rcx
  struct _HAM_DEPENDENCY_GROUP *v76; // r14
  int v77; // esi
  __int64 v78; // r13
  __int64 *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  DWORD v82; // r15d
  struct _RM_ACTIVITY_HOST *v83; // r14
  _QWORD *v84; // rsi
  DWORD v85; // r14d
  _QWORD *v86; // rsi
  __int64 *v87; // rax
  __int64 v88; // rdx
  __int64 *v89; // rax
  __int64 v90; // rcx
  unsigned int v92; // [rsp+50h] [rbp-B0h] BYREF
  int v93; // [rsp+54h] [rbp-ACh] BYREF
  HKEY v94; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v95; // [rsp+60h] [rbp-A0h] BYREF
  int v96; // [rsp+68h] [rbp-98h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-94h] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-90h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  HKEY *v100; // [rsp+80h] [rbp-80h] BYREF
  __int64 v101; // [rsp+88h] [rbp-78h]
  int *v102; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  _OWORD JobInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+F0h] [rbp-10h]
  WCHAR v106[136]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR SubKey[256]; // [rsp+210h] [rbp+110h] BYREF

  v100 = a4;
  v102 = a3;
  v92 = a2;
  v93 = 0;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    CanBeStartedInHostState = 16;
    started = -1073741776;
    v8 = 4096;
LABEL_144:
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
    {
      v100 = *(HKEY **)(a1 + 40);
      v93 = v8;
      v92 = started;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800DB218,
        (unsigned int)&unk_1800C1FA5,
        v66,
        v67,
        (__int64)&v92,
        (__int64)&v100,
        (__int64)&v93);
    }
    goto LABEL_199;
  }
  v9 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  v101 = v9;
  v94 = 0LL;
  UnicodeString.Buffer = SubKey;
  v95 = 0LL;
  v10 = 552LL;
  hKey = 0LL;
  if ( v9 )
    v10 = v9 + 488;
  v11 = 0LL;
  v12 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v10, 0);
  if ( v12 < 0 )
    goto LABEL_24;
  v13 = SubKey;
  v14 = 254LL;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  v12 = -1073741811;
  v15 = 254 - v14;
  if ( v14 )
  {
    v16 = &SubKey[v15];
    v17 = 254 - v15;
    if ( 254 != v15 )
    {
      v18 = 66LL;
      v19 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v16);
      do
      {
        if ( !v18 )
          break;
        v20 = *(WCHAR *)((char *)v16 + (_QWORD)v19);
        if ( !v20 )
          break;
        *v16 = v20;
        --v18;
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    v21 = v16 - 1;
    v12 = -2147483643;
    if ( v17 )
    {
      v21 = v16;
      v12 = 0;
    }
    *v21 = 0;
  }
  if ( v12 < 0 )
    goto LABEL_24;
  v22 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v12 = v22;
  if ( v22 > 0 )
    v12 = (unsigned __int16)v22 | 0xC0070000;
  if ( v12 < 0 )
  {
LABEL_24:
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    v23 = hKey;
    hKey = 0LL;
    v24 = RegOpenKeyExW(v23, L"CommitHistory", 0, 0x20019u, &v94);
    v12 = v24;
    if ( v24 > 0 )
      v12 = (unsigned __int16)v24 | 0xC0070000;
    if ( v12 >= 0 )
    {
      v96 = 131;
      PsmGetAumidFromKey(v9 + 24, &v96, v106);
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 792) + 616LL) & 0x10000) != 0 )
      {
        v25 = v96;
        v106[v96 - 1] = 35;
        if ( 2 * (unsigned __int64)v25 >= 0x106 )
          _report_rangecheckfailure();
        v106[v25] = 0;
      }
      v26 = RegOpenKeyExW(v94, v106, 0, 0x20019u, &v95);
      v12 = v26;
      if ( v26 > 0 )
        v12 = (unsigned __int16)v26 | 0xC0070000;
      if ( v12 >= 0 )
      {
        v11 = v95;
        v12 = 0;
        v95 = 0LL;
      }
    }
    if ( v23 )
      RegCloseKey(v23);
  }
  if ( v94 )
    RegCloseKey(v94);
  if ( v95 )
    RegCloseKey(v95);
  if ( v12 < 0 )
    goto LABEL_59;
  v27 = 624LL;
  if ( v9 )
    v27 = v9 + 560;
  v28 = *(_DWORD *)v27;
  if ( *(_DWORD *)v27 == 2 )
  {
    v29 = L"Mixed";
  }
  else if ( v28 == 4 )
  {
    v29 = L"Pure";
  }
  else if ( v28 == 8 )
  {
    v29 = L"System";
  }
  else
  {
    __int2c();
    v29 = 0LL;
  }
  cbData = 8;
  v30 = RegQueryValueExW(v11, v29, 0LL, 0LL, Data, &cbData);
  v12 = v30;
  if ( v30 > 0 )
    v12 = (unsigned __int16)v30 | 0xC0070000;
  if ( v12 < 0 )
  {
LABEL_59:
    v31 = *(HKEY *)Data;
  }
  else
  {
    v31 = *(HKEY *)Data;
    if ( cbData == 8 )
      v12 = 0;
    else
      v12 = -1073739509;
  }
  if ( v11 )
    RegCloseKey(v11);
  v32 = NtCurrentPeb();
  v33 = 0LL;
  if ( v12 >= 0 )
    v33 = v31;
  v95 = v33;
  Heap = RtlAllocateHeap(v32->ProcessHeap, 0, 0x30uLL);
  v36 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    RtlQueryPerformanceCounter(Heap);
  }
  LOBYTE(v35) = 2;
  started = HampActBeginStateChange(a1, v35);
  if ( started < 0 )
  {
    CanBeStartedInHostState = 16;
    v8 = 0x2000;
    goto LABEL_142;
  }
  v37 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 563) = 0;
  HampHostUpdateActivityState(v37);
  *(_DWORD *)(a1 + 552) |= 4u;
  if ( HampActIsBoundToGeneration((struct _HAM_ACTIVITY *)a1) && a2 == 1 )
  {
    CanBeStartedInHostState = 16;
    started = -1073741776;
    v8 = 12288;
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_141:
    HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 1);
LABEL_142:
    if ( v36 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
    goto LABEL_144;
  }
  if ( *(_QWORD *)(a1 + 520) && !HampActIsBoundToGeneration(v38) )
    *(_QWORD *)(a1 + 512) = v39;
  if ( !v36 )
  {
    CanBeStartedInHostState = 16;
    started = -1073741801;
    v8 = 0x4000;
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
    goto LABEL_141;
  }
  HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v94);
  while ( 1 )
  {
    v40 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      Value = (__int64 *)TlsGetValue(HampLockTrackerId);
      v42 = *Value;
      if ( (*Value & 2) == 0 )
        __int2c();
      v43 = Value[2]-- == 1;
      if ( v43 )
        *Value = v42 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v40 + 8) = 0;
    RtlReleaseSRWLockExclusive(v40);
    CanBeStartedInSystemState = HampActCanBeStartedInSystemState(a1, &v94);
    v45 = HampLockTrackerId;
    CanBeStartedInHostState = CanBeStartedInSystemState;
    v46 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v47 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v47 |= 2uLL;
      ++v47[2];
    }
    RtlAcquireSRWLockExclusive(v46);
    *(_DWORD *)(v46 + 8) = GetCurrentThreadId();
    HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)Data);
    if ( v94 == *(HKEY *)Data )
      break;
    v94 = *(HKEY *)Data;
  }
  v48 = (_DWORD *)(a1 + 552);
  if ( CanBeStartedInHostState || (CanBeStartedInHostState = HampActCanBeStartedInHostState(a1)) != 0 )
  {
    if ( CanBeStartedInHostState == 15 )
    {
      started = -1058275327;
      v8 = 20480;
      HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
      goto LABEL_141;
    }
    if ( (unsigned int)(CanBeStartedInHostState - 1) <= 7 )
    {
      started = -1058275328;
      v8 = 24576;
      HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
      goto LABEL_141;
    }
    if ( (unsigned int)(CanBeStartedInHostState - 9) <= 5 )
    {
      started = -1058275324;
      v8 = 28672;
      HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
      goto LABEL_141;
    }
  }
  else
  {
    CanBeStartedInHostState = 0;
  }
  v43 = v92 == 1;
  *(_QWORD *)(a1 + 528) = v36;
  v36 = 0LL;
  if ( v43 )
    HampHostQueueTerminateEx(
      v101,
      1u,
      0x1500u,
      *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64),
      ((*v48 & 2) == 0) | 2,
      0,
      0LL,
      &v92);
  v49 = *(_QWORD *)(a1 + 80);
  v50 = *(HKEY *)(a1 + 400);
  if ( v95 && (unsigned __int64)v95 <= *(_QWORD *)(a1 + 456) && v50 && (*(_BYTE *)(a1 + 408) & 1) != 0 )
    v50 = v95;
  v51 = 0LL;
  if ( (*(_BYTE *)(a1 + 480) & 0x20) != 0 )
  {
    v52 = 1200LL;
    if ( v49 )
      v52 = v49 + 1136;
    v53 = *(struct _HAM_ACTIVITY **)(v49 + 1016);
    if ( (*(_QWORD *)(v49 + 664) & 0x2000000000000LL) != 0 )
      v51 = *(_QWORD *)v52;
    if ( v53
      && v53 != (struct _HAM_ACTIVITY *)a1
      && (int)HampActCompareForMaxCommit((struct _HAM_ACTIVITY *)a1, v53, 1) <= 0 )
    {
      v50 = 0LL;
    }
  }
  if ( v50 != HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
  {
    if ( (unsigned __int64)v50 < v51 )
      v50 = 0LL;
    else
      v50 = (HKEY)((char *)v50 - v51);
  }
  if ( HampLockTrackerId != -1 )
  {
    v54 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v55 = *v54;
    if ( (*v54 & 2) == 0 )
      __int2c();
    v43 = v54[2]-- == 1;
    if ( v43 )
      *v54 = v55 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v49 + 8) = 0;
  RtlReleaseSRWLockExclusive(v49);
  if ( v100 )
    *v100 = v50;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) != 0 )
  {
    v105 = 0LL;
    memset(JobInformation, 0, sizeof(JobInformation));
    LODWORD(JobInformation[0]) = 1;
    started = NtSetInformationJobObject(*(HANDLE *)(v101 + 576), JobObjectJobSetInformation|0x20, JobInformation, 0x48u);
    if ( started < 0 )
    {
      CanBeStartedInHostState = 16;
      v8 = 0x8000;
      goto LABEL_141;
    }
    v56 = HampLockTrackerId;
    v57 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v58 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v56) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v58 |= 2uLL;
      ++v58[2];
    }
    RtlAcquireSRWLockExclusive(v57);
    CurrentThreadId = GetCurrentThreadId();
    v60 = HampLockTrackerId;
    *(_DWORD *)(v57 + 8) = CurrentThreadId;
    v48 = (_DWORD *)(a1 + 552);
    *(_DWORD *)(a1 + 552) |= 0x80u;
    v61 = *(_QWORD *)(a1 + 80);
    if ( v60 != -1 )
    {
      v62 = (__int64 *)TlsGetValue(v60);
      v63 = *v62;
      if ( (*v62 & 2) == 0 )
        __int2c();
      v43 = v62[2]-- == 1;
      if ( v43 )
        *v62 = v63 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v61 + 8) = 0;
    RtlReleaseSRWLockExclusive(v61);
    v64 = 1;
  }
  else
  {
    v64 = v93;
  }
  started = HampRmContextStartActivityAsync(*(void **)(a1 + 88), (unsigned __int64)v50);
  if ( started < 0 )
  {
    CanBeStartedInHostState = 16;
    v8 = 36864;
    if ( v64 )
    {
      HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), 0);
      v65 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
      *v48 &= ~0x80u;
      HampHostReleaseLockExclusiveEx(v65);
      HampSystemJobIoAttributionStop(*(HANDLE *)(*(_QWORD *)(a1 + 80) + 576LL));
    }
    goto LABEL_141;
  }
  v68 = HampLockTrackerId;
  v69 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v70 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v68) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v70 |= 2uLL;
    ++v70[2];
  }
  RtlAcquireSRWLockExclusive(v69);
  *(_DWORD *)(v69 + 8) = GetCurrentThreadId();
  v71 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *v48 &= ~1u;
  HampHostUpdateActivityState(v71);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 562) - 2) <= 1u && (*v48 & 0x300) != 0 )
    HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1, 0);
  v72 = *(_BYTE *)(a1 + 562);
  if ( (v72 == 1 || v72 == 4) && ((*(_DWORD *)(a1 + 120) & 0x20C) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0) )
  {
    v74 = 1;
    v73 = 0LL;
  }
  else
  {
    v73 = 0LL;
    v74 = 0;
  }
  v75 = *(_QWORD *)(a1 + 80);
  v76 = *(struct _HAM_DEPENDENCY_GROUP **)(v75 + 704);
  if ( v76 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v77 = (*v48 >> 1) & 1;
    *v48 &= ~2u;
  }
  else
  {
    v77 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v75, 0);
  }
  if ( !v77 )
    v76 = 0LL;
  if ( *(_BYTE *)(a1 + 562) == 4 )
  {
    v73 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v78 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v79 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v80 = *v79;
    if ( (*v79 & 2) == 0 )
      __int2c();
    v43 = v79[2]-- == 1;
    if ( v43 )
      *v79 = v80 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v78 + 8) = 0;
  RtlReleaseSRWLockExclusive(v78);
  RtlWakeAddressAll(a1 + 552);
  if ( v73 )
    HampHostDepDestroy(v73);
  if ( v74 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v77 )
    HampDepGroupRunStateChangeWorker(v76);
  v81 = *(_QWORD *)(a1 + 80);
  v82 = HampLockTrackerId;
  v83 = 0LL;
  if ( v81 )
    v83 = (struct _RM_ACTIVITY_HOST *)(v81 - 64);
  if ( HampLockTrackerId != -1 )
  {
    v84 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v82) )
      __int2c();
    *v84 |= 1uLL;
    ++v84[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC590 = GetCurrentThreadId();
  RmpActivityHostResourceSetsChanged(v83);
  v85 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v86 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v85) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v86 |= 2uLL;
    ++v86[2];
  }
  RtlAcquireSRWLockExclusive(v81);
  *(_DWORD *)(v81 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v81, 0);
  if ( HampLockTrackerId != -1 )
  {
    v87 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v88 = *v87;
    if ( (*v87 & 2) == 0 )
      __int2c();
    v43 = v87[2]-- == 1;
    if ( v43 )
      *v87 = v88 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v81 + 8) = 0;
  RtlReleaseSRWLockExclusive(v81);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v89 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v90 = *v89;
    if ( (*v89 & 1) == 0 )
      __int2c();
    v43 = v89[1]-- == 1;
    if ( v43 )
      *v89 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  started = 0;
LABEL_199:
  *v102 = CanBeStartedInHostState;
  return (unsigned int)started;
}
