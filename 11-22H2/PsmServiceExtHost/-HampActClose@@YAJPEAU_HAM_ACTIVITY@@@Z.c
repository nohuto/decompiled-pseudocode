/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     HamRpcSrvCloseActivity @ 0x18002AE20 (HamRpcSrvCloseActivity.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180039294 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003CF28 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007CE1C (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180013ACC (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180026E30 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D4B0 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D658 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D6CC (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18004FDF0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800502A4 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  __int64 v3; // r14
  struct _HAM_HOST_DEPENDENCY *v4; // r15
  DWORD v5; // esi
  _QWORD *Value; // rdi
  _OWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  DWORD v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rcx
  struct _RM_SERVICE_GLOBALS *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r13d
  const unsigned __int16 *v25; // rcx
  __int64 v26; // rax
  const unsigned __int16 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  void *v35; // rcx
  DWORD v36; // esi
  __int64 v37; // r14
  _QWORD *v38; // rdi
  unsigned int *v39; // r12
  int v40; // eax
  DWORD v41; // ecx
  __int64 v42; // rdi
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  DWORD v46; // esi
  __int64 v47; // r14
  _QWORD *v48; // rdi
  __int64 v49; // rdi
  __int64 *v50; // rax
  __int64 v51; // rcx
  DWORD v52; // esi
  __int64 v53; // r14
  _QWORD *v54; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v55; // rcx
  char v56; // al
  __int64 v57; // rcx
  struct _HAM_DEPENDENCY_GROUP *v58; // rdi
  int v59; // esi
  __int64 v60; // r14
  __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdi
  struct _RM_ACTIVITY_HOST *v64; // r15
  DWORD v65; // r14d
  _QWORD *v66; // rsi
  DWORD v67; // r14d
  _QWORD *v68; // rsi
  __int64 *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // rcx
  signed __int64 v73; // rax
  signed __int64 v74; // rcx
  bool v75; // zf
  signed __int64 v76; // rtt
  signed __int64 v77; // rax
  signed __int64 v78; // rcx
  bool v79; // zf
  signed __int64 v80; // rtt
  __int64 v82; // rax
  unsigned __int64 v83; // rdi
  signed __int64 v84; // rax
  bool v85; // cc
  signed __int64 v86; // rax
  unsigned __int64 v87; // rdi
  signed __int64 v88; // r14
  signed __int64 v89; // r14
  int v90; // [rsp+30h] [rbp-D0h] BYREF
  int v91; // [rsp+34h] [rbp-CCh]
  unsigned int v92; // [rsp+38h] [rbp-C8h]
  __int64 v93; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v94; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v96; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _DWORD JobInformation[20]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+E8h] [rbp-18h]
  int v103; // [rsp+ECh] [rbp-14h]
  __int64 *v104; // [rsp+F0h] [rbp-10h]
  __int64 v105; // [rsp+F8h] [rbp-8h]
  __int64 *v106; // [rsp+100h] [rbp+0h]
  __int64 v107; // [rsp+108h] [rbp+8h]
  __int64 *v108; // [rsp+110h] [rbp+10h]
  __int64 v109; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v110; // [rsp+120h] [rbp+20h]
  int v111; // [rsp+128h] [rbp+28h]
  int v112; // [rsp+12Ch] [rbp+2Ch]
  const unsigned __int16 *v113; // [rsp+130h] [rbp+30h]
  int v114; // [rsp+138h] [rbp+38h]
  int v115; // [rsp+13Ch] [rbp+3Ch]
  int *v116; // [rsp+140h] [rbp+40h]
  __int64 v117; // [rsp+148h] [rbp+48h]
  __int64 *v118; // [rsp+150h] [rbp+50h]
  __int64 v119; // [rsp+158h] [rbp+58h]

  LOBYTE(a2) = 4;
  v91 = HampActBeginStateChange(a1, a2);
  if ( v91 < 0 )
    return (unsigned int)v91;
  v3 = *((_QWORD *)a1 + 8);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        __int2c();
      *Value |= 0x200uLL;
      ++Value[10];
    }
    RtlAcquireSRWLockExclusive(v3 + 40);
    *(_DWORD *)(v3 + 48) = GetCurrentThreadId();
    v7 = (_OWORD *)((char *)a1 + 48);
    v8 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v8 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v9 = (_QWORD *)*((_QWORD *)a1 + 7), (_OWORD *)*v9 != v7) )
    {
LABEL_158:
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = HampLockTrackerId;
    *v7 = 0LL;
    if ( v10 != -1 )
    {
      v11 = (__int64 *)TlsGetValue(v10);
      v12 = *v11;
      if ( (*v11 & 0x200) == 0 )
        __int2c();
      v75 = v11[10]-- == 1;
      if ( v75 )
        *v11 = v12 & 0xFFFFFFFFFFFFFDFFuLL;
    }
    *(_DWORD *)(v3 + 48) = 0;
    RtlReleaseSRWLockExclusive(v3 + 40);
  }
  v13 = *((_QWORD *)a1 + 12);
  v14 = (_OWORD *)((char *)a1 + 96);
  if ( *(struct _HAM_ACTIVITY **)(v13 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_158;
  v15 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_OWORD *)*v15 != v14 )
    goto LABEL_158;
  *v15 = v13;
  *(_QWORD *)(v13 + 8) = v15;
  *v14 = 0LL;
  v16 = *((_QWORD *)a1 + 10);
  if ( (*(_QWORD *)(v16 + 664) & 0x3000000000000LL) == 0x2000000000000LL && *(_QWORD *)(v16 + 608) == v16 + 608 )
  {
    v82 = *(unsigned int *)(v16 + 848);
    if ( (_DWORD)v82 != -1 )
    {
      v93 = -10000 * v82;
      TpSetTimer(*(_QWORD *)(v16 + 840), &v93, 0LL, 5000LL);
    }
  }
  v17 = *((_QWORD *)a1 + 67);
  if ( v17 )
  {
    if ( (unsigned int)TpSetTimerEx(v17, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 67));
    *((_QWORD *)a1 + 67) = 0LL;
    *((_QWORD *)a1 + 68) = 0LL;
  }
  if ( *(struct _HAM_ACTIVITY **)(v16 + 1016) == a1 )
    *(_QWORD *)(v16 + 1016) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v16);
  v18 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v20 = *v19;
    if ( (*v19 & 2) == 0 )
      __int2c();
    v75 = v19[2]-- == 1;
    if ( v75 )
      *v19 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v18 + 8) = 0;
  RtlReleaseSRWLockExclusive(v18);
  v22 = *((_QWORD *)a1 + 9);
  if ( v22 )
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 24LL);
  else
    v23 = -1LL;
  v24 = 1;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v25 = (const unsigned __int16 *)((char *)a1 + 252);
    v90 = *((_DWORD *)a1 + 28);
    v95 = *((_QWORD *)a1 + 64);
    v26 = *((_QWORD *)a1 + 10);
    v94 = v23;
    v27 = (const unsigned __int16 *)((char *)a1 + 124);
    if ( v26 )
      v28 = v26 - 32;
    else
      v28 = 32LL;
    v96 = *(_QWORD *)v28;
    v97 = *((_QWORD *)a1 + 5);
    v118 = &v94;
    v116 = &v90;
    v119 = 8LL;
    v117 = 4LL;
    if ( a1 == (struct _HAM_ACTIVITY *)-252LL )
    {
      v25 = &word_1800B66C4;
      v30 = 2;
    }
    else
    {
      v29 = -1LL;
      do
        v75 = v25[++v29] == 0;
      while ( !v75 );
      v30 = 2 * v29 + 2;
    }
    v113 = v25;
    v114 = v30;
    v115 = 0;
    if ( a1 == (struct _HAM_ACTIVITY *)-124LL )
    {
      v27 = &word_1800B66C4;
      v32 = 2;
    }
    else
    {
      v31 = -1LL;
      do
        v75 = v27[++v31] == 0;
      while ( !v75 );
      v32 = 2 * v31 + 2;
    }
    v111 = v32;
    v108 = &v95;
    v110 = v27;
    v106 = &v96;
    v112 = 0;
    v104 = &v97;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v109 = 8LL;
    v107 = 8LL;
    v105 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v101 = &unk_1800C1FF3;
    UserData.Reserved = 2;
    v102 = 106;
    v103 = 1;
    v92 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v33 = *((_QWORD *)a1 + 11);
  v34 = *(_QWORD *)(v33 + 16);
  if ( v34 != -1LL )
  {
    RmSrvResourceSetReleaseResources(v21, v34);
    *(_QWORD *)(v33 + 16) = -1LL;
  }
  v35 = (void *)*((_QWORD *)a1 + 63);
  if ( v35 )
  {
    HampSystemActivationClientDeactivate(v35);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  v36 = HampLockTrackerId;
  v37 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v38 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v38 |= 2uLL;
    ++v38[2];
  }
  RtlAcquireSRWLockExclusive(v37);
  v39 = (unsigned int *)((char *)a1 + 552);
  *(_DWORD *)(v37 + 8) = GetCurrentThreadId();
  v40 = *((_DWORD *)a1 + 138);
  if ( (v40 & 0x80u) != 0 )
  {
    v41 = HampLockTrackerId;
    v42 = *((_QWORD *)a1 + 10);
    *v39 = v40 & 0xFFFFFF7F;
    if ( v41 != -1 )
    {
      v43 = (__int64 *)TlsGetValue(v41);
      v44 = *v43;
      if ( (*v43 & 2) == 0 )
        __int2c();
      v75 = v43[2]-- == 1;
      if ( v75 )
        *v43 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v42 + 8) = 0;
    RtlReleaseSRWLockExclusive(v42);
    memset_0(JobInformation, 0, 0x48uLL);
    v45 = *((_QWORD *)a1 + 10);
    JobInformation[0] = 2;
    NtSetInformationJobObject(*(HANDLE *)(v45 + 576), JobObjectJobSetInformation|0x20, JobInformation, 0x48u);
    v46 = HampLockTrackerId;
    v47 = *((_QWORD *)a1 + 10);
    if ( HampLockTrackerId != -1 )
    {
      v48 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v46) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v48 |= 2uLL;
      ++v48[2];
    }
    RtlAcquireSRWLockExclusive(v47);
    *(_DWORD *)(v47 + 8) = GetCurrentThreadId();
  }
  v49 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v50 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v51 = *v50;
    if ( (*v50 & 2) == 0 )
      __int2c();
    v75 = v50[2]-- == 1;
    if ( v75 )
      *v50 = v51 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v49 + 8) = 0;
  RtlReleaseSRWLockExclusive(v49);
  v52 = HampLockTrackerId;
  v53 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v54 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v52) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v54 |= 2uLL;
    ++v54[2];
  }
  RtlAcquireSRWLockExclusive(v53);
  *(_DWORD *)(v53 + 8) = GetCurrentThreadId();
  v55 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *v39 &= ~1u;
  HampHostUpdateActivityState(v55);
  if ( (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) <= 1u && (*v39 & 0x300) != 0 )
    HampActIssueStopRequestCallback(a1, 0);
  v56 = *((_BYTE *)a1 + 562);
  if ( v56 != 4 && v56 != 1 || (*((_DWORD *)a1 + 30) & 0x20C) == 0 && (*((_DWORD *)a1 + 28) & 0x4000) == 0 )
    v24 = 0;
  v57 = *((_QWORD *)a1 + 10);
  v58 = *(struct _HAM_DEPENDENCY_GROUP **)(v57 + 704);
  if ( v58 )
  {
    HampActCheckEnterDependencyWorker(a1);
    v59 = (*v39 >> 1) & 1;
    *v39 &= ~2u;
  }
  else
  {
    v59 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v57, 0);
  }
  if ( !v59 )
    v58 = 0LL;
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v4 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  v60 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v61 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v62 = *v61;
    if ( (*v61 & 2) == 0 )
      __int2c();
    v75 = v61[2]-- == 1;
    if ( v75 )
      *v61 = v62 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v60 + 8) = 0;
  RtlReleaseSRWLockExclusive(v60);
  RtlWakeAddressAll((char *)a1 + 552);
  if ( v4 )
    HampHostDepDestroy(v4);
  if ( v24 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v59 )
    HampDepGroupRunStateChangeWorker(v58);
  v63 = *((_QWORD *)a1 + 10);
  if ( v63 )
    v64 = (struct _RM_ACTIVITY_HOST *)(v63 - 64);
  else
    v64 = 0LL;
  v65 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v66 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v65) )
      __int2c();
    *v66 |= 1uLL;
    ++v66[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC590 = GetCurrentThreadId();
  RmpActivityHostResourceSetsChanged(v64);
  v67 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v68 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v67) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v68 |= 2uLL;
    ++v68[2];
  }
  RtlAcquireSRWLockExclusive(v63);
  *(_DWORD *)(v63 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v63, 0);
  if ( HampLockTrackerId != -1 )
  {
    v69 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v70 = *v69;
    if ( (*v69 & 2) == 0 )
      __int2c();
    v75 = v69[2]-- == 1;
    if ( v75 )
      *v69 = v70 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v63 + 8) = 0;
  RtlReleaseSRWLockExclusive(v63);
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v71 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v72 = *v71;
    if ( (*v71 & 1) == 0 )
      __int2c();
    v75 = v71[1]-- == 1;
    if ( v75 )
      *v71 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( *((_QWORD *)a1 + 8) )
  {
    _m_prefetchw((char *)a1 + 24);
    v73 = *((_QWORD *)a1 + 3);
    v74 = v73 - 1;
    v75 = v73 == 1;
    if ( v73 - 1 <= 0 )
    {
LABEL_135:
      if ( !v75 )
        __fastfail(0xEu);
      v83 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)a1 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)a1 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v83 + 24))(a1);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v83 + 16);
        v84 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v85 = v84 <= 1;
        v86 = v84 - 1;
        if ( v85 )
        {
          if ( v86 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v83 + 16);
          (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v83 + 24))(a1);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v83 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v76 = v73;
        v73 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 3, v74, v73);
        if ( v76 == v73 )
          break;
        v74 = v73 - 1;
        v75 = v73 == 1;
        if ( v73 - 1 <= 0 )
          goto LABEL_135;
      }
    }
  }
  _m_prefetchw((char *)a1 + 24);
  v77 = *((_QWORD *)a1 + 3);
  v78 = v77 - 1;
  v79 = v77 == 1;
  if ( v77 - 1 <= 0 )
  {
LABEL_147:
    if ( !v79 )
      __fastfail(0xEu);
    v87 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *((_QWORD *)a1 + 2) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)a1 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v87 + 24))(a1);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v87 + 16);
      v88 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v85 = v88 <= 1;
      v89 = v88 - 1;
      if ( v85 )
      {
        if ( v89 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v87 + 16);
        (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v87 + 24))(a1);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v87 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v80 = v77;
      v77 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 3, v78, v77);
      if ( v80 == v77 )
        break;
      v78 = v77 - 1;
      v79 = v77 == 1;
      if ( v77 - 1 <= 0 )
        goto LABEL_147;
    }
  }
  return (unsigned int)v91;
}
