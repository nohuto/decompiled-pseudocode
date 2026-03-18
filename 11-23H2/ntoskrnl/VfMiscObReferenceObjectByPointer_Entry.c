/*
 * XREFs of VfMiscObReferenceObjectByPointer_Entry @ 0x140AE0610
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2498 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int64 __fastcall VfMiscObReferenceObjectByPointer_Entry(__int64 a1)
{
  unsigned __int64 result; // rax
  ULONG_PTR v3; // r8

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v3 - 48) )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, v3, 1uLL, 0LL);
  return result;
}
