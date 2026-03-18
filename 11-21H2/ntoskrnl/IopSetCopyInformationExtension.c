/*
 * XREFs of IopSetCopyInformationExtension @ 0x140417D50
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 9LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 9, v4, v5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_OWORD *)IrpExtension + 4) = *a2;
  return 0LL;
}
