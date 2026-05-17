/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800E9660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_180188668;
    *a1 = &qword_180188668;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_180184864;
    *a2 = &dword_180184864;
  }
  return result;
}
