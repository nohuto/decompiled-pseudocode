/*
 * XREFs of ExpReducedLicenseData @ 0x1407EB010
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
