/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x14059E850
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x10);
}
