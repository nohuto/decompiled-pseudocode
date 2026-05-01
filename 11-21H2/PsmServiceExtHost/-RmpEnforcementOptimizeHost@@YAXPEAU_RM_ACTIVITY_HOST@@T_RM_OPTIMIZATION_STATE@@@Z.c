/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005770 (-RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180006C08 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180007B84 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009DF4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000A1D8 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003ABA0 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AC94 (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18003CE2C (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003D0C4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D18C (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003D660 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E6B0 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180051B14 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x180073248 (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A020 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087790 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800877F0 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180093624 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int updated; // ebx
  unsigned int v6; // edx
  int v7; // ebx
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // edx
  struct _HAM_DEPENDENCY_GROUP *v13; // rbx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v15; // ebx
  unsigned int v16; // eax
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 v21; // [rsp+B8h] [rbp+50h] BYREF

  v2 = a2;
  v3 = a1 + 64;
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
    goto LABEL_37;
  }
  if ( (a2 & 0x80u) == 0LL )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1264) |= 0x100u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      if ( (int)RmpSystemChangePsmApplicationState((_QWORD *)a1, 2LL) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
      HampHostChangeApplicationExecutionState(v3, 2u, 1LL);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1264) &= ~0x100u;
      *(_DWORD *)(a1 + 1260) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1264) |= 0x40u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
      RmpReleaseGlobalLock();
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1264) &= ~0x40u;
      *(_DWORD *)(a1 + 1260) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 728) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1260) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1264) |= 8u;
        CempLockTrackerMarkReleased(HampLockTrackerId, a2, 1LL);
        *(_DWORD *)(v3 + 8) = 0;
        RtlReleaseSRWLockExclusive(v3);
        RmpReleaseGlobalLock();
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1);
        RmpAcquireGlobalLock();
        CempLockTrackerMarkAcquired(HampLockTrackerId);
        RtlAcquireSRWLockExclusive(v3);
        *(_DWORD *)(v3 + 8) = GetCurrentThreadId();
        *(_DWORD *)(a1 + 1260) |= 8u;
        *(_DWORD *)(a1 + 1264) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v3 + 664) |= 0x200000000000uLL;
      }
    }
    else
    {
      v15 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1264) |= v15;
        NtClearEvent(*(HANDLE *)(a1 + 1320));
        if ( !*(_DWORD *)(a1 + 1336) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v15);
            v16 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1264) &= ~v15;
            if ( v16 )
              *(_DWORD *)(a1 + 1260) |= v15;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1264) &= ~v15;
        }
      }
    }
    return;
  }
  HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), &v19, &v18);
  if ( v19 )
    return;
  *(_DWORD *)(a1 + 1264) |= 0x80u;
  *(_QWORD *)(v3 + 664) = *(_QWORD *)(v3 + 664) & 0xFFFFBFFF1FFFFFFFuLL | 0x20000000;
  *(_QWORD *)(v3 + 684) = 0LL;
  HampHostIssueStopRequests(v3, 1LL, 10LL, 0LL, 0, 0, 4, 0LL);
  v7 = HampHostComputeWaitType(v3);
  if ( v7 == 2 )
    v8 = *(_QWORD *)(v3 + 816);
  else
    v8 = 0LL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v6);
  RmpReleaseGlobalLock();
  if ( !v7 )
  {
    v9 = 5000LL;
    goto LABEL_18;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      HampUtilQueryDesktopWindowCloseTimeout(&v19);
      goto LABEL_17;
    }
    if ( v7 != 3 )
    {
      v9 = 0LL;
      goto LABEL_18;
    }
  }
  HampUtilQueryQuiesceTimeouts(&v19, 0LL);
LABEL_17:
  v9 = v19;
LABEL_18:
  v20 = v9;
  v17[0] = 0LL;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  *(_DWORD *)(v3 + 688) = v20;
  RtlQueryUnbiasedInterruptTime(&v21);
  v10 = v21 / 0x2710;
  *(_DWORD *)(v3 + 684) = v21 / 0x2710;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v10);
  RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v3, v20, *(void **)(v3 + 808));
  if ( *(_DWORD *)(v3 + 560) == 2 && !*(_BYTE *)(v3 + 592) )
    HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v3 + 1056), 1);
  switch ( v7 )
  {
    case 1:
      goto LABEL_22;
    case 2:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v3);
      break;
    case 3:
      HampHostDesktopWindowMessageWorkerArm((struct _RM_HAM_ACTIVITY_HOST *)v3);
      TpWaitForWork(*(_QWORD *)(v3 + 648), 0LL);
LABEL_22:
      RmpEnforcementQuiescePsmApplication((struct _RM_ACTIVITY_HOST *)a1);
      break;
  }
  HampHostChangeApplicationExecutionState(v3, 1u, 0LL);
  RmHamHostStateWorkerWaitForQuiesce(v3, &v20, v17, v8, v7);
  if ( v18 )
    HampHostEndQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( *(char *)(a1 + 1260) >= 0 )
  {
    IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v3, v11);
    *(_DWORD *)(a1 + 1264) &= ~0x80u;
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v3, IsSuspendWaiter);
  }
  *(_QWORD *)(v3 + 664) &= ~0x400000000000000uLL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v11);
  RmpReleaseGlobalLock();
  RmpAcquireGlobalLock();
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
    *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 3232LL),
    (struct _RM_ACTIVITY_HOST *)a1);
  SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  v13 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( v13 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, v12);
    RmpReleaseGlobalLock();
    HampDepGroupRunStateChangeWorker(v13);
    RmpAcquireGlobalLock();
LABEL_37:
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  }
}
