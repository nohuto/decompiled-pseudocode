/*
 * XREFs of sub_140373000 @ 0x140373000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140373000(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedExchange(DeferredContext, 0);
}
