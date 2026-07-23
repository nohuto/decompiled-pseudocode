/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405726F0
 * Callers:
 *     HalpGetCacheCoherency @ 0x1408282A4 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
