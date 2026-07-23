/*
 * XREFs of PoHeteroIsArchFavoredCoreSupported @ 0x140411538
 * Callers:
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x140382F18 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     PpmHeteroDetectHgsCores @ 0x14039360C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140597C94 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAD4C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PoHeteroIsArchFavoredCoreSupported()
{
  return PpmHeteroArchFavoredCoreEnabled != 0;
}
