/*
 * XREFs of sub_1C00382A0 @ 0x1C00382A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 */

void __fastcall sub_1C00382A0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_1C0019ED0(DeferredContext[8], 0LL);
}
