/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1403703F0
 * Callers:
 *     PopSetWatchdog @ 0x1403700AC (PopSetWatchdog.c)
 *     PopWatchdogWorker @ 0x1403D62A0 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D6A10 (PopWatchdogDpc.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
