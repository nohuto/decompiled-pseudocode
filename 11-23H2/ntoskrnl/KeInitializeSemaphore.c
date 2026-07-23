/*
 * XREFs of KeInitializeSemaphore @ 0x1402B3580
 * Callers:
 *     AlpcpInitializePort @ 0x140716928 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1407333D0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x140837E4C (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x14084FB2C (PopFxInitializeWorkPool.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Limit = Limit;
}
