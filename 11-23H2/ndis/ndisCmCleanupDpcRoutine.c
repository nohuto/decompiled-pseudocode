/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1C00B6C40
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
  if ( !_InterlockedCompareExchange(&dword_1C00F79C0, 1, 0) )
    ExQueueWorkItem(&stru_1C00F71D0, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
