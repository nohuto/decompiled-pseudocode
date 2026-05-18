/*
 * XREFs of sub_18004779C @ 0x18004779C
 * Callers:
 *     sub_180047848 @ 0x180047848 (sub_180047848.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_1800472C8 @ 0x1800472C8 (sub_1800472C8.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 */

__int64 __fastcall sub_18004779C(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 *v10; // rax
  int v11; // eax
  int v12; // r10d
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = sub_1800472C8(a6, &v14);
    sub_180011020(a1, v10);
    if ( v15 )
      sub_180010530(v15);
    sub_180029870(*a1, 8, 0);
  }
  v11 = sub_1800488C8(12LL);
  return sub_180088A60(*a1, a2, a3, a4 * v11, a5, v12);
}
