/*
 * XREFs of CpcNativeInterruptDpc @ 0x1C0004730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcNativeInterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  IoQueueWorkItem(
    *(PIO_WORKITEM *)(DeferredContext[31] + 392LL),
    CpcNativeInterruptWorker,
    CriticalWorkQueue,
    DeferredContext);
}
