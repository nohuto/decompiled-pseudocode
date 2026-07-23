/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140370590
 * Callers:
 *     PopSetWatchdog @ 0x14037024C (PopSetWatchdog.c)
 *     PopWatchdogWorker @ 0x1403D6480 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D6BF0 (PopWatchdogDpc.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
