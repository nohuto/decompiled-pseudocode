/*
 * XREFs of RtlClearBit @ 0x180090990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandreset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
