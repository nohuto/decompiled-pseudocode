/*
 * XREFs of PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x14098BB70
 * Callers:
 *     <none>
 * Callees:
 *     PopSpoilBatteryEstimate @ 0x140873A4C (PopSpoilBatteryEstimate.c)
 */

NTSTATUS PopSpoilEstimatesOnPowerStateTransitionWorker()
{
  return PopSpoilBatteryEstimate(1, 0);
}
