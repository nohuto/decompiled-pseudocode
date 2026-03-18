/*
 * XREFs of IopSetDriverFlagsExtension @ 0x14020C21C
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14020BA48 (IoMakeAssociatedIrpPriv.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDriverFlagsExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 8LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 56) = a2;
  return 0LL;
}
