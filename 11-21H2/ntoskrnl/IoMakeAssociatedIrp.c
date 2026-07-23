/*
 * XREFs of IoMakeAssociatedIrp @ 0x140557670
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)sub_14020BA48((__int64)Irp, 0LL, StackSize);
}
