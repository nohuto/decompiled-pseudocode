/*
 * XREFs of VfDriverLock @ 0x140ACB73C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CE288 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEF30 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140AC3060 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACB618 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACB778 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140ACB934 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADB288 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADB44C (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140ADB704 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140ADBA14 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADBAB4 (VfSuspectDriversUnloadCallback.c)
 *     VfThunkAddDriverThunks @ 0x140ADBF7C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140ADC020 (VfThunkAddSpecialDriverThunks.c)
 *     VfAddVerifierEntry @ 0x140ADE630 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADE7E8 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADE920 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B97D8C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B97F3C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B980A8 (VfTriageAddDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
