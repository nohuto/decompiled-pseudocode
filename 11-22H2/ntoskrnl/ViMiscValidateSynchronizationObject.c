/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140AE2700
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140AE0B10 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AE0B80 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140AE0BD0 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140AE0E40 (VfMiscKeInitializeEvent_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140AE0E60 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140AE0E80 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140AE0EA0 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE25E0 (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402BC7B0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14046B520 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViMiscValidateSynchronizationObject(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  BOOLEAN result; // al

  VfMiscCheckKernelAddress(BugCheckParameter2, a2);
  if ( MmIsSessionAddress(BugCheckParameter2) )
    VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, BugCheckParameter2, 0LL, 0LL);
  result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
  if ( !result )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, BugCheckParameter2, 0LL, 0LL);
  return result;
}
