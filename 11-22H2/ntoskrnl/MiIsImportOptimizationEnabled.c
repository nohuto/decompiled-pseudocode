/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x14020EBD8
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x14069707C (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079DAF8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     VfUtilIsProtectedDriver @ 0x140AC37CC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
