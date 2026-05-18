/*
 * XREFs of sub_18005E670 @ 0x18005E670
 * Callers:
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18005E670(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) <= 0x555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 4);
    if ( result < a2 )
      return a2;
  }
  return result;
}
