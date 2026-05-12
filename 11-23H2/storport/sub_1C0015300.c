/*
 * XREFs of sub_1C0015300 @ 0x1C0015300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001466C @ 0x1C001466C (sub_1C001466C.c)
 */

void __fastcall sub_1C0015300(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  sub_1C001466C(SystemArgument1, DeferredContext, 0);
}
