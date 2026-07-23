/*
 * XREFs of PopDeepSleepEnabled @ 0x14028E9D8
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140994384 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14099C670 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14099CAE4 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
