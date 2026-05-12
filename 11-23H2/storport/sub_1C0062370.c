/*
 * XREFs of sub_1C0062370 @ 0x1C0062370
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 */

void __fastcall sub_1C0062370(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)sub_1C0012FC0(v4) )
    sub_1C001A194(v4, 0);
}
