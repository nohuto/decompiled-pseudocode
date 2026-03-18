/*
 * XREFs of VfDriverLock @ 0x140ACA76C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CE1F8 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEEA0 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC2090 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4C8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA648 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA7A8 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACA964 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADA2B8 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADA47C (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADA734 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140ADAA44 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADAAE4 (VfSuspectDriversUnloadCallback.c)
 *     VfThunkAddDriverThunks @ 0x140ADAFAC (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140ADB050 (VfThunkAddSpecialDriverThunks.c)
 *     VfAddVerifierEntry @ 0x140ADD660 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADD818 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADD950 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B96D8C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B96F3C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B970A8 (VfTriageAddDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
