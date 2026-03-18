/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x14063B428
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140637BAC (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreDeletePartition @ 0x14065C038 (MiStoreDeletePartition.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x1402BE6D0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 984), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
