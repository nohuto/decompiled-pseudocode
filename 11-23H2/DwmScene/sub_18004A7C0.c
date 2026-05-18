/*
 * XREFs of sub_18004A7C0 @ 0x18004A7C0
 * Callers:
 *     sub_18004CB98 @ 0x18004CB98 (sub_18004CB98.c)
 * Callees:
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 */

void __fastcall sub_18004A7C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 3);
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[2] - *a1) >> 3) )
        a1[1] = sub_18004AABC(a1[1], a2 - v3);
      else
        sub_18004A848(a1);
    }
  }
  else
  {
    v4 = *a1 + 88 * a2;
    sub_18004A788(v4, a1[1]);
    a1[1] = v4;
  }
}
