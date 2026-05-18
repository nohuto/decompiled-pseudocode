/*
 * XREFs of sub_180044D90 @ 0x180044D90
 * Callers:
 *     sub_180101F08 @ 0x180101F08 (sub_180101F08.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180044D90(__int64 a1)
{
  sub_180010884(*(char **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return sub_180044C94((char **)(a1 + 8));
}
