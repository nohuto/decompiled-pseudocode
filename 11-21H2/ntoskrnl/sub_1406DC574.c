/*
 * XREFs of sub_1406DC574 @ 0x1406DC574
 * Callers:
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 * Callees:
 *     sub_14085F1D0 @ 0x14085F1D0 (sub_14085F1D0.c)
 */

__int64 sub_1406DC574()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140D3B01C == 1 )
  {
    result = sub_14085F1D0();
    if ( (int)result >= 0 )
      byte_140D3B01C = 0;
  }
  return result;
}
