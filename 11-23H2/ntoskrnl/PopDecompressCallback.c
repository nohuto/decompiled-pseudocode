/*
 * XREFs of PopDecompressCallback @ 0x140AA2310
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140AA3B80 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
