/*
 * XREFs of PdcResetEvent @ 0x1405B752C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8A40 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
