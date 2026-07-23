/*
 * XREFs of HalpAcpiPopulateTableCache @ 0x140B6544C
 * Callers:
 *     HalpAcpiInitSystem @ 0x140A90A80 (HalpAcpiInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCache(__int64 a1)
{
  unsigned int v1; // ebx
  struct _WORK_QUEUE_ITEM *v2; // rax

  v1 = 0;
  HalpPiix4Detected.Header.Size = 6;
  LOWORD(HalpPiix4Detected.Header.Lock) = 0;
  HalpPiix4Detected.Header.SignalState = 0;
  HalpPiix4Detected.Header.WaitListHead.Blink = &HalpPiix4Detected.Header.WaitListHead;
  HalpPiix4Detected.Header.WaitListHead.Flink = &HalpPiix4Detected.Header.WaitListHead;
  v2 = (struct _WORK_QUEUE_ITEM *)HalpMmAllocCtxAlloc(a1, 32LL);
  if ( v2 )
  {
    v2->Parameter = v2;
    v2->WorkerRoutine = (void (__fastcall *)(void *))HalpAcpiPopulateTableCacheWork;
    v2->List.Flink = 0LL;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
