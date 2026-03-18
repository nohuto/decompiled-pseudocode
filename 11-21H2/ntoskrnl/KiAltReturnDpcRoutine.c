/*
 * XREFs of KiAltReturnDpcRoutine @ 0x14057C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2A798, CriticalWorkQueue);
}
