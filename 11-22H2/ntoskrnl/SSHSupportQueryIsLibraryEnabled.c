/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x1403A2530
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     SleepstudyHelperCreateLibrary @ 0x140849A10 (SleepstudyHelperCreateLibrary.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
