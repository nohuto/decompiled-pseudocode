/*
 * XREFs of sub_180058FCC @ 0x180058FCC
 * Callers:
 *     sub_180058C98 @ 0x180058C98 (sub_180058C98.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 * Callees:
 *     sub_1800589C8 @ 0x1800589C8 (sub_1800589C8.c)
 */

__int64 __fastcall sub_180058FCC(__int64 a1, __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_DWORD *)(a1 + 1) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 7) = 0;
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    a1 += 48LL;
  }
  sub_1800589C8(a1, a1);
  return a1;
}
