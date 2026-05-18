/*
 * XREFs of sub_180058D20 @ 0x180058D20
 * Callers:
 *     sub_180058C98 @ 0x180058C98 (sub_180058C98.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_180058F44 @ 0x180058F44 (sub_180058F44.c)
 *     sub_180058FCC @ 0x180058FCC (sub_180058FCC.c)
 *     sub_18005E670 @ 0x18005E670 (sub_18005E670.c)
 */

__int64 __fastcall sub_180058D20(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx

  if ( a2 > 0x555555555555555LL )
    sub_180011B80();
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v5 = sub_18005E670(a1, a2);
  v6 = sub_18002F250(v5);
  v7 = sub_18001090C(v6);
  sub_180058FCC(v7 + 48 * v4, a2 - v4);
  sub_180058F44(*a1, a1[1], v7);
  return sub_18005E6B8(a1, v7, a2, v5);
}
