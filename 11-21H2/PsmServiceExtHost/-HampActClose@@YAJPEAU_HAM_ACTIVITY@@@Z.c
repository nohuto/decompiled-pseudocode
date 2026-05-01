/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005884 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800224E0 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800748B0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x1800759D8 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020490 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022204 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180022240 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180037510 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x18003E640 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800774C8 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007BC78 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r14
  int v5; // r15d
  DWORD v6; // esi
  _QWORD *Value; // rdi
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  DWORD v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  _OWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // r13d
  const unsigned __int16 *v26; // r8
  __int64 v27; // rax
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  void *v36; // rcx
  DWORD v37; // esi
  __int64 v38; // r14
  _QWORD *v39; // rdi
  _DWORD *v40; // r14
  struct _RM_HAM_ACTIVITY_HOST *v41; // rcx
  char v42; // al
  __int64 v43; // rcx
  struct _HAM_DEPENDENCY_GROUP *v44; // r12
  struct _HAM_DEPENDENCY_GROUP *v45; // rdi
  struct _HAM_HOST_DEPENDENCY *v46; // rsi
  __int64 v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rdx
  DWORD v50; // r15d
  __int64 v51; // r14
  _QWORD *v52; // rsi
  __int16 v53; // si
  __int16 v54; // r15
  __int64 v55; // r11
  __int64 v56; // r11
  __int16 v57; // ax
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int16 v62; // si
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  DWORD v66; // esi
  _QWORD *v67; // rdi
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  int v73; // r15d
  int v74; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v75; // [rsp+34h] [rbp-CCh]
  __int64 v76; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v83; // [rsp+80h] [rbp-80h]
  int v84; // [rsp+88h] [rbp-78h]
  int v85; // [rsp+8Ch] [rbp-74h]
  __int64 *v86; // [rsp+90h] [rbp-70h]
  __int64 v87; // [rsp+98h] [rbp-68h]
  __int64 *v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  __int64 *v90; // [rsp+B0h] [rbp-50h]
  __int64 v91; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v92; // [rsp+C0h] [rbp-40h]
  int v93; // [rsp+C8h] [rbp-38h]
  int v94; // [rsp+CCh] [rbp-34h]
  const unsigned __int16 *v95; // [rsp+D0h] [rbp-30h]
  int v96; // [rsp+D8h] [rbp-28h]
  int v97; // [rsp+DCh] [rbp-24h]
  int *v98; // [rsp+E0h] [rbp-20h]
  __int64 v99; // [rsp+E8h] [rbp-18h]
  __int64 *v100; // [rsp+F0h] [rbp-10h]
  __int64 v101; // [rsp+F8h] [rbp-8h]

  LOBYTE(a2) = 4;
  result = HampActBeginStateChange(a1, a2);
  v75 = result;
  if ( (int)result < 0 )
    return result;
  v4 = *((_QWORD *)a1 + 8);
  v5 = 0;
  if ( v4 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        __int2c();
      *Value |= 0x200uLL;
      ++Value[10];
    }
    RtlAcquireSRWLockExclusive(v4 + 24);
    *(_DWORD *)(v4 + 32) = GetCurrentThreadId();
    v8 = (_OWORD *)((char *)a1 + 48);
    v9 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v9 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v10 = (_QWORD *)*((_QWORD *)a1 + 7), (_OWORD *)*v10 != v8) )
    {
LABEL_126:
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = HampLockTrackerId;
    *v8 = 0LL;
    if ( v11 != -1 )
    {
      v12 = (__int64 *)TlsGetValue(v11);
      v13 = *v12;
      if ( (*v12 & 0x200) == 0 )
        __int2c();
      v14 = v12[10]-- == 1;
      if ( v14 )
        *v12 = v13 & 0xFFFFFFFFFFFFFDFFuLL;
    }
    *(_DWORD *)(v4 + 32) = 0;
    RtlReleaseSRWLockExclusive(v4 + 24);
  }
  v15 = *((_QWORD *)a1 + 12);
  v16 = (_OWORD *)((char *)a1 + 96);
  if ( *(struct _HAM_ACTIVITY **)(v15 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_126;
  v17 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_OWORD *)*v17 != v16 )
    goto LABEL_126;
  *v17 = v15;
  *(_QWORD *)(v15 + 8) = v17;
  *v16 = 0LL;
  v18 = *((_QWORD *)a1 + 10);
  if ( HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)v18) )
  {
    v72 = *(unsigned int *)(v18 + 848);
    if ( (_DWORD)v72 != -1 )
    {
      v76 = -10000 * v72;
      TpSetTimer(*(_QWORD *)(v18 + 840), &v76, 0LL, 5000LL);
    }
  }
  v19 = *((_QWORD *)a1 + 67);
  if ( v19 )
  {
    if ( (unsigned int)TpSetTimerEx(v19, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 67));
    *((_QWORD *)a1 + 67) = 0LL;
    *((_QWORD *)a1 + 68) = 0LL;
  }
  if ( *(struct _HAM_ACTIVITY **)(v18 + 1016) == a1 )
    *(_QWORD *)(v18 + 1016) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v18);
  v20 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v22 = *v21;
    if ( (*v21 & 2) == 0 )
      __int2c();
    v14 = v21[2]-- == 1;
    if ( v14 )
      *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v20 + 8) = 0;
  RtlReleaseSRWLockExclusive(v20);
  v23 = *((_QWORD *)a1 + 9);
  if ( v23 )
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 24LL);
  else
    v24 = -1LL;
  v25 = 1;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v26 = (const unsigned __int16 *)((char *)a1 + 124);
    v74 = *((_DWORD *)a1 + 28);
    v78 = *((_QWORD *)a1 + 64);
    v27 = *((_QWORD *)a1 + 10);
    v77 = v24;
    v28 = (const unsigned __int16 *)((char *)a1 + 252);
    v101 = 8LL;
    v99 = 4LL;
    v29 = *(_QWORD *)(v27 - 32);
    v80 = *((_QWORD *)a1 + 5);
    v100 = &v77;
    v98 = &v74;
    v79 = v29;
    if ( a1 == (struct _HAM_ACTIVITY *)-252LL )
    {
      v28 = &word_1800B7A9C;
      v31 = 2;
    }
    else
    {
      v30 = -1LL;
      do
        v14 = v28[++v30] == 0;
      while ( !v14 );
      v31 = 2 * v30 + 2;
    }
    v95 = v28;
    v96 = v31;
    v97 = 0;
    if ( a1 == (struct _HAM_ACTIVITY *)-124LL )
    {
      v26 = &word_1800B7A9C;
      v33 = 2;
    }
    else
    {
      v32 = -1LL;
      do
        v14 = v26[++v32] == 0;
      while ( !v14 );
      v33 = 2 * v32 + 2;
    }
    v93 = v33;
    v90 = &v78;
    v92 = v26;
    v88 = &v79;
    v94 = 0;
    v86 = &v80;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v91 = 8LL;
    v89 = 8LL;
    v87 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v83 = &unk_1800C03CA;
    UserData.Reserved = 2;
    v84 = 106;
    v85 = 1;
    LODWORD(v76) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v34 = *((_QWORD *)a1 + 11);
  v35 = *(_QWORD *)(v34 + 16);
  if ( v35 != -1LL )
  {
    RmSrvResourceSetReleaseResources(RmSvcGlobals, v35, 0);
    *(_QWORD *)(v34 + 16) = -1LL;
  }
  v36 = (void *)*((_QWORD *)a1 + 63);
  if ( v36 )
  {
    HampSystemActivationClientDeactivate(v36);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  v37 = HampLockTrackerId;
  v38 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v39 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v37) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v39 |= 2uLL;
    ++v39[2];
  }
  RtlAcquireSRWLockExclusive(v38);
  *(_DWORD *)(v38 + 8) = GetCurrentThreadId();
  v40 = (_DWORD *)((char *)a1 + 552);
  v41 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_DWORD *)a1 + 138) &= ~1u;
  HampHostUpdateActivityState(v41);
  v42 = *((_BYTE *)a1 + 562);
  if ( (v42 == 3 || v42 == 2) && (*v40 & 0x180) != 0 )
  {
    HampActIssueStopRequestCallback(a1);
    v42 = *((_BYTE *)a1 + 562);
  }
  if ( v42 != 4 && v42 != 1 || (*((_DWORD *)a1 + 30) & 0x20C) == 0 && (*((_DWORD *)a1 + 28) & 0x4000) == 0 )
    v25 = 0;
  v43 = *((_QWORD *)a1 + 10);
  v44 = 0LL;
  v45 = *(struct _HAM_DEPENDENCY_GROUP **)(v43 + 704);
  if ( v45 )
  {
    HampActCheckEnterDependencyWorker(a1);
    v73 = *v40 >> 1;
    *v40 &= ~2u;
    v5 = v73 & 1;
    if ( v5 )
      v44 = v45;
  }
  else
  {
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v43, 0);
  }
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v46 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  else
  {
    v46 = 0LL;
  }
  v47 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v48 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v49 = *v48;
    if ( (*v48 & 2) == 0 )
      __int2c();
    v14 = v48[2]-- == 1;
    if ( v14 )
      *v48 = v49 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v47 + 8) = 0;
  RtlReleaseSRWLockExclusive(v47);
  RtlWakeAddressAll((char *)a1 + 552);
  if ( v46 )
    HampHostDepDestroy(v46);
  if ( v25 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v5 )
    HampDepGroupRunStateChangeWorker(v44);
  v50 = HampLockTrackerId;
  v51 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v52 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v50) )
      __int2c();
    *v52 |= 1uLL;
    ++v52[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v53 = 102;
  v54 = *(_WORD *)(v51 + 1114);
  v55 = *(_QWORD *)(v51 + 1088);
  if ( v55 != v51 + 1088 )
  {
    v56 = v55 - 1296;
    while ( v56 )
    {
      if ( *(_DWORD *)(v56 + 1280) == 2 || (*(_BYTE *)(v56 + 1332) & 4) != 0 )
      {
        v57 = RmpPolicyDigestCompute(v56);
        v53 = RmpPolicyDigestMerge(v53, v57);
      }
      v58 = *(_QWORD *)(v56 + 1296);
      v59 = 3 * (*(int *)(v56 + 1328) + 47LL);
      v60 = *(_QWORD *)(v56 + 1320);
      v56 = 0LL;
      if ( v58 != v60 + 8 * v59 )
        v56 = v58 - 1296;
    }
  }
  *(_WORD *)(v51 + 1114) = v53;
  v61 = *(_QWORD *)(v51 - 8);
  v62 = v53 & 0x80;
  if ( (v54 & 0x80) != 0 )
  {
    if ( !v62 )
      --*(_DWORD *)(v61 + 212);
  }
  else if ( v62 )
  {
    ++*(_DWORD *)(v61 + 212);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v51 - 64), 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v51 + 1408));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v51 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v51 - 8) + 88LL));
  v63 = *(_QWORD *)(v51 - 16);
  *(_QWORD *)(v51 + 1160) = 0LL;
  v64 = *(_QWORD *)(v63 + 3232);
  v65 = *(_DWORD *)(v64 + 160);
  if ( (v65 & 3) == 0 )
  {
    *(_DWORD *)(v64 + 160) = v65 | 1;
    TpPostWork(*(_QWORD *)(v64 + 144));
  }
  v66 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v67 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v66) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v67 |= 2uLL;
    ++v67[2];
  }
  RtlAcquireSRWLockExclusive(v51);
  *(_DWORD *)(v51 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v51, 0);
  if ( HampLockTrackerId != -1 )
  {
    v68 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v69 = *v68;
    if ( (*v68 & 2) == 0 )
      __int2c();
    v14 = v68[2]-- == 1;
    if ( v14 )
      *v68 = v69 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v51 + 8) = 0;
  RtlReleaseSRWLockExclusive(v51);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v70 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v71 = *v70;
    if ( (*v70 & 1) == 0 )
      __int2c();
    v14 = v70[1]-- == 1;
    if ( v14 )
      *v70 = v71 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return v75;
}
