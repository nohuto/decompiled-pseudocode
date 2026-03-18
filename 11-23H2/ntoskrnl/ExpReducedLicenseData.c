/*
 * XREFs of ExpReducedLicenseData @ 0x1407EAD40
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
