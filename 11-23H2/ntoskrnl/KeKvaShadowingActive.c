/*
 * XREFs of KeKvaShadowingActive @ 0x14036A2A8
 * Callers:
 *     sub_1403F32CC @ 0x1403F32CC (sub_1403F32CC.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FAD0 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1409749AC (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140975688 (KeQueryKvaShadowInformation.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
