/*
 * XREFs of sub_180056DC0 @ 0x180056DC0
 * Callers:
 *     sub_180056E08 @ 0x180056E08 (sub_180056E08.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 */

__int64 *__fastcall sub_180056DC0(__int64 a1, __int64 *a2, int a3)
{
  if ( a3 == -1 )
  {
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    sub_18001875C(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
