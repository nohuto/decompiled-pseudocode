/*
 * XREFs of VfMiscKeReleaseQueuedSpinLock_Entry @ 0x140AA4270
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeLowerIrql @ 0x140AA55E8 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseQueuedSpinLock_Entry(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  LOBYTE(a1) = KeGetCurrentIrql();
  return ViMiscCheckKeLowerIrql(a1, a2);
}
