/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0004C80
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00021C4 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[18] + 368), a2 != 0);
}
