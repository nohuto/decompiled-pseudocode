/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405B9184
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x1409C9D1C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
