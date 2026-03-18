/*
 * XREFs of KeIsCetCapable @ 0x1403B661C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}
