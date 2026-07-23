/*
 * XREFs of sub_1402DDE58 @ 0x1402DDE58
 * Callers:
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall sub_1402DDE58(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
