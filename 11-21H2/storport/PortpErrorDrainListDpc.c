/*
 * XREFs of PortpErrorDrainListDpc @ 0x1C00694B0
 * Callers:
 *     <none>
 * Callees:
 *     PortTraceErrorDrainList @ 0x1C00693A4 (PortTraceErrorDrainList.c)
 */

void __fastcall PortpErrorDrainListDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PortTraceErrorDrainList(*((PVOID *)DeferredContext + 1), (PSLIST_HEADER)DeferredContext + 4);
  _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 21);
}
