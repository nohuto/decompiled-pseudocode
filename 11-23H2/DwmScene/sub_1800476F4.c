/*
 * XREFs of sub_1800476F4 @ 0x1800476F4
 * Callers:
 *     sub_1800478FC @ 0x1800478FC (sub_1800478FC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_1800472E8 @ 0x1800472E8 (sub_1800472E8.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 */

__int64 __fastcall sub_1800476F4(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 *v11; // rax
  int v12; // eax
  int v13; // r10d
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v11 = (__int64 *)sub_1800472E8(a6, (__int64)&v15, a7);
    sub_180011020(a1, v11);
    if ( v16 )
      sub_180010530(v16);
    sub_180029870(*a1, 8, 0);
  }
  v12 = sub_1800488C8(17LL);
  return sub_180088A60(*a1, a2, a3, a4 * v12, a5, v13);
}
