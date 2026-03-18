/*
 * XREFs of VfMiscKeReleaseMutant_Entry @ 0x140ADFFE0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D2498 (VfMiscCheckKernelAddress.c)
 */

unsigned __int64 __fastcall VfMiscKeReleaseMutant_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 0x38uLL);
}
