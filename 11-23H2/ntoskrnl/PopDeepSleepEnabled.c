/*
 * XREFs of PopDeepSleepEnabled @ 0x14028E748
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140994184 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14099C470 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099C8E4 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
