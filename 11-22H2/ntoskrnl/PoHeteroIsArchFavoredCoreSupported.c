/*
 * XREFs of PoHeteroIsArchFavoredCoreSupported @ 0x140410B6C
 * Callers:
 *     PpmHeteroDetectHgsCores @ 0x1403918AC (PpmHeteroDetectHgsCores.c)
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403B6360 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140597834 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAFFC (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PoHeteroIsArchFavoredCoreSupported()
{
  return PpmHeteroArchFavoredCoreEnabled != 0;
}
