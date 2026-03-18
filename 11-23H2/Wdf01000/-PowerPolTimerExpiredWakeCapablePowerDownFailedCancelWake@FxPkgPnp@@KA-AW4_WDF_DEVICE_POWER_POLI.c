/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C520
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C007D094 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelWaitWake(This) != 0 ? 1472 : 1354;
}
