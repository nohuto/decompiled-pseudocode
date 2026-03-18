/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140345C80
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140310810 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  bool v11; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 33152);
  v8 = *(unsigned int *)(a2 + 80);
  v9 = v7 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v9;
  v10 = v8 + ((v7 * *(unsigned int *)(a1 + 33208)) >> 16);
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_QWORD *)(a1 + 33152) = v6;
  v11 = (*(_BYTE *)(a2 + 2) & 0xBE) == 0;
  *(_DWORD *)(a2 + 80) = v10;
  if ( !v11 )
    KiEndThreadAccountingPeriodEx(a1, a2, v7, a4);
  result = v9;
  if ( a3 )
    *a3 = v6;
  return result;
}
