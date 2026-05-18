/*
 * XREFs of sub_1800970DC @ 0x1800970DC
 * Callers:
 *     sub_180097664 @ 0x180097664 (sub_180097664.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_18009720C @ 0x18009720C (sub_18009720C.c)
 *     sub_180097370 @ 0x180097370 (sub_180097370.c)
 *     sub_180097890 @ 0x180097890 (sub_180097890.c)
 */

__int64 __fastcall sub_1800970DC(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx

  v3 = (a3 - a2) >> 4;
  v5 = (__int64)(a1[1] - *a1) >> 4;
  if ( v3 <= v5 )
  {
    v10 = *a1 + 16 * v3;
    sub_18009720C(a2, a3, *a1);
    result = sub_18001203C(v10, a1[1]);
  }
  else
  {
    if ( v3 > (__int64)(a1[2] - *a1) >> 4 )
    {
      sub_180097890(a1, (a3 - a2) >> 4);
      v5 = 0LL;
    }
    v8 = a2 + 16 * v5;
    sub_18009720C(a2, v8, *a1);
    result = sub_180097370(v8, a3, a1[1]);
    v10 = result;
  }
  a1[1] = v10;
  return result;
}
