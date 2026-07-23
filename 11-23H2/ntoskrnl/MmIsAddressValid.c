/*
 * XREFs of MmIsAddressValid @ 0x1403AEFE0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403E4364 (KiMarkBugCheckRegions.c)
 *     sub_1403F32CC @ 0x1403F32CC (sub_1403F32CC.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094E114 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A9A384 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     PopMarkComponentsBootPhase @ 0x140AA347C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
