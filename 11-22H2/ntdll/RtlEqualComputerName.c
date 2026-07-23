/*
 * XREFs of RtlEqualComputerName @ 0x1800F5D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __cdecl RtlEqualComputerName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  return RtlEqualDomainName(String1, String2);
}
