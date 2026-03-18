/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x1403A3890
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848930 (SleepstudyHelperCreateLibrary.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
