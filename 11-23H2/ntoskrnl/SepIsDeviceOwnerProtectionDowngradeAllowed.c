/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405B8C14
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x1409C9B1C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
