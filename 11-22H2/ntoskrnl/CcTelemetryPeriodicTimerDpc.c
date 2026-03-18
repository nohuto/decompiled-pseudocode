/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1403D5420
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange(&dword_140C5FA74, 0);
  if ( !_InterlockedCompareExchange(&dword_140C5FA78, 1, 0) )
    ExQueueWorkItem(&stru_140C5FB00, NormalWorkQueue);
}
