/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140345AA0
 * Callers:
 *     KiReduceByEffectiveIdleSmtSet @ 0x14023B2A0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1402481DC (KeUpdateTotalCyclesCurrentThread.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KiStartDebugAccumulation @ 0x14029B8BC (KiStartDebugAccumulation.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x14035B090 (KiCompleteDirectSwitchThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035EF6C (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  bool v11; // zf

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
    KiEndThreadAccountingPeriodEx(a1, a2, v7, 0LL);
  if ( a3 )
    *a3 = v6;
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v9;
}
