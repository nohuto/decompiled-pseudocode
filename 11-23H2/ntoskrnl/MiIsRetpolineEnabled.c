/*
 * XREFs of MiIsRetpolineEnabled @ 0x14020EBA0
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079D6E8 (MiCaptureRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A34434 (MiMarkKernelImageRetpolineBits.c)
 *     MmGetImageRetpolineCodePage @ 0x140A345B0 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x140AACCE0 (MmMarkHiberPhase.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
