/*
 * XREFs of PopCompressCallback @ 0x140AA1DC0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
