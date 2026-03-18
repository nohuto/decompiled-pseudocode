/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402BACF8
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiStartDebugAccumulation @ 0x14020E460 (KiStartDebugAccumulation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     KiCompleteDirectSwitchThread @ 0x1402B9BA8 (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403495E0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1403CDE14 (KiReduceByEffectiveIdleSmtSet.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x1402B2C90 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D40 (KiStartThreadCycleAccumulation.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3, 0);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
