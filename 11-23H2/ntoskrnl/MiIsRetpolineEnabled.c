/*
 * XREFs of MiIsRetpolineEnabled @ 0x14020EBA0
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079D8D8 (MiCaptureRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A346E4 (MiMarkKernelImageRetpolineBits.c)
 *     MmGetImageRetpolineCodePage @ 0x140A34860 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x140AACB50 (MmMarkHiberPhase.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
