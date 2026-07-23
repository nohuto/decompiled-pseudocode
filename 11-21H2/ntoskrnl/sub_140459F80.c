/*
 * XREFs of sub_140459F80 @ 0x140459F80
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 */

void __fastcall sub_140459F80(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  KeInsertQueue(&stru_140C46900, (PLIST_ENTRY)(DeferredContext + 72));
}
