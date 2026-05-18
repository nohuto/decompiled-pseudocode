/*
 * XREFs of sub_1800B2C10 @ 0x1800B2C10
 * Callers:
 *     sub_1800B2664 @ 0x1800B2664 (sub_1800B2664.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 */

__int64 __fastcall sub_1800B2C10(__int64 a1)
{
  char **v1; // rbx

  v1 = (char **)(a1 + 1064);
  sub_18002CCFC(a1 + 1064, a1 + 1064, *(char **)(*(_QWORD *)(a1 + 1064) + 8LL));
  sub_180010884(*v1, 0x58uLL);
  sub_180010910(a1 + 896);
  sub_1800B2670(a1 + 880, a1 + 880, *(char **)(*(_QWORD *)(a1 + 880) + 8LL));
  sub_180010884(*(char **)(a1 + 880), 0x1D0uLL);
  sub_1800B3DDC(a1 + 704);
  sub_1800B3DDC(a1 + 528);
  sub_1800B3DDC(a1 + 352);
  sub_1800B3DDC(a1 + 176);
  return sub_1800B3DDC(a1);
}
