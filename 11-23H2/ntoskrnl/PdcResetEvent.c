/*
 * XREFs of PdcResetEvent @ 0x1405B7A9C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8C40 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
