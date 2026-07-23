/*
 * XREFs of KeRemoveQueueDpc @ 0x14024E180
 * Callers:
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
