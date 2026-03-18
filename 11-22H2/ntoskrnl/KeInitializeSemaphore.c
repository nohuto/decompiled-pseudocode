/*
 * XREFs of KeInitializeSemaphore @ 0x1402B32C0
 * Callers:
 *     AlpcpInitializePort @ 0x140716798 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1407336E0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x14083969C (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x14085070C (PopFxInitializeWorkPool.c)
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
