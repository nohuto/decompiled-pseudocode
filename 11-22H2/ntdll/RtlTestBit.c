/*
 * XREFs of RtlTestBit @ 0x180088F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return (*((char *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) >> (BitNumber & 7)) & 1;
}
