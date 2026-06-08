/*
 * XREFs of CpcSetTimeWindow @ 0x1C0004CB0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00021C4 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[18] + 224), a2);
}
