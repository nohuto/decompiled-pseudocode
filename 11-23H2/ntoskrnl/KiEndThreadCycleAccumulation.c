/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x1402B2F20
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402393B0 (KiChooseTargetProcessor.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BAF88 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiIdleSchedule @ 0x1403076B0 (KiIdleSchedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14032A0D8 (KeUpdateTotalCyclesCurrentThread.c)
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiSelectIdleProcessor @ 0x140577BA4 (KiSelectIdleProcessor.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int8 a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v7 = __rdtsc();
  v8 = v7 - *(_QWORD *)(a1 + 33152);
  v9 = v8 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v9;
  v10 = *(unsigned int *)(a1 + 33208);
  v11 = *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a1 + 33152) = v7;
  v12 = v11 + ((v8 * v10) >> 16);
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  v13 = (*(_BYTE *)(a2 + 2) & 0xBE) == 0;
  *(_DWORD *)(a2 + 80) = v12;
  if ( !v13 )
    KiEndThreadAccountingPeriodEx(a1, a2, v8, a4);
  result = v9;
  if ( a3 )
    *a3 = v7;
  return result;
}
