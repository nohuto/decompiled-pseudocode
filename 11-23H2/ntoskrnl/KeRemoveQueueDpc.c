/*
 * XREFs of KeRemoveQueueDpc @ 0x14031F340
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14078E3C0 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EDB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14031F360 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
