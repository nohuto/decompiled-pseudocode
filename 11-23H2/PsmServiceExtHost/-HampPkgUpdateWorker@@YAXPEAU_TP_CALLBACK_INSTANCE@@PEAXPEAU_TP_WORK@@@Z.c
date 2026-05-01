/*
 * XREFs of ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001D810
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001B1F0 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001C0B0 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampStateSummaryMergeVectors@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAT1@0@Z @ 0x18001C8D0 (-HampStateSummaryMergeVectors@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAT1@0@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall HampPkgUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  DWORD v5; // edi
  _QWORD *Value; // rbx
  char *v7; // r12
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  _DWORD *v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 v15; // rax
  struct _HAM_RC_TREE_NODE *j; // r14
  struct _HAM_RC_TREE_NODE **v17; // rcx
  struct _HAM_RC_TREE_NODE *v18; // rax
  struct _HAM_RC_TREE_NODE *i; // rcx
  DWORD v20; // edi
  _QWORD *v21; // rbx
  int v22; // ebx
  __int64 *v23; // rax
  __int64 v24; // rcx
  DWORD v25; // esi
  _QWORD *v26; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v28; // esi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdx
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rdi
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rcx
  DWORD v37; // r15d
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  int v40; // r12d
  DWORD v41; // esi
  _QWORD *v42; // rdi
  DWORD v43; // eax
  __int64 *v44; // rax
  __int64 v45; // rdx
  const unsigned __int16 *v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  __int64 *v49; // rax
  __int64 v50; // rcx
  DWORD v51; // r15d
  _QWORD *v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rcx
  DWORD v55; // ebx
  unsigned int v56; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v57; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v58; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+3Ch] [rbp-C4h] BYREF
  char *v60; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v62; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD TlsValue[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+120h] [rbp+20h] BYREF
  void *v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  const unsigned __int16 *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]

  v3 = HampLockTrackerId;
  v64 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v66 = &unk_1800C27EC;
    UserData.Reserved = 2;
    v67 = 23;
    v68 = 1;
    v56 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  v7 = (char *)(a2 + 76);
  RtlAcquireSRWLockExclusive(a2 + 76);
  v8 = (unsigned __int64)(a2 + 10);
  a2[78] = GetCurrentThreadId();
  v9 = (char *)(a2 + 14);
  v60 = (char *)(a2 + 14);
  v10 = a2 + 85;
  do
  {
    *v10 &= ~0x20u;
    if ( HampLockTrackerId != -1 )
    {
      v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v12 = *v11;
      if ( (*v11 & 0x40) == 0 )
        __int2c();
      v13 = v11[7]-- == 1;
      if ( v13 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *((_DWORD *)v7 + 2) = 0;
    RtlReleaseSRWLockExclusive(v7);
    v14 = 128;
    v56 = 128;
    RtlAcquireSRWLockShared(v9);
    v15 = *(_QWORD *)(v8 + 8);
    if ( (v15 & 1) != 0 )
    {
      if ( v15 == 1 )
        goto LABEL_33;
      j = (struct _HAM_RC_TREE_NODE *)(v15 ^ (v8 | 1));
    }
    else
    {
      j = *(struct _HAM_RC_TREE_NODE **)(v8 + 8);
    }
    if ( !j )
    {
LABEL_33:
      RtlReleaseSRWLockShared(v9);
      goto LABEL_80;
    }
    while ( !*((_QWORD *)j + 3) )
    {
      v17 = (struct _HAM_RC_TREE_NODE **)*((_QWORD *)j + 1);
      v18 = j;
      if ( v17 )
      {
        j = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)j + 1);
        for ( i = *v17; i; i = *(struct _HAM_RC_TREE_NODE **)i )
          j = i;
      }
      else
      {
        for ( j = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              j;
              j = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_RC_TREE_NODE **)j == v18 )
            break;
          v18 = j;
        }
      }
      if ( !j )
        goto LABEL_33;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)j + 3) <= 1 )
      __fastfail(0xEu);
    RtlReleaseSRWLockShared(v9);
    do
    {
      v20 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v21 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v20) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v21 |= 0x20uLL;
        ++v21[6];
      }
      RtlAcquireSRWLockShared((char *)j + 584);
      v22 = *((_DWORD *)j + 155);
      if ( HampLockTrackerId != -1 )
      {
        v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v24 = *v23;
        if ( (*v23 & 0x20) == 0 )
          __int2c();
        v13 = v23[6]-- == 1;
        if ( v13 )
          *v23 = v24 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared((char *)j + 584);
      v25 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v26 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v25) )
          __int2c();
        *v26 |= 1uLL;
        ++v26[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      CurrentThreadId = GetCurrentThreadId();
      v28 = HampLockTrackerId;
      dword_1800DC580 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v29 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v29 |= 0x20uLL;
        ++v29[6];
      }
      RtlAcquireSRWLockShared((char *)j + 584);
      v30 = (_QWORD *)*((_QWORD *)j + 75);
      if ( v30 == (_QWORD *)((char *)j + 600) )
      {
LABEL_59:
        NextHost = 0LL;
      }
      else
      {
        while ( 1 )
        {
          NextHost = (struct _RM_HAM_ACTIVITY_HOST *)(v30 - 103);
          v32 = 24LL;
          if ( v30 != (_QWORD *)824 )
            v32 = (__int64)(v30 - 108);
          if ( *(int *)v32 >= 0 )
            break;
          v30 = (_QWORD *)*v30;
          if ( v30 == (_QWORD *)((char *)j + 600) )
            goto LABEL_59;
        }
        ++*((_QWORD *)NextHost + 75);
      }
      if ( HampLockTrackerId != -1 )
      {
        v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v34 = *v33;
        if ( (*v33 & 0x20) == 0 )
          __int2c();
        v13 = v33[6]-- == 1;
        if ( v13 )
          *v33 = v34 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared((char *)j + 584);
      dword_1800DC580 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v35 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v36 = *v35;
        if ( (*v35 & 1) == 0 )
          __int2c();
        v13 = v35[1]-- == 1;
        if ( v13 )
          *v35 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( NextHost )
      {
        while ( 1 )
        {
          v37 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v38 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v37) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v38 |= 2uLL;
            ++v38[2];
          }
          RtlAcquireSRWLockShared(NextHost);
          if ( (*((_QWORD *)NextHost + 83) & 0x2000000000000LL) != 0 )
            break;
          CempLockTrackerMarkReleased(HampLockTrackerId, v39, 1u);
          RtlReleaseSRWLockShared(NextHost);
          NextHost = HampAppGetNextHost(NextHost);
          if ( !NextHost )
            goto LABEL_77;
        }
        v40 = 1024;
        if ( HampLockTrackerId != -1 )
        {
          v49 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v50 = *v49;
          if ( (*v49 & 2) == 0 )
            __int2c();
          v13 = v49[2]-- == 1;
          if ( v13 )
            *v49 = v50 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared(NextHost);
        v51 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v52 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v51) )
            __int2c();
          *v52 |= 1uLL;
          ++v52[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800DC580 = GetCurrentThreadId();
        v13 = (*((_QWORD *)NextHost + 75))-- == 1LL;
        if ( v13 )
          RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)NextHost - 64));
        dword_1800DC580 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v53 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v54 = *v53;
          if ( (*v53 & 1) == 0 )
            __int2c();
          v13 = v53[1]-- == 1;
          if ( v13 )
            *v53 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
        }
      }
      else
      {
LABEL_77:
        v40 = 0;
      }
      v58 = v40 | v22 & 0xFFFFFBFF;
      v56 = HampStateSummaryMergeVectors(&v56, &v58);
      v14 = v56;
      j = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, j);
    }
    while ( j );
    v10 = a2 + 85;
    v7 = (char *)(a2 + 76);
LABEL_80:
    v57 = v14;
    HampPkgCommitAppsUsageInfo((struct _HAM_PACKAGE *)a2);
    v41 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v42 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v42 |= 0x40uLL;
      ++v42[7];
    }
    RtlAcquireSRWLockExclusive(v7);
    v43 = GetCurrentThreadId();
    v9 = v60;
    v8 = (unsigned __int64)(a2 + 10);
    *((_DWORD *)v7 + 2) = v43;
  }
  while ( (*(_BYTE *)v10 & 0x20) != 0 );
  if ( a2[86] != v14 )
  {
    HampPkgCommitStateSummary((struct _HAM_PACKAGE *)a2, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v57);
    v14 = v57;
  }
  *v10 &= ~0x10u;
  if ( HampLockTrackerId != -1 )
  {
    v44 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v45 = *v44;
    if ( (*v44 & 0x40) == 0 )
      __int2c();
    v13 = v44[7]-- == 1;
    if ( v13 )
      *v44 = v45 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  RtlWakeAddressAll(v10);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    v46 = (const unsigned __int16 *)(a2 + 24);
    v59 = v14;
    v77 = 4LL;
    v76 = &v59;
    if ( a2 == (_DWORD *)-96LL )
    {
      v46 = &word_1800B66B4;
      v48 = 2;
    }
    else
    {
      v47 = -1LL;
      do
        v13 = v46[++v47] == 0;
      while ( !v13 );
      v48 = 2 * v47 + 2;
    }
    *(_DWORD *)&v62.Level = 516;
    v69.Ptr = (ULONGLONG)off_1800DB220;
    v73 = v46;
    v74 = v48;
    v75 = 0;
    *(_DWORD *)&v62.Id = 184549376;
    v62.Keyword = 64LL;
    v69.Size = *(unsigned __int16 *)off_1800DB220;
    v70 = &unk_1800C27AF;
    v69.Reserved = 2;
    v71 = 49;
    v72 = 1;
    v58 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v62, 0LL, 0LL, 4u, &v69);
  }
  CemRcObjectDereference(a2);
  v55 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v55, 0LL);
  }
}
