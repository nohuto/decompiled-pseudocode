/*
 * XREFs of PsReleaseSiloHardReference @ 0x14020B0E0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x14020B0A0 (IopCloseFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020B10C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
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
