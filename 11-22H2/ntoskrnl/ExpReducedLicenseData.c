/*
 * XREFs of ExpReducedLicenseData @ 0x1407EB2C0
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
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
