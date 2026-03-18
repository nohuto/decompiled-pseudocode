/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140579000
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057901C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C4176C);
  return KiEpfDrainCompletionQueue();
}
