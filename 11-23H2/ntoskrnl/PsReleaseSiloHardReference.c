/*
 * XREFs of PsReleaseSiloHardReference @ 0x140354550
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402BB810 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x140354510 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767940 (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x14035457C (PspHardDereferenceSiloWorker.c)
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
