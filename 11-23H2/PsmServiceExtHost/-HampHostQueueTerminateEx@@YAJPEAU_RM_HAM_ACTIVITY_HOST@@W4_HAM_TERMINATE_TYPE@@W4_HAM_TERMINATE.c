/*
 * XREFs of ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180001F1C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000FA00 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003625C (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B798 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F2DC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x1800400F4 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180050180 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18006FD70 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007000C (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180073B3C (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180073E78 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x180074464 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F48C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180013D24 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017CDC (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18003B568 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003DB38 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800407E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18004BC88 (-HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F530 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007B5E0 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B998 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        int a5,
        int a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // esi
  int v9; // r13d
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  unsigned __int64 AppliedTaskCompletions; // rax
  unsigned __int64 v15; // rdx
  bool v16; // zf
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _HAM_ACTIVITY *NextActivity; // rbx
  char v22; // dl
  __int64 v23; // rcx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  unsigned int Pid; // r15d
  __int64 v29; // rcx
  int v30; // eax
  const unsigned __int16 *v31; // rcx
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  char v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37; // [rsp+41h] [rbp-BFh] BYREF
  char v38; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  const unsigned __int16 *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  __int64 *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  int *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  unsigned int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  unsigned int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int64 *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]

  v8 = 0;
  v9 = a5;
  v39 = a3;
  v12 = a2;
  v48 = a8;
  v40 = 0;
  if ( !a5 )
  {
    v40 = 1;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  v13 = *(_QWORD *)(a1 + 704);
  if ( a7 )
  {
    AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v16 = (AppliedTaskCompletions & *a7) == 0;
    *a7 &= AppliedTaskCompletions;
    if ( !v16 )
    {
      v17 = 0;
      v8 = -1058275328;
      goto LABEL_67;
    }
  }
  v18 = *(_QWORD *)(a1 + 664);
  v15 = (unsigned __int64)v18 >> 16;
  if ( (BYTE2(v18) & 3u) >= v12 )
  {
    if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v37 = v12;
      v36 = BYTE2(v18) & 3;
      v19 = 32LL;
      if ( a1 )
        v19 = a1 - 32;
      v41 = *(_QWORD *)v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v19,
        (unsigned int)&unk_1800BFED3,
        v18,
        (_DWORD)a4,
        (__int64)&v41,
        (__int64)&v37,
        (__int64)&v36);
    }
LABEL_66:
    v17 = 0;
    goto LABEL_67;
  }
  if ( (v18 & 0x800000000LL) != 0 || v18 < 0 )
  {
    if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v73 = 8LL;
      v34 = 32LL;
      if ( a1 )
        v34 = a1 - 32;
      v41 = *(_QWORD *)v34;
      v72 = &v41;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800BFC44, 0, 0, 3u, &v71);
    }
    goto LABEL_66;
  }
  v20 = *(_QWORD *)(a1 + 608);
  if ( v20 != a1 + 608 )
  {
    NextActivity = (struct _HAM_ACTIVITY *)(v20 - 96);
    if ( NextActivity )
    {
      do
      {
        if ( *((_BYTE *)NextActivity + 562) == 2 && *((_BYTE *)NextActivity + 563) > 4u )
          HampActMoveBackPendState(NextActivity);
        if ( HampActCanBeInvalidated(NextActivity) && v22 == 3 )
          HampActRequestStopForTerminate(v23, (unsigned int)v12, v39, a4);
        NextActivity = HampHostGetNextActivity(NextActivity);
      }
      while ( NextActivity );
      v9 = a5;
    }
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
  v25 = IsSuspendWaiter;
  LOWORD(IsSuspendWaiter) = v39;
  *(_QWORD *)(a1 + 664) |= (v12 & 3) << 16;
  *(_WORD *)(a1 + 664) = IsSuspendWaiter;
  *(_QWORD *)(a1 + 664) = *(_QWORD *)(a1 + 664) & 0xFFFFFFFFFC03FFFFuLL | ((unsigned __int64)HampHostComputeEffectivePriority(
                                                                                               (struct _RM_HAM_ACTIVITY_HOST *)a1,
                                                                                               0LL) << 18);
  RtlQueryUnbiasedInterruptTime(&v41);
  *(_DWORD *)(a1 + 852) = v41 / 0x2710;
  *(_DWORD *)(a1 + 856) = a6;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v25);
  if ( (_DWORD)v12 == 2 )
  {
    *(_QWORD *)(a1 + 664) |= 0x8000000000000uLL;
    if ( *(_DWORD *)(a1 + 656) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  else if ( HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)a1) && (*(_QWORD *)(a1 + 664) & 0x800000000LL) == 0 )
  {
    v26 = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
    v27 = 16LL;
    *(_QWORD *)(a1 + 664) |= 0x800000000uLL;
    if ( a1 )
      v27 = a1 - 48;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v27) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(a1 + 632));
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v26);
  }
  if ( a4 )
    Pid = HampClientGetPid(a4);
  else
    Pid = 0;
  if ( !*(_QWORD *)(a1 + 1056)
    && (int)TpAllocTimer(
              a1 + 1056,
              HampHostTerminateWatchdog,
              a1,
              (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + 120)
                         + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
            + 584) >= 0 )
  {
    v44 = -10000LL
        * *(unsigned int *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                   + 120)
                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                          + 680);
    TpSetTimer(*(_QWORD *)(a1 + 1056), &v44, 0LL, 0LL);
  }
  if ( v13 )
  {
    if ( v9 == 2 )
    {
      ++*(_QWORD *)(v13 + 112);
      v17 = 0;
      goto LABEL_48;
    }
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
    if ( v9 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
      v17 = 0;
    }
    else
    {
      v17 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v13, (unsigned __int64 *)(a1 + 624));
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
  }
  else
  {
    v17 = 0;
    if ( v9 == 2 )
      goto LABEL_48;
  }
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
LABEL_48:
  if ( (unsigned int)dword_1800DB218 > 4
    && (qword_1800DB228 & 0x400000000008LL) != 0
    && (qword_1800DB230 & 0x400000000008LL) == qword_1800DB230 )
  {
    v46 = *(_QWORD *)(a1 + 816);
    v29 = 624LL;
    if ( a1 )
      v29 = a1 + 560;
    v45 = 0x1000000LL;
    v38 = v12;
    v43 = Pid;
    v70 = 8LL;
    v30 = *(_DWORD *)v29;
    v31 = (const unsigned __int16 *)(a1 + 24);
    v42 = v30;
    v47 = *(_QWORD *)(a1 - 32);
    v69 = &v45;
    v67 = &v46;
    v65 = &v39;
    v63 = &v38;
    v61 = &v43;
    v59 = &v42;
    v57 = &v47;
    v68 = 8LL;
    v66 = 4LL;
    v64 = 1LL;
    v62 = 4LL;
    v60 = 4LL;
    v58 = 8LL;
    if ( a1 == -24 )
    {
      v31 = &word_1800B66B4;
      v33 = 2;
    }
    else
    {
      v32 = -1LL;
      do
        v16 = v31[++v32] == 0;
      while ( !v16 );
      v33 = 2 * v32 + 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v54 = v31;
    v55 = v33;
    EventDescriptor.Keyword = 0x400000000008LL;
    v56 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v51 = &unk_1800BF437;
    UserData.Reserved = 2;
    v52 = 129;
    v53 = 1;
    LODWORD(v41) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  if ( v40 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
    v40 = 0;
    if ( v17 )
    {
      v17 = 0;
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
    }
  }
LABEL_67:
  v16 = v40 == 0;
  *v48 = v17;
  if ( !v16 )
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
  return v8;
}
