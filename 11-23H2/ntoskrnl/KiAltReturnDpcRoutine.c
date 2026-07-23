/*
 * XREFs of KiAltReturnDpcRoutine @ 0x140580790
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140C40CD8, CriticalWorkQueue);
}
