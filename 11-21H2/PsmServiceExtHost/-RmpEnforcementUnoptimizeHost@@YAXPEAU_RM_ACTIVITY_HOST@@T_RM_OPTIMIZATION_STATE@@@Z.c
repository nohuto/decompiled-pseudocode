/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000491C (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180006C08 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180006F34 (-HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000792C (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800079F4 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009DF4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000A1D8 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E0E8 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18003EAB8 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087790 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180093624 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, char a2)
{
  __int64 v2; // rsi
  char v5; // dl
  unsigned int IsForegroundBoostedOrPending; // r15d
  BOOL v7; // ebp
  BOOL v8; // r14d
  int v9; // ebp
  int ThreadInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 64;
  if ( (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  }
  if ( (a2 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1260) &= ~(a2 & 0x27);
  if ( (a2 & 8) != 0 )
  {
    HampHostWaitForInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( (*(_QWORD *)(v2 + 664) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1264) |= 8u;
      IsForegroundBoostedOrPending = HampHostIsForegroundBoostedOrPending((struct _RM_HAM_ACTIVITY_HOST *)v2);
      v7 = IsForegroundBoostedOrPending || HampUtilIsImportanceUserImpactful(*(_DWORD *)(v2 + 680));
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, v5);
      RmpReleaseGlobalLock();
      v8 = 0;
      if ( v7 )
        v8 = (int)RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
      if ( IsForegroundBoostedOrPending )
        v9 = RmpSystemPriorityBoostThreadBegin();
      else
        v9 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostedOrPending )
      {
        ThreadInformation = v9;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v8 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
      *(_DWORD *)(a1 + 1264) &= ~8u;
    }
    *(_DWORD *)(a1 + 1260) &= ~8u;
    *(_QWORD *)(v2 + 664) &= ~0x200000000000uLL;
    HampHostEndInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( a2 < 0 )
  {
    *(_QWORD *)(v2 + 672) |= 3uLL;
    *(_DWORD *)(a1 + 1264) = (*(_DWORD *)(a1 + 1264) | 0x80) ^ ((*(_WORD *)(a1 + 1264) | 0x80) ^ (unsigned __int16)*(_DWORD *)(a1 + 1260)) & 0x100;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, a2);
    RmpReleaseGlobalLock();
    if ( (int)RmpSystemChangePsmApplicationState((_QWORD *)a1, 0LL) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    HampHostChangeApplicationExecutionState(v2, 0LL, 1LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1264) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1260) &= 0xFFFFFE7F;
    *(_QWORD *)(v2 + 664) &= 0xFFFFFFFF1FFFFFFFuLL;
    if ( (*(_BYTE *)(v2 + 672) & 0x20) != 0 )
      HampPdcSignalWorker(
        (struct _HAM_PDC_CONTEXT *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 792) + 88LL)
                                                                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                           + 120)
                                               + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                  + 168),
        0);
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1264) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
    *(_DWORD *)(a1 + 1264) &= ~0x40u;
    *(_DWORD *)(a1 + 1260) &= ~0x40u;
  }
}
