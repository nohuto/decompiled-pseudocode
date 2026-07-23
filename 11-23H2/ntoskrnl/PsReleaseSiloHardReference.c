/*
 * XREFs of PsReleaseSiloHardReference @ 0x1403546F0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402BBAA0 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1403546B0 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x14035471C (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
