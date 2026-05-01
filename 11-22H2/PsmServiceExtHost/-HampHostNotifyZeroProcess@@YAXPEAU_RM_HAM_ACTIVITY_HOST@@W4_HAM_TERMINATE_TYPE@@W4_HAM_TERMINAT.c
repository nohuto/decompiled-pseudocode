/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760
 * Callers:
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A040 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180014FCC (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180017628 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4_HOST_GROUP@@@Z @ 0x18001782C (-HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@W4.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180017D78 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800191D0 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180034DE0 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180034ED0 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003DBB8 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180041FAC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HampHostNotifyZeroProcess(__int64 a1, char a2, unsigned int a3, int a4, _DWORD *a5)
{
  DWORD v5; // esi
  _QWORD *Value; // rbx
  DWORD v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  DWORD v19; // esi
  _QWORD *v20; // rbx
  __int64 *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rsi
  int v24; // esi
  const unsigned __int16 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  int v29; // ecx
  __int64 v30; // rax
  struct _HAM_DEPENDENCY_GROUP *v31; // rbx
  __int64 v32; // rbx
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+34h] [rbp-CCh] BYREF
  char v35; // [rsp+35h] [rbp-CBh] BYREF
  char v36; // [rsp+36h] [rbp-CAh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  const unsigned __int16 *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  __int64 *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  char *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  unsigned int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  __int64 *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  _WORD *v70; // [rsp+140h] [rbp+40h]
  int v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  _WORD v75[136]; // [rsp+160h] [rbp+60h] BYREF

  v5 = HampLockTrackerId;
  v33 = a3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  *(_QWORD *)(a1 + 664) |= 0x8000000000000000uLL;
  v11 = HampLockTrackerId;
  v12 = *(_QWORD *)(a1 + 1056);
  v13 = *(_QWORD *)(a1 + 840);
  *(_QWORD *)(a1 + 1056) = 0LL;
  if ( v11 != -1 )
  {
    v14 = (__int64 *)TlsGetValue(v11);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      __int2c();
    v16 = v14[2]-- == 1;
    if ( v16 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v12 )
  {
    TpWaitForTimer(v12, 1LL);
    TpReleaseTimer(v12);
  }
  if ( v13 )
  {
    TpSetTimer(v13, 0LL, 0LL, 0LL);
    TpWaitForTimer(v13, 1LL);
  }
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 984);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v40) < 0
      || (v18 = v40, v40 == -1LL) )
    {
      v18 = v17;
    }
    v40 = (v17 >> 1) + (v18 >> 1);
    HampUtilSaveHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, v40);
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 792), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v20 |= 2uLL;
    ++v20[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v21 = (__int64 *)(a1 + 816);
  v22 = *(_QWORD *)(a1 + 816);
  v23 = v22 + 1;
  v45 = v22 + 1;
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 852) )
    {
      RtlQueryUnbiasedInterruptTime(&v41);
      v24 = v41 / 0x2710 - *(_DWORD *)(a1 + 852);
    }
    else
    {
      v24 = 0;
    }
    if ( dword_1800DB218
      && (v25 = (const unsigned __int16 *)(a1 + 24),
          v37 = 130,
          PsmGetAumidFromKey(a1 + 24, &v37, v75),
          (unsigned int)dword_1800DB218 > 4)
      && (qword_1800DB228 & 0x400000000008LL) != 0
      && (qword_1800DB230 & 0x400000000008LL) == qword_1800DB230 )
    {
      v34 = (unsigned __int64)*(unsigned int *)(a1 + 664) >> 18;
      v36 = *(_BYTE *)(a1 + 560);
      v44 = *(_QWORD *)(a1 - 32);
      v73 = &v42;
      v26 = -1LL;
      v43 = v22;
      v27 = -1LL;
      v28 = v33;
      v42 = 0x1000000LL;
      v38 = a4;
      v39 = v24;
      v35 = a2;
      v74 = 8LL;
      do
        v16 = v75[++v27] == 0;
      while ( !v16 );
      v72 = 0;
      v71 = 2 * v27 + 2;
      v68 = &v43;
      v66 = &v34;
      v64 = &v38;
      v62 = &v39;
      v60 = &v33;
      v58 = &v35;
      v56 = &v36;
      v54 = &v44;
      v70 = v75;
      v69 = 8LL;
      v67 = 1LL;
      v65 = 4LL;
      v63 = 4LL;
      v61 = 4LL;
      v59 = 1LL;
      v57 = 1LL;
      v55 = 8LL;
      if ( a1 == -24 )
      {
        v25 = &word_1800B66C4;
        v29 = 2;
      }
      else
      {
        do
          v16 = v25[++v26] == 0;
        while ( !v16 );
        v29 = 2 * v26 + 2;
      }
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DB220;
      v52 = v29;
      EventDescriptor.Keyword = 0x400000000008LL;
      v51 = v25;
      v53 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800DB220;
      v48 = &unk_1800BFAA4;
      UserData.Reserved = 2;
      v49 = 173;
      v50 = 1;
      LODWORD(v40) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
    }
    else
    {
      v28 = v33;
    }
    if ( *(_DWORD *)(a1 + 560) == 2 && !*(_BYTE *)(a1 + 592) )
    {
      v32 = *(_QWORD *)(a1 + 792);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v32);
      *(_WORD *)(v32 + 616) = v28;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v32);
    }
    v23 = v45;
    v21 = (__int64 *)(a1 + 816);
  }
  else
  {
    v28 = v33;
    *a5 = 0;
  }
  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    if ( !*(_BYTE *)(a1 + 592) )
      HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(a1 + 1064), 3);
    HampAppTryChangeExecutionState(*(_QWORD *)(a1 + 792), 3u, *(_BYTE *)(a1 + 592));
  }
  HampHostInvalidateActivities((struct _RM_HAM_ACTIVITY_HOST *)a1, v28, v23, 0);
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 672) &= 0xFFFFFFFFFFFFFFE7uLL;
  *(_WORD *)(a1 + 664) = 0;
  v30 = *(_QWORD *)(a1 + 664) & 0x7FF5FFFFFC03FFFFLL;
  *v21 = v23;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_QWORD *)(a1 + 664) = v30 | 0x1940000;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_DWORD *)(a1 + 856) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(v21);
  v31 = *(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704);
  if ( v31 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704));
    HampDepGroupQueueWorker(v31);
    HampDepGroupReleaseLockExclusive(v31);
  }
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL));
}
