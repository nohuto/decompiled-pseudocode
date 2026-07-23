/*
 * XREFs of MmKernelVerifierEnabled @ 0x14046BD52
 * Callers:
 *     VerifierExFreePool @ 0x140AC00F0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140AC0160 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned int)MiFlags >> 1) & 1;
}
