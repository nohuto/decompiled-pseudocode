/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140578F70
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x140578F8C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C416EC);
  return KiEpfDrainCompletionQueue();
}
