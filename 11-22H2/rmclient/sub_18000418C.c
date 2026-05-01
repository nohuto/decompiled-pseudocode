/*
 * XREFs of sub_18000418C @ 0x18000418C
 * Callers:
 *     sub_180003670 @ 0x180003670 (sub_180003670.c)
 *     sub_180003D80 @ 0x180003D80 (sub_180003D80.c)
 * Callees:
 *     sub_180004230 @ 0x180004230 (sub_180004230.c)
 *     sub_1800049B0 @ 0x1800049B0 (sub_1800049B0.c)
 *     sub_1800091EC @ 0x1800091EC (sub_1800091EC.c)
 */

__int64 __fastcall sub_18000418C(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  sub_1800091EC(&v8);
  v6 = sub_180004230(a2, &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = sub_1800049B0(a1, v8, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
    else
      v6 = -2147024809;
  }
  sub_1800091EC(&v8);
  return (unsigned int)v6;
}
