/*
 * XREFs of VfMiscKeRemoveQueueDpc_Entry @ 0x140AA4320
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeRemoveQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x40uLL);
}
