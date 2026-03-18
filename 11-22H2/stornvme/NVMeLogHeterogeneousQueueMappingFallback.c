/*
 * XREFs of NVMeLogHeterogeneousQueueMappingFallback @ 0x1C000F9C4
 * Callers:
 *     IoSqToIoCqMapping @ 0x1C000B84C (IoSqToIoCqMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeLogHeterogeneousQueueMappingFallback(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(87LL, a1, 0LL);
  return result;
}
