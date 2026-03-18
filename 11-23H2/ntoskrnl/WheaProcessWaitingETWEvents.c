/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x140613100
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612F74 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F40 (WheapProcessWaitingETWEvents.c)
 */

void WheaProcessWaitingETWEvents()
{
  if ( KeGetCurrentIrql() )
  {
    if ( WheaFlushETWEventsInitialized )
      WheaFlushETWEventsAddWorkRtn();
  }
  else
  {
    WheapProcessWaitingETWEvents();
  }
}
