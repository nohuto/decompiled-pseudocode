/*
 * XREFs of KiAltReturnDpcRoutine @ 0x1405802A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140C40D58, CriticalWorkQueue);
}
