/*
 * XREFs of sub_180091CE8 @ 0x180091CE8
 * Callers:
 *     sub_1800919EC @ 0x1800919EC (sub_1800919EC.c)
 * Callees:
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 *     sub_18009178C @ 0x18009178C (sub_18009178C.c)
 *     sub_180091894 @ 0x180091894 (sub_180091894.c)
 *     sub_180093940 @ 0x180093940 (sub_180093940.c)
 */

__int64 *__fastcall sub_180091CE8(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 *v8; // rbx
  __int64 v9; // rbx

  if ( a1 != (__int64 *)a2 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *a1;
    v6 = 0xCCCCCCCCCCCCCCCDuLL * (v3 - *a2);
    v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
    if ( v6 <= v7 )
    {
      v9 = v5 + 40 * v6;
      sub_18009178C(v4, v3, *a1);
      sub_18008E974(v9, a1[1]);
      a1[1] = v9;
    }
    else
    {
      if ( v6 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v5) >> 3) )
      {
        sub_180093940(a1);
        v5 = *a1;
        v7 = 0LL;
      }
      v8 = &v4[5 * v7];
      sub_18009178C(v4, v8, v5);
      a1[1] = (__int64)sub_180091894((__int64)v8, (__int64)v3, (_QWORD *)a1[1]);
    }
  }
  return a1;
}
