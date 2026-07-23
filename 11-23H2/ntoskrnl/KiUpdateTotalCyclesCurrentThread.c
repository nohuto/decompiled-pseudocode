/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402BAF88
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiStartDebugAccumulation @ 0x14020E460 (KiStartDebugAccumulation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     KiCompleteDirectSwitchThread @ 0x1402B9E38 (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349CFC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1403CDFF4 (KiReduceByEffectiveIdleSmtSet.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2FD0 (KiStartThreadCycleAccumulation.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3, 0);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
