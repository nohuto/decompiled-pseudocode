/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x140410A5C
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
