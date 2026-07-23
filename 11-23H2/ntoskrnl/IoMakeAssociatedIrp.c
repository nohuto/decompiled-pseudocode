/*
 * XREFs of IoMakeAssociatedIrp @ 0x1403AD100
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x140290198 (IoMakeAssociatedIrpPriv.c)
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  __int64 v2; // r8

  LOBYTE(v2) = StackSize;
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, v2);
}
