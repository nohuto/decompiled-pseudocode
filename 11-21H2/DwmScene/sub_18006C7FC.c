/*
 * XREFs of sub_18006C7FC @ 0x18006C7FC
 * Callers:
 *     sub_180103F77 @ 0x180103F77 (sub_180103F77.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18006C7FC(__int64 a1)
{
  sub_180010884(*(char **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return sub_18006C764((char **)(a1 + 8));
}
