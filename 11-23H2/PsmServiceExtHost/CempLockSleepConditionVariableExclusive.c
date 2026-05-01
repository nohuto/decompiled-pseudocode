/*
 * XREFs of CempLockSleepConditionVariableExclusive @ 0x180013B3C
 * Callers:
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180013304 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017C8C (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A040 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180032170 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B534 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800535D0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F27C (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x180070414 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z @ 0x180085AC4 (-RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockSleepConditionVariableExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  *(_DWORD *)(a1 + 8) = 0;
  v4 = RtlSleepConditionVariableSRW(a2, a1, a3, 0LL);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  return v4;
}
