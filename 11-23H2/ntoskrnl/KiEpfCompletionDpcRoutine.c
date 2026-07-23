/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140579460
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057947C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C416EC);
  return KiEpfDrainCompletionQueue();
}
