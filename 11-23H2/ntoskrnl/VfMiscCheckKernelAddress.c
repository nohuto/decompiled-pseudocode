/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1405D2498
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x1405D2500 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140AC0850 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD5A30 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD5D1C (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140ADFCE0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADFD30 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDC0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140ADFE30 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140ADFF10 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140ADFFE0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140AE0020 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AE0040 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140AE00B0 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140AE00D0 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE0110 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140AE0540 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140AE05F0 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AE0610 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140AE0660 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE1730 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int64 __fastcall VfMiscCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax

  result = BugCheckParameter2 + BugCheckParameter3 - 1;
  if ( !BugCheckParameter3 )
    result = BugCheckParameter2;
  if ( result >= BugCheckParameter2 )
  {
    result = BugCheckParameter3 + BugCheckParameter2 - 1;
    if ( !BugCheckParameter3 )
      result = BugCheckParameter2;
    if ( result <= 0x7FFFFFFEFFFFLL )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  return result;
}
