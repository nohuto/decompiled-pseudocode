/*
 * XREFs of MiInSwapStore @ 0x1406EBCCC
 * Callers:
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     MiInSwapStoreContextDereference @ 0x1406EBE54 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  char *Pool; // rax
  ULONG_PTR v3; // rbx
  __int64 ProcessPartition; // rax
  int v5; // r8d

  Pool = (char *)MiAllocatePool(64, 0x48uLL, 0x73536D4Du);
  v3 = (ULONG_PTR)Pool;
  if ( !Pool )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(Pool + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = MiInSwapStoreWorker;
  *(_QWORD *)(v3 + 24) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *(_QWORD *)(v3 + 32) = Object;
  *(_DWORD *)(v3 + 64) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  ProcessPartition = MiGetProcessPartition((__int64)Object);
  ExQueueWorkItemToPartition(v3, v5 + 32, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 176));
  KeWaitForSingleObject((PVOID)(v3 + 40), WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
