/*
 * XREFs of HvlQueryHvHwpPerfSupport @ 0x140546D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlQueryHvHwpPerfSupport()
{
  return HvlpRootSchedulerEnabled == 0;
}
