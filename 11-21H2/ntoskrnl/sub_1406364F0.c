/*
 * XREFs of sub_1406364F0 @ 0x1406364F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __fastcall sub_1406364F0(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  *((_DWORD *)DeferredContext + 203) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(DeferredContext + 784), 0, 0);
}
