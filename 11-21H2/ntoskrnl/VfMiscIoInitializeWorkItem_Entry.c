/*
 * XREFs of VfMiscIoInitializeWorkItem_Entry @ 0x140AA3EB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSizeofWorkItem @ 0x1402492D0 (IoSizeofWorkItem.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14045BA00 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfMiscIoInitializeWorkItem_Entry(__int64 a1)
{
  ULONG v2; // eax
  void *v3; // rbx
  BOOLEAN result; // al

  v2 = IoSizeofWorkItem();
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), v2);
  v3 = *(void **)(a1 + 8);
  if ( MmIsSessionAddress((__int64)v3) )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x130uLL, (ULONG_PTR)v3, 0LL, 0LL);
    v3 = *(void **)(a1 + 8);
  }
  result = MmIsNonPagedSystemAddressValid(v3);
  if ( !result )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x131uLL, (ULONG_PTR)v3, 0LL, 0LL);
  return result;
}
