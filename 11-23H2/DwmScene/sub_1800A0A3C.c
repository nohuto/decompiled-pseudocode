/*
 * XREFs of sub_1800A0A3C @ 0x1800A0A3C
 * Callers:
 *     sub_1800A0A84 @ 0x1800A0A84 (sub_1800A0A84.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 */

__int64 *__fastcall sub_1800A0A3C(__int64 *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_180029054(1uLL);
  v3 = sub_18001090C(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
