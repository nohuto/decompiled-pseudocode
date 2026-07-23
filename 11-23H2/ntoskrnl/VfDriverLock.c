/*
 * XREFs of VfDriverLock @ 0x140ACA75C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CE768 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CF410 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC2080 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA638 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA798 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACA954 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADA2A8 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADA46C (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADA724 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140ADAA34 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADAAD4 (VfSuspectDriversUnloadCallback.c)
 *     VfThunkAddDriverThunks @ 0x140ADAF9C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140ADB040 (VfThunkAddSpecialDriverThunks.c)
 *     VfAddVerifierEntry @ 0x140ADD650 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADD808 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADD940 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B96D8C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B96F3C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B970A8 (VfTriageAddDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
