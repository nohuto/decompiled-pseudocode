/*
 * XREFs of RaidUnitReleasePoFx @ 0x1C003BA00
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReleasePoFx(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
}
