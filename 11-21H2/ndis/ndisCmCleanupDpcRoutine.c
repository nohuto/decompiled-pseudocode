/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1C00B1A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_1C00EE8F8, 1, 0) )
    ExQueueWorkItem(&stru_1C00EE180, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
