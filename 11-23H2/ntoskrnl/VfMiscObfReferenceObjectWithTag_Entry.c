/*
 * XREFs of VfMiscObfReferenceObjectWithTag_Entry @ 0x140AE0650
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2A08 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscObfReferenceObjectWithTag_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
}
