/*
 * XREFs of KeKvaShadowingActive @ 0x14036A108
 * Callers:
 *     sub_1403F30EC @ 0x1403F30EC (sub_1403F30EC.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076F8E0 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140852EAC (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1409747AC (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140975488 (KeQueryKvaShadowInformation.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
