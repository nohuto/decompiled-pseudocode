/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140558D80
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028F918 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopAllocateIrpExtension @ 0x14029080C (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 7) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 7);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 20) = *a2;
  return 0LL;
}
