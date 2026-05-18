/*
 * XREFs of sub_1800A9328 @ 0x1800A9328
 * Callers:
 *     unknown_libname_74 @ 0x180107192 (unknown_libname_74.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800A9328(__int64 a1)
{
  sub_180010884(*(char **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return sub_1800A9430(a1 + 8);
}
