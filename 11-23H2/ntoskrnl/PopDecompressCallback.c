/*
 * XREFs of PopDecompressCallback @ 0x140AA2180
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140AA39F0 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
