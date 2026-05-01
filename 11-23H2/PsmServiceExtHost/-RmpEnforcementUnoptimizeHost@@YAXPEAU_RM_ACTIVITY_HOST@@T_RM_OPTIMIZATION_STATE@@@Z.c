/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180017480 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800177C0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017968 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017BC4 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C2C (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180018710 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003D7F8 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18003DCD4 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800851B4 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008EDA0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  int IsForegroundBoostedOrPending; // r15d
  int v7; // ecx
  BOOL v8; // ebp
  BOOL v9; // r14d
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int ThreadInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 64;
  if ( (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  }
  if ( (a2 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1268) &= ~(a2 & 0x27);
  if ( (a2 & 8) != 0 )
  {
    HampHostWaitForInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( (*(_QWORD *)(v2 + 664) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 8u;
      IsForegroundBoostedOrPending = HampHostIsForegroundBoostedOrPending((struct _RM_HAM_ACTIVITY_HOST *)v2);
      v8 = 1;
      if ( !IsForegroundBoostedOrPending )
      {
        v7 = *(_DWORD *)(v2 + 680);
        if ( (v7 & 0x40) == 0 && (v7 & 0xEu) < 8 )
          v8 = 0;
      }
      CempLockTrackerMarkReleased(HampLockTrackerId, v5, 1LL);
      *(_DWORD *)(v2 + 8) = 0;
      RtlReleaseSRWLockExclusive(v2);
      RmpReleaseGlobalLock();
      v9 = 0;
      if ( v8 )
        v9 = RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
      if ( IsForegroundBoostedOrPending )
        v10 = RmpSystemPriorityBoostThreadBegin();
      else
        v10 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostedOrPending )
      {
        ThreadInformation = v10;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v9 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
      RmpAcquireGlobalLock();
      CempLockTrackerMarkAcquired(HampLockTrackerId);
      RtlAcquireSRWLockExclusive(v2);
      *(_DWORD *)(v2 + 8) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 1272) &= ~8u;
    }
    *(_DWORD *)(a1 + 1268) &= ~8u;
    *(_QWORD *)(v2 + 664) &= ~0x200000000000uLL;
    HampHostEndInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( a2 < 0 )
  {
    v11 = *(_QWORD *)(v2 + 672);
    v12 = 1LL;
    v13 = 2LL;
    do
    {
      v11 |= v12++;
      --v13;
    }
    while ( v13 );
    *(_QWORD *)(v2 + 672) = v11;
    *(_DWORD *)(a1 + 1272) |= 0x80u;
    *(_DWORD *)(a1 + 1272) ^= (*(_DWORD *)(a1 + 1268) ^ *(_DWORD *)(a1 + 1272)) & 0x100;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    RmpReleaseGlobalLock();
    if ( (int)RmpSystemChangePsmApplicationState((_QWORD *)a1, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    HampHostChangeApplicationExecutionState(v2, 0, 1LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1272) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1268) &= 0xFFFFFE7F;
    *(_QWORD *)(v2 + 664) &= 0xFFFFFFFF1FFFFFFFuLL;
    if ( (*(_BYTE *)(v2 + 672) & 0x20) != 0 )
      HampPdcSignalWorker(
        (struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 792) + 88LL)
                                                                               + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                  + 120)
                                                      + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                         + 168),
        0);
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1272) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1272) &= ~0x40u;
    *(_DWORD *)(a1 + 1268) &= ~0x40u;
  }
}
