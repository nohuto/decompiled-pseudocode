/*
 * XREFs of sub_18002933C @ 0x18002933C
 * Callers:
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 * Callees:
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_18002933C(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9

  v3 = sub_180070B94(a1, *a1, a3, -*((_QWORD *)a1 + 1));
  return sub_180070B70(v3, v4, 2LL, v5);
}
