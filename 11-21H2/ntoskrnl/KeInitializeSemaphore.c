/*
 * XREFs of KeInitializeSemaphore @ 0x1402A4940
 * Callers:
 *     sub_140667864 @ 0x140667864 (sub_140667864.c)
 *     sub_14072A4C0 @ 0x14072A4C0 (sub_14072A4C0.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_14081D9C8 @ 0x14081D9C8 (sub_14081D9C8.c)
 *     sub_14085B454 @ 0x14085B454 (sub_14085B454.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
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
