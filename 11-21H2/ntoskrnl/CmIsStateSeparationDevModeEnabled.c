/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x140865320
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return CmStateSeparationDevMode != 0;
}
