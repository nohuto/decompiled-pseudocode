/*
 * XREFs of sub_180024964 @ 0x180024964
 * Callers:
 *     sub_180026720 @ 0x180026720 (sub_180026720.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_1800249DC @ 0x1800249DC (sub_1800249DC.c)
 *     sub_180029740 @ 0x180029740 (sub_180029740.c)
 */

__int64 *__fastcall sub_180024964(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800249DC(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D4C(a1 + 8, &v7);
  sub_180029740(v4, v5);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
