/*
 * XREFs of sub_140A94560 @ 0x140A94560
 * Callers:
 *     sub_140A9415C @ 0x140A9415C (sub_140A9415C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A94560(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    while ( *a3 != a1[1] )
    {
      a1 += 7;
      if ( !*a1 )
        return result;
    }
    *a3 = a1[2];
    return 1LL;
  }
  return result;
}
