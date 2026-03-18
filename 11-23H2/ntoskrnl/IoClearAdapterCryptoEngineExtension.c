/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140558C80
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14028FE18 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140290278 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x14029080C (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(v3, v2);
  if ( !IrpExtension )
    return 3221226021LL;
  *(_OWORD *)(IrpExtension + 20) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
