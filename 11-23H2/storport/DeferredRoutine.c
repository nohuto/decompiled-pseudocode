/*
 * XREFs of DeferredRoutine @ 0x1C00630A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 */

void __fastcall DeferredRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  sub_1C001A194(DeferredContext[8], 0);
}
