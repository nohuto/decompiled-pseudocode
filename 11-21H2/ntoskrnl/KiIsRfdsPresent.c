/*
 * XREFs of KiIsRfdsPresent @ 0x140418CB0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && !_bittest64((const signed __int64 *)&KeFeatureBits2, 0x23u);
}
