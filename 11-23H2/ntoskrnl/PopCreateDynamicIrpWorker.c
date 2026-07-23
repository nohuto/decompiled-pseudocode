/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x140342038
 * Callers:
 *     PopIrpWorkerControl @ 0x1403B16C0 (PopIrpWorkerControl.c)
 *     PopRunMaximumIrpWorkers @ 0x140598FC4 (PopRunMaximumIrpWorkers.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140342D6C (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  int PowerThread; // esi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      return v3;
  }
  else
  {
    PowerThread = -1073741670;
  }
  if ( v4 )
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
  return (unsigned int)PowerThread;
}
