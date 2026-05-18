/*
 * XREFs of sub_18004A848 @ 0x18004A848
 * Callers:
 *     sub_18004A7C0 @ 0x18004A7C0 (sub_18004A7C0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_18004A9AC @ 0x18004A9AC (sub_18004A9AC.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 *     sub_18004CD10 @ 0x18004CD10 (sub_18004CD10.c)
 */

__int64 __fastcall sub_18004A848(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    sub_180011B80();
  v4 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 3);
  v5 = sub_18004CD10();
  v6 = sub_18002AF84(v5);
  v7 = sub_18001090C(v6);
  sub_18004AABC(v7 + 88 * v4, a2 - v4);
  sub_18004A9AC(*a1, a1[1], v7);
  return sub_18004CD58(a1, v7, a2, v5);
}
