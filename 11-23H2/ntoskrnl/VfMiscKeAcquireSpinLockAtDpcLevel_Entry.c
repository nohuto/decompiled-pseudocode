/*
 * XREFs of VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x1405D2A70
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2A08 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeAcquireSpinLockAtDpcLevel_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
}
