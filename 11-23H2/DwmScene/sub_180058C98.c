/*
 * XREFs of sub_180058C98 @ 0x180058C98
 * Callers:
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 * Callees:
 *     sub_1800589C8 @ 0x1800589C8 (sub_1800589C8.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 *     sub_180058FCC @ 0x180058FCC (sub_180058FCC.c)
 */

void __fastcall sub_180058C98(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx

  v3 = a1[1];
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 4);
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      if ( a2 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) )
        a1[1] = sub_180058FCC(v3, a2 - v4);
      else
        sub_180058D20(a1);
    }
  }
  else
  {
    v5 = *a1 + 48 * a2;
    sub_1800589C8(v5, v3);
    a1[1] = v5;
  }
}
