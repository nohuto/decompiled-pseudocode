/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0007720
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000200C (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, a1[18] + 368, a2 != 0);
}
