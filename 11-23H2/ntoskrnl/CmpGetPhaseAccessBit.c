/*
 * XREFs of CmpGetPhaseAccessBit @ 0x140A16894
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
