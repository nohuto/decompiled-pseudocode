/*
 * XREFs of sub_1402A3EF0 @ 0x1402A3EF0
 * Callers:
 *     sub_1402A3EAC @ 0x1402A3EAC (sub_1402A3EAC.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall sub_1402A3EF0(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = ++*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
