/*
 * XREFs of KiIsFbClearSupported @ 0x140579750
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1409749AC (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x140A8DE50 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
