/*
 * XREFs of RtlIsPartialPlaceholder @ 0x1408A6270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsPartialPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x440000) != 0;
}
