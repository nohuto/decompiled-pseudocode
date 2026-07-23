/*
 * XREFs of sub_140557FF8 @ 0x140557FF8
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x1406DFB70 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

char sub_140557FF8()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = byte_140C548D8;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
