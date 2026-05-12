/*
 * XREFs of RaidUnitPowerCycleCheck @ 0x1C004D4F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00047A0 (RaidUnitAdaptiveIdleTimeout.c)
 */

void __fastcall RaidUnitPowerCycleCheck(__int64 a1, __int64 a2)
{
  RaidUnitAdaptiveIdleTimeout(a2);
}
