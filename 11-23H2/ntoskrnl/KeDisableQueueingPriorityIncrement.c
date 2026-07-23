/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14031E4FC
 * Callers:
 *     NtCreateWorkerFactory @ 0x140785D80 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
