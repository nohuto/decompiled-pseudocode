/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800E9490
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
    result = &qword_18017B2F8;
    *a1 = &qword_18017B2F8;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_180177E94;
    *a2 = &dword_180177E94;
  }
  return result;
}
