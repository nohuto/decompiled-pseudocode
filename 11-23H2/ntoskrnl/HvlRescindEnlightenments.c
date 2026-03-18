/*
 * XREFs of HvlRescindEnlightenments @ 0x14036F0E0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89238 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)&HvlpEnlightenments, 0xFFFFFFFE);
}
