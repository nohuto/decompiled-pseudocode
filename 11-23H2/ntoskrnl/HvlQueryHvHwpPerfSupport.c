/*
 * XREFs of HvlQueryHvHwpPerfSupport @ 0x140547400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlQueryHvHwpPerfSupport()
{
  return HvlpRootSchedulerEnabled == 0;
}
