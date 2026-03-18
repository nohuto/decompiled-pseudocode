/*
 * XREFs of VfDriverUnlock @ 0x140A89E7C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405FDEC0 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405FEBA0 (VfDriverRemoveAllDifVerification.c)
 *     VfTriageAddDrivers @ 0x140B53724 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B53B88 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B53D38 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
