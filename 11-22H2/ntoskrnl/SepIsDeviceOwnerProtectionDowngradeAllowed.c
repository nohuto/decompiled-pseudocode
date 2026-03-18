/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405B8CA4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x1409C9BCC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
