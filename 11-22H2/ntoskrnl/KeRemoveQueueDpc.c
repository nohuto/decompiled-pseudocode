/*
 * XREFs of KeRemoveQueueDpc @ 0x14031EED0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14031EEF0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
