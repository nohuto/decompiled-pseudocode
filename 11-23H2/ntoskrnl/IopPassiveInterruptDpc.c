/*
 * XREFs of IopPassiveInterruptDpc @ 0x1403B6A20
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x14031CD30 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
