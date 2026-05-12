/*
 * XREFs of sub_1C00794E0 @ 0x1C00794E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00793D4 @ 0x1C00793D4 (sub_1C00793D4.c)
 */

void __fastcall sub_1C00794E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_1C00793D4(*((PVOID *)DeferredContext + 1), (PSLIST_HEADER)DeferredContext + 4);
  _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 21);
}
