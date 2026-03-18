/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x14020EBB8
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x14069707C (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079D5E8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     VfUtilIsProtectedDriver @ 0x140AC27FC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FB0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
