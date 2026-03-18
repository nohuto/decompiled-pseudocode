/*
 * XREFs of PdcResetEvent @ 0x1405B75BC
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1409C8AF0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
