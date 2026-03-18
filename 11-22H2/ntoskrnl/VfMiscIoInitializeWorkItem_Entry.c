/*
 * XREFs of VfMiscIoInitializeWorkItem_Entry @ 0x140AE0D00
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x1402BC7B0 (MmIsSessionAddress.c)
 *     IoSizeofWorkItem @ 0x140363D10 (IoSizeofWorkItem.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14046B520 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfMiscIoInitializeWorkItem_Entry(__int64 a1)
{
  ULONG v2; // eax
  ULONG_PTR v3; // rdi
  void *v4; // rbx
  BOOLEAN result; // al

  v2 = IoSizeofWorkItem();
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), v2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( MmIsSessionAddress(v3) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x130uLL, v3, 0LL, 0LL);
  v4 = *(void **)(a1 + 8);
  result = MmIsNonPagedSystemAddressValid(v4);
  if ( !result )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x131uLL, (ULONG_PTR)v4, 0LL, 0LL);
  return result;
}
