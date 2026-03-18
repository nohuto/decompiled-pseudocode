/*
 * XREFs of KiIsRfdsPresent @ 0x140410A88
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && (KeFeatureBits2 & 0x800000000LL) == 0;
}
