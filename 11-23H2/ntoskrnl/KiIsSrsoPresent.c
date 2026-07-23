/*
 * XREFs of KiIsSrsoPresent @ 0x140410DCC
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsSrsoPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1 && (KeFeatureBits2 & 0x400000000LL) == 0;
}
