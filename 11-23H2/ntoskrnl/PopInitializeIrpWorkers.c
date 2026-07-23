/*
 * XREFs of PopInitializeIrpWorkers @ 0x140B717D4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopCreatePowerThread @ 0x140342D6C (PopCreatePowerThread.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C34B0 (ExInitializeNPagedLookasideListInternal.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  int v1; // ebx

  PopCreateIrpWorkerAllowed = 1;
  qword_140C3A4E8 = (__int64)&PopIrpThreadList;
  PopIrpThreadList = (__int64)&PopIrpThreadList;
  qword_140C3CD28 = (__int64)&PopIrpWorkerList;
  PopIrpWorkerList = (__int64)&PopIrpWorkerList;
  qword_140C3CD50 = (__int64)&qword_140C3CD48;
  qword_140C3CD48 = (__int64)&qword_140C3CD48;
  PopIrpWorkerControlEvent.Header.WaitListHead.Blink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Flink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Blink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Flink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerCount = 0;
  PopIrpWorkerInFlightCount = 0;
  PopIrpWorkerPendingCount = 0;
  PopIrpWorkerRequested = 0;
  PopIrpWorkerSemaphore = 5;
  byte_140C3CD42 = 8;
  dword_140C3CD44 = 0;
  dword_140C3CD58 = 0x7FFFFFFF;
  LOWORD(PopIrpWorkerControlEvent.Header.Lock) = 1;
  PopIrpWorkerControlEvent.Header.Size = 6;
  PopIrpWorkerControlEvent.Header.SignalState = 0;
  PopIrpWorkerMutex.Count = 1;
  PopIrpWorkerMutex.Owner = 0LL;
  PopIrpWorkerMutex.Contention = 0;
  LOWORD(PopIrpWorkerMutex.Event.Header.Lock) = 1;
  PopIrpWorkerMutex.Event.Header.Size = 6;
  PopIrpWorkerMutex.Event.Header.SignalState = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&PopDynamicIrpWorkerLookaside, 0LL, 0LL, 512, 8, 1917415248, 0, 0);
  result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorkerControl, 0LL);
  if ( result >= 0 )
  {
    PopIrpWorkerPendingCount = 2;
    v1 = 0;
    while ( 1 )
    {
      result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorker, 0LL);
      if ( result < 0 )
        break;
      if ( (unsigned int)++v1 >= 2 )
        return 0;
    }
  }
  return result;
}
