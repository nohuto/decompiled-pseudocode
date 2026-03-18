/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBD0 (KeAreInterruptsEnabled.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2498 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry(__int64 a1)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    result = KeAreInterruptsEnabled();
    if ( result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  }
  return result;
}
