/*
 * XREFs of KiIsFbClearSupported @ 0x140579260
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1409747AC (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x140A8DFD8 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
