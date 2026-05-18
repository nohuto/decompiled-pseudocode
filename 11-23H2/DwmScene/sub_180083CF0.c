/*
 * XREFs of sub_180083CF0 @ 0x180083CF0
 * Callers:
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 *     sub_180083D68 @ 0x180083D68 (sub_180083D68.c)
 */

__int64 *__fastcall sub_180083CF0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180083D68(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)sub_180011D4C(a1 + 8, &v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
