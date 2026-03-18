/*
 * XREFs of VfMiscObfDereferenceObject_Entry @ 0x140AA4290
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscObfDereferenceObject_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
}
