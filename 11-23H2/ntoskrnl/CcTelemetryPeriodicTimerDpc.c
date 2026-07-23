/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1403D5C60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange(&dword_140C5F9B4, 0);
  if ( !_InterlockedCompareExchange(&dword_140C5F9B8, 1, 0) )
    ExQueueWorkItem(&stru_140C5FA40, NormalWorkQueue);
}
