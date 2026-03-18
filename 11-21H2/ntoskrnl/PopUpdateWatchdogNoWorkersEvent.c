/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140256C68
 * Callers:
 *     PopSetWatchdog @ 0x140256998 (PopSetWatchdog.c)
 *     PopWatchdogWorker @ 0x1403A0B60 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403A1210 (PopWatchdogDpc.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
