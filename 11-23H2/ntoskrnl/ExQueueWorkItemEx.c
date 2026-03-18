/*
 * XREFs of ExQueueWorkItemEx @ 0x14030B2B0
 * Callers:
 *     KeTerminateThread @ 0x14030A568 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140367EE0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1403696C0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B76A0 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B7E80 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B954C (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
