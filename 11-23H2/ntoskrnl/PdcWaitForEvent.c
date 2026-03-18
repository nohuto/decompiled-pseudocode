/*
 * XREFs of PdcWaitForEvent @ 0x1409C8BBC
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8A40 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
