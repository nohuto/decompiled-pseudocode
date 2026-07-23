/*
 * XREFs of VfMiscKeSetEvent_Entry @ 0x140AE00C0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2A08 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeSetEvent_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x18uLL);
}
