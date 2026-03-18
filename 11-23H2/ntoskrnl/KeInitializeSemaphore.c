/*
 * XREFs of KeInitializeSemaphore @ 0x1402B32F0
 * Callers:
 *     AlpcpInitializePort @ 0x140716728 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1407331E0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x140837B4C (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x14084F82C (PopFxInitializeWorkPool.c)
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
