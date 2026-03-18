/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry @ 0x140AA3FF0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AA568C (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry(__int64 a1)
{
  __int64 v2; // rcx

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
  LOBYTE(v2) = 12;
  return ViMiscCheckKeRaiseIrql(v2);
}
