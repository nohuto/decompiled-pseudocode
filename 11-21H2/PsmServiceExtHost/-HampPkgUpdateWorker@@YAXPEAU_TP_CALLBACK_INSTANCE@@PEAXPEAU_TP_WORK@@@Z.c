/*
 * XREFs of ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800101F4 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180010270 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x1800102C8 (-HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180010350 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampStateSummaryMergeVectors@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAT1@0@Z @ 0x180010A30 (-HampStateSummaryMergeVectors@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAT1@0@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010CE0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampPkgUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  DWORD v5; // edi
  _QWORD *Value; // rbx
  unsigned __int64 v7; // rsi
  int v8; // ecx
  struct _RM_HAM_ACTIVITY_HOST *FirstLiveHost; // r14
  char *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 v15; // rax
  struct _HAM_RC_TREE_NODE *i; // r15
  DWORD v17; // edi
  _QWORD *v18; // rbx
  int v19; // ebx
  __int64 *v20; // rax
  __int64 v21; // rcx
  DWORD v22; // esi
  _QWORD *v23; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v25; // esi
  _QWORD *v26; // rdi
  int *v27; // rax
  struct _RM_HAM_ACTIVITY_HOST *v28; // rsi
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  DWORD v33; // r14d
  _QWORD *v34; // rdi
  int v35; // eax
  __int64 *v36; // rax
  __int64 v37; // rcx
  DWORD v38; // r14d
  _QWORD *v39; // rdi
  unsigned __int64 *v40; // rax
  unsigned __int64 *v41; // rcx
  unsigned __int64 v42; // rdx
  DWORD v43; // esi
  _QWORD *v44; // rdi
  DWORD v45; // eax
  __int64 *v46; // rax
  __int64 v47; // rdx
  const unsigned __int16 *v48; // rcx
  __int64 v49; // rax
  int v50; // edx
  DWORD v51; // ebx
  __int64 *v52; // rax
  __int64 v53; // rcx
  struct _HAM_APPLICATION *v54; // rdi
  struct _HAM_RC_TREE_NODE **v55; // rax
  struct _HAM_RC_TREE_NODE *v56; // rcx
  struct _HAM_RC_TREE_NODE *v57; // rcx
  unsigned int v58; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v60; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  char *v62; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v64; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+120h] [rbp+20h] BYREF
  void *v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+13Ch] [rbp+3Ch]
  const unsigned __int16 *v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v67 = &unk_1800C0618;
    UserData.Reserved = 2;
    v68 = 23;
    v69 = 1;
    v58 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
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
  RtlAcquireSRWLockExclusive(a2 + 76);
  v7 = (unsigned __int64)(a2 + 10);
  a2[78] = GetCurrentThreadId();
  v8 = a2[85];
  LODWORD(FirstLiveHost) = 0;
  v10 = (char *)(a2 + 14);
  v62 = (char *)(a2 + 14);
  do
  {
    a2[85] = v8 & 0xFFFFFFEF;
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
    a2[78] = (_DWORD)FirstLiveHost;
    RtlReleaseSRWLockExclusive(a2 + 76);
    v14 = 128;
    v58 = 128;
    RtlAcquireSRWLockShared(v10);
    v15 = *(_QWORD *)(v7 + 8);
    if ( (v15 & 1) != 0 )
    {
      if ( v15 == 1 )
      {
LABEL_117:
        RtlReleaseSRWLockShared(v10);
        goto LABEL_79;
      }
      i = (struct _HAM_RC_TREE_NODE *)(v15 ^ (v7 | 1));
    }
    else
    {
      i = *(struct _HAM_RC_TREE_NODE **)(v7 + 8);
    }
    if ( !i )
      goto LABEL_117;
    while ( !*((_QWORD *)i + 3) )
    {
      v55 = (struct _HAM_RC_TREE_NODE **)*((_QWORD *)i + 1);
      v56 = i;
      if ( v55 )
      {
        v57 = *v55;
        for ( i = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)i + 1); v57; v57 = *(struct _HAM_RC_TREE_NODE **)v57 )
          i = v57;
      }
      else
      {
        for ( i = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_RC_TREE_NODE **)i == v56 )
            break;
          v56 = i;
        }
      }
      if ( !i )
        goto LABEL_117;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)i + 3) <= 1 )
      __fastfail(0xEu);
    RtlReleaseSRWLockShared(v10);
    do
    {
      v17 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v18 |= 0x20uLL;
        ++v18[6];
      }
      RtlAcquireSRWLockShared((char *)i + 584);
      v19 = *((_DWORD *)i + 155);
      if ( HampLockTrackerId != -1 )
      {
        v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v21 = *v20;
        if ( (*v20 & 0x20) == 0 )
          __int2c();
        v13 = v20[6]-- == 1;
        if ( v13 )
          *v20 = v21 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared((char *)i + 584);
      v22 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v23 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v22) )
          __int2c();
        *v23 |= 1uLL;
        ++v23[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      CurrentThreadId = GetCurrentThreadId();
      v25 = HampLockTrackerId;
      dword_1800DD4E8 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v26 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v26 |= 0x20uLL;
        ++v26[6];
      }
      RtlAcquireSRWLockShared((char *)i + 584);
      v27 = (int *)*((_QWORD *)i + 75);
      if ( v27 == (int *)((char *)i + 600) )
      {
LABEL_116:
        v28 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v28 = (struct _RM_HAM_ACTIVITY_HOST *)(v27 - 206);
          if ( *(v27 - 216) >= 0 )
            break;
          v27 = *(int **)v27;
          if ( v27 == (int *)((char *)i + 600) )
            goto LABEL_116;
        }
        ++*((_QWORD *)v28 + 75);
      }
      if ( HampLockTrackerId != -1 )
      {
        v29 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v30 = *v29;
        if ( (*v29 & 0x20) == 0 )
          __int2c();
        v13 = v29[6]-- == 1;
        if ( v13 )
          *v29 = v30 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared((char *)i + 584);
      LODWORD(FirstLiveHost) = 0;
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v32 = *v31;
        if ( (*v31 & 1) == 0 )
          __int2c();
        v13 = v31[1]-- == 1;
        if ( v13 )
          *v31 = v32 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( v28 )
      {
        while ( 1 )
        {
          v33 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v34 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v34 |= 2uLL;
            ++v34[2];
          }
          RtlAcquireSRWLockShared(v28);
          if ( (*((_QWORD *)v28 + 83) & 0x2000000000000LL) != 0 )
            break;
          if ( HampLockTrackerId != -1 )
          {
            v52 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v53 = *v52;
            if ( (*v52 & 2) == 0 )
              __int2c();
            v13 = v52[2]-- == 1;
            if ( v13 )
              *v52 = v53 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          RtlReleaseSRWLockShared(v28);
          v54 = (struct _HAM_APPLICATION *)*((_QWORD *)v28 + 99);
          RmpAcquireGlobalLock();
          HampAppAcquireLockShared(v54);
          FirstLiveHost = HampAppGetFirstLiveHost(v54, *((struct _LIST_ENTRY **)v28 + 103));
          HampAppReleaseLockShared(v54);
          RmpReleaseGlobalLock();
          RmpAcquireGlobalLock();
          v13 = (*((_QWORD *)v28 + 75))-- == 1LL;
          if ( v13 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v28 - 64));
          RmpReleaseGlobalLock();
          v28 = FirstLiveHost;
          if ( !FirstLiveHost )
            goto LABEL_114;
        }
        v35 = 1024;
        if ( v28 )
        {
          if ( HampLockTrackerId != -1 )
          {
            v36 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v37 = *v36;
            if ( (*v36 & 2) == 0 )
              __int2c();
            v13 = v36[2]-- == 1;
            if ( v13 )
              *v36 = v37 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          RtlReleaseSRWLockShared(v28);
          v38 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v39 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v38) )
              __int2c();
            *v39 |= 1uLL;
            ++v39[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DD4E8 = GetCurrentThreadId();
          v13 = (*((_QWORD *)v28 + 75))-- == 1LL;
          if ( v13 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v28 - 64));
          LODWORD(FirstLiveHost) = 0;
          dword_1800DD4E8 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          v35 = 1024;
          if ( HampLockTrackerId != -1 )
          {
            v40 = (unsigned __int64 *)TlsGetValue(HampLockTrackerId);
            v41 = v40;
            v42 = *v40;
            if ( (*v40 & 1) == 0 )
              __int2c();
            v13 = v40[1]-- == 1;
            v35 = 1024;
            if ( v13 )
              *v41 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
          }
        }
        else
        {
          LODWORD(FirstLiveHost) = 0;
        }
      }
      else
      {
LABEL_114:
        v35 = (int)FirstLiveHost;
      }
      v60 = v35 | v19 & 0xFFFFFBFF;
      v58 = HampStateSummaryMergeVectors(&v58, &v60);
      v14 = v58;
      i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, i);
    }
    while ( i );
LABEL_79:
    v59 = v14;
    HampPkgCommitAppsUsageInfo((struct _HAM_PACKAGE *)a2);
    v43 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v44 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v44 |= 0x40uLL;
      ++v44[7];
    }
    RtlAcquireSRWLockExclusive(a2 + 76);
    v45 = GetCurrentThreadId();
    v10 = v62;
    v7 = (unsigned __int64)(a2 + 10);
    a2[78] = v45;
    v8 = a2[85];
  }
  while ( (v8 & 0x10) != 0 );
  if ( a2[86] != v14 )
  {
    HampPkgCommitStateSummary((struct _HAM_PACKAGE *)a2, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v59);
    v8 = a2[85];
    v14 = v59;
  }
  a2[85] = v8 & 0xFFFFFFF7;
  if ( HampLockTrackerId != -1 )
  {
    v46 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v47 = *v46;
    if ( (*v46 & 0x40) == 0 )
      __int2c();
    v13 = v46[7]-- == 1;
    if ( v13 )
      *v46 = v47 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  a2[78] = (_DWORD)FirstLiveHost;
  RtlReleaseSRWLockExclusive(a2 + 76);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    v48 = (const unsigned __int16 *)(a2 + 24);
    v61 = v14;
    v78 = 4LL;
    v77 = &v61;
    if ( a2 == (_DWORD *)-96LL )
    {
      v48 = &word_1800B7A9C;
      v50 = 2;
    }
    else
    {
      v49 = -1LL;
      do
        v13 = v48[++v49] == 0;
      while ( !v13 );
      v50 = 2 * v49 + 2;
    }
    *(_DWORD *)&v64.Level = 516;
    v70.Ptr = (ULONGLONG)off_1800DC220;
    v76 = (int)FirstLiveHost;
    v74 = v48;
    v75 = v50;
    *(_DWORD *)&v64.Id = 184549376;
    v64.Keyword = 64LL;
    v70.Size = *(unsigned __int16 *)off_1800DC220;
    v71 = &unk_1800C05DB;
    v70.Reserved = 2;
    v72 = 49;
    v73 = 1;
    v60 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v64, 0LL, 0LL, 4u, &v70);
  }
  CemRcObjectDereference(a2);
  v51 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v51, 0LL);
  }
}
