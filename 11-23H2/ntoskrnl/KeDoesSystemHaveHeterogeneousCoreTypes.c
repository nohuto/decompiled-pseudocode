/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x140382D78
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x140A8E204 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     PoHeteroIsArchFavoredCoreSupported @ 0x14041132C (PoHeteroIsArchFavoredCoreSupported.c)
 *     KeDetectHeterogeneousSets @ 0x14067E998 (KeDetectHeterogeneousSets.c)
 */

unsigned __int64 KeDoesSystemHaveHeterogeneousCoreTypes()
{
  if ( (unsigned __int8)PoHeteroIsArchFavoredCoreSupported() )
    return KeDetectHeterogeneousSets(0LL);
  else
    return ((unsigned __int64)KeFeatureBits >> 53) & 1;
}
