/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405721B0
 * Callers:
 *     HalpGetCacheCoherency @ 0x140827FA4 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
