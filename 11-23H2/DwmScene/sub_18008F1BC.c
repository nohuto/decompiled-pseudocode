/*
 * XREFs of sub_18008F1BC @ 0x18008F1BC
 * Callers:
 *     sub_180091014 @ 0x180091014 (sub_180091014.c)
 * Callees:
 *     sub_180054F8C @ 0x180054F8C (sub_180054F8C.c)
 *     sub_18008F290 @ 0x18008F290 (sub_18008F290.c)
 */

__int64 __fastcall sub_18008F1BC(__int64 *a1, unsigned __int64 a2)
{
  void *v2; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx

  v2 = (void *)a1[1];
  v4 = *a1;
  v5 = ((__int64)v2 - *a1) >> 2;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      if ( a2 <= (a1[2] - v4) >> 2 )
      {
        v7 = (__int64)v2 + 4 * (a2 - v5);
        result = sub_180054F8C(v2, v7);
        a1[1] = v7;
      }
      else
      {
        return sub_18008F290(a1);
      }
    }
  }
  else
  {
    result = v4 + 4 * a2;
    a1[1] = result;
  }
  return result;
}
