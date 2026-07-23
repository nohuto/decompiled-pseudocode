/*
 * XREFs of PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x14098BD70
 * Callers:
 *     <none>
 * Callees:
 *     PopSpoilBatteryEstimate @ 0x140873C8C (PopSpoilBatteryEstimate.c)
 */

NTSTATUS PopSpoilEstimatesOnPowerStateTransitionWorker()
{
  return PopSpoilBatteryEstimate(1, 0);
}
