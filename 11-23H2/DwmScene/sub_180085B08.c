/*
 * XREFs of sub_180085B08 @ 0x180085B08
 * Callers:
 *     sub_18008CA6C @ 0x18008CA6C (sub_18008CA6C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180085B08(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2) <= 0x1555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 2);
    if ( result < a2 )
      return a2;
  }
  return result;
}
