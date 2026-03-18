/*
 * XREFs of MmIsAddressValid @ 0x1403AEE00
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403E4184 (KiMarkBugCheckRegions.c)
 *     sub_1403F30EC @ 0x1403F30EC (sub_1403F30EC.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094DF14 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A9A514 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     PopMarkComponentsBootPhase @ 0x140AA360C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
