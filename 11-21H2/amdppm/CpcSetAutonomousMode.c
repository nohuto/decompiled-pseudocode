/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00048D0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0001C68 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[18] + 368), a2 != 0);
}
