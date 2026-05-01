/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005DD4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013158 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180013304 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014438 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800144F4 (-RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180017480 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180017628 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800177C0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018710 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E370 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18003634C (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180036858 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800535D0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180055BD4 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F480 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F4E8 (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18007085C (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800851B4 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180085214 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008EDA0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edx
  BOOL IsSuspendWaiter; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  struct _HAM_DEPENDENCY_GROUP *v16; // rbx
  __int64 *Value; // rax
  __int64 v18; // rcx
  int updated; // r12d
  DWORD v21; // r15d
  _QWORD *v22; // rbx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-28h]
  __int64 v26[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v3 = a1 + 64;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
LABEL_4:
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    return;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 0x100u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      if ( (int)RmpSystemChangePsmApplicationState((_QWORD *)a1, 2) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
      HampHostChangeApplicationExecutionState(v3, 2u, 1LL);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1272) &= ~0x100u;
      *(_DWORD *)(a1 + 1268) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 0x40u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1272) &= ~0x40u;
      *(_DWORD *)(a1 + 1268) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 728) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1268) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1272) |= 8u;
        if ( HampLockTrackerId != -1 )
        {
          Value = (__int64 *)TlsGetValue(HampLockTrackerId);
          v18 = *Value;
          if ( (*Value & 2) == 0 )
            __int2c();
          if ( Value[2]-- == 1 )
            *Value = v18 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        *(_DWORD *)(v3 + 8) = 0;
        RtlReleaseSRWLockExclusive(v3);
        RmpReleaseGlobalLock();
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1);
        RmpAcquireGlobalLock();
        v21 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v22 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v22 |= 2uLL;
          ++v22[2];
        }
        RtlAcquireSRWLockExclusive(v3);
        *(_DWORD *)(v3 + 8) = GetCurrentThreadId();
        *(_DWORD *)(a1 + 1268) |= 8u;
        *(_DWORD *)(a1 + 1272) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v3 + 664) |= 0x200000000000uLL;
      }
    }
    else
    {
      v23 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1272) |= v23;
        NtClearEvent(*(HANDLE *)(a1 + 1328));
        if ( !*(_DWORD *)(a1 + 1344) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v23);
            v24 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1272) &= ~v23;
            if ( v24 )
              *(_DWORD *)(a1 + 1268) |= v23;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1272) &= ~v23;
        }
      }
    }
    return;
  }
  HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), &v28, &v27);
  if ( v28 )
    return;
  *(_DWORD *)(a1 + 1272) |= 0x80u;
  *(_QWORD *)(v3 + 664) = *(_QWORD *)(v3 + 664) & 0xFFFFBFFF1FFFFFFFuLL | 0x20000000;
  *(_QWORD *)(v3 + 684) = 0LL;
  HampHostIssueStopRequests(v3, 1u, 0xAu, 0, 0, 0, 4, 0LL, v25, 0LL);
  v5 = HampHostComputeWaitType((struct _RM_HAM_ACTIVITY_HOST *)v3);
  v6 = v5;
  v7 = v5;
  if ( v5 && (v7 = v5 - 1, v5 != 1) && ((v7 = v5 - 2, v5 == 2) || (v7 = v5 - 3, v5 == 3)) )
    v8 = *(_QWORD *)(v3 + 816);
  else
    v8 = 0LL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v7);
  RmpReleaseGlobalLock();
  switch ( v6 )
  {
    case 0u:
      v9 = 5000LL;
      goto LABEL_23;
    case 1u:
      goto LABEL_21;
    case 2u:
    case 3u:
      HampUtilQueryDesktopWindowCloseTimeout(&v28);
LABEL_20:
      v9 = v28;
      goto LABEL_23;
    case 4u:
LABEL_21:
      HampUtilQueryQuiesceTimeouts(&v28, 0LL);
      goto LABEL_20;
  }
  v9 = 0LL;
LABEL_23:
  v29 = v9;
  v26[0] = 0LL;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  *(_DWORD *)(v3 + 688) = v29;
  RtlQueryUnbiasedInterruptTime(&v30);
  v10 = v30 / 0x2710;
  *(_DWORD *)(v3 + 684) = v30 / 0x2710;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v10);
  RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v3, v29, *(void **)(v3 + 808));
  if ( *(_DWORD *)((a1 & -(__int64)(v3 != 0)) + 0x270) == 2 && !*(_BYTE *)(v3 + 592) )
    HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v3 + 1064), 1);
  if ( v6 == 1 )
  {
LABEL_30:
    RmpEnforcementQuiescePsmApplication((struct _RM_ACTIVITY_HOST *)a1);
    goto LABEL_31;
  }
  if ( v6 != 2 )
  {
    if ( v6 != 4 )
      goto LABEL_31;
    HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v3);
    TpWaitForWork(*(_QWORD *)(v3 + 648), 0LL);
    goto LABEL_30;
  }
  HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v3);
LABEL_31:
  HampHostChangeApplicationExecutionState(v3, 1u, 0LL);
  RmHamHostStateWorkerWaitForQuiesce(v3, &v29, v26, v8, v6);
  if ( v27 )
    HampHostEndQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( (*(_BYTE *)(a1 + 1268) & 0x80) == 0 )
  {
    IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v3, v11);
    *(_DWORD *)(a1 + 1272) &= ~0x80u;
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v3, IsSuspendWaiter, v13, v14);
  }
  *(_QWORD *)(v3 + 664) &= ~0x400000000000000uLL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v11);
  RmpReleaseGlobalLock();
  RmpAcquireGlobalLock();
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
    *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 3536LL),
    (struct _RM_ACTIVITY_HOST *)a1);
  SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  v16 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( v16 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v15);
    RmpReleaseGlobalLock();
    HampDepGroupRunStateChangeWorker(v16);
    RmpAcquireGlobalLock();
    goto LABEL_4;
  }
}
