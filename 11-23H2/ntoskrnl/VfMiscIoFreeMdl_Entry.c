/*
 * XREFs of VfMiscIoFreeMdl_Entry @ 0x140ADFCE0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2498 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfMiscIoFreeMdl_Entry(__int64 a1)
{
  ULONG_PTR v2; // r8
  char result; // al

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 8LL));
  v2 = *(_QWORD *)(a1 + 8);
  result = *(_WORD *)(v2 + 10) & 0x11;
  if ( result == 1 )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xB8uLL, v2, *(__int16 *)(v2 + 10), 0LL);
  return result;
}
