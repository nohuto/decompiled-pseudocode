/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x140572250
 * Callers:
 *     HalpGetCacheCoherency @ 0x140829AF4 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
