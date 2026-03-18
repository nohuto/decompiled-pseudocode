/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x14029C6DC
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x1406EB784 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407614BC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 *     VfUtilIsProtectedDriver @ 0x140A81E5C (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
