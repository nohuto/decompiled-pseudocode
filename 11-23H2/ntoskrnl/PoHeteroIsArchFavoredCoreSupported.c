/*
 * XREFs of PoHeteroIsArchFavoredCoreSupported @ 0x14041132C
 * Callers:
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x140382D78 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     PpmHeteroDetectHgsCores @ 0x14039342C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1405977A4 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAA7C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PoHeteroIsArchFavoredCoreSupported()
{
  return PpmHeteroArchFavoredCoreEnabled != 0;
}
