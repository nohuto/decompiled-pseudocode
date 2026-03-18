/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x1402B2C90
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402392E0 (KiChooseTargetProcessor.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BACF8 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiIdleSchedule @ 0x140307420 (KiIdleSchedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140329E48 (KeUpdateTotalCyclesCurrentThread.c)
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     KiSelectIdleProcessor @ 0x1405776B4 (KiSelectIdleProcessor.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140248450 (KiEndThreadAccountingPeriodEx.c)
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
