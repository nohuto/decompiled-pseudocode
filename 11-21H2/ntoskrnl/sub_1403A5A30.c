/*
 * XREFs of sub_1403A5A30 @ 0x1403A5A30
 * Callers:
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall sub_1403A5A30(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  byte_140C548D8 = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
