/*
 * XREFs of PdcWaitForEvent @ 0x1409C8DBC
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8C40 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
