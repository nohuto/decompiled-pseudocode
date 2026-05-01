/*
 * XREFs of sub_180003CE8 @ 0x180003CE8
 * Callers:
 *     sub_180003CB0 @ 0x180003CB0 (sub_180003CB0.c)
 * Callees:
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_180003FF0 @ 0x180003FF0 (sub_180003FF0.c)
 *     sub_1800091EC @ 0x1800091EC (sub_1800091EC.c)
 */

__int64 __fastcall sub_180003CE8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  sub_1800091EC(&v8);
  v6 = sub_180003DC0(a2, &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = sub_180003FF0(v5, v8, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
    else
      v6 = -2147024809;
  }
  sub_1800091EC(&v8);
  return (unsigned int)v6;
}
