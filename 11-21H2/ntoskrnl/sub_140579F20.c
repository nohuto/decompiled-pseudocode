/*
 * XREFs of sub_140579F20 @ 0x140579F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140579F48 @ 0x140579F48 (sub_140579F48.c)
 */

void __fastcall sub_140579F20(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  LOBYTE(DeferredContext) = (_BYTE)SystemArgument1;
  sub_140579F48(KeGetCurrentPrcb(), DeferredContext);
  _InterlockedDecrement(&dword_140C2B990);
}
