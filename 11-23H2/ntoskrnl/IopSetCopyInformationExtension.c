/*
 * XREFs of IopSetCopyInformationExtension @ 0x14028F96C
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 * Callees:
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028F918 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopAllocateIrpExtension @ 0x14029080C (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  __int64 IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 9) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 9LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 64) = *a2;
  return 0LL;
}
