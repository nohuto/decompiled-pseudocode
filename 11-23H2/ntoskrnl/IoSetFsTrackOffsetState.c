/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1405594A0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028FBA8 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopAllocateIrpExtension @ 0x140290A9C (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r11
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 5) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v5, 5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
