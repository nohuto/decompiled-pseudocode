/*
 * XREFs of MmKernelVerifierEnabled @ 0x14046B952
 * Callers:
 *     VerifierExFreePool @ 0x140AC0100 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140AC0170 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned int)MiFlags >> 1) & 1;
}
