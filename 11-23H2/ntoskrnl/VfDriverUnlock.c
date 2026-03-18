/*
 * XREFs of VfDriverUnlock @ 0x140ACA890
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CE1F8 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEEA0 (VfDriverRemoveAllDifVerification.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B96D8C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B96F3C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B970A8 (VfTriageAddDrivers.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
