/*
 * XREFs of ExpQueueWorkItemNode @ 0x1402EF254
 * Callers:
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 * Callees:
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402EF2BC (ExpPartitionCreateThreadIfNecessary.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 */

__int64 __fastcall ExpQueueWorkItemNode(__int64 a1, int a2, int a3, unsigned __int16 *a4, int a5)
{
  __int64 v7; // rbx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5);
  if ( (v7 & 1) != 0 )
    v7 = 0LL;
  KeInsertPriQueue(v7, a2, a3, (_DWORD)a4, 0);
  return ExpPartitionCreateThreadIfNecessary(a1, a4, v7);
}
