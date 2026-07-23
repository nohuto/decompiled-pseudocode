/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x1403A3A70
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848C30 (SleepstudyHelperCreateLibrary.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
