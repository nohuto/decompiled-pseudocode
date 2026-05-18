/*
 * XREFs of sub_18002DA80 @ 0x18002DA80
 * Callers:
 *     sub_1801006F8 @ 0x1801006F8 (sub_1801006F8.c)
 *     sub_18010070A @ 0x18010070A (sub_18010070A.c)
 *     sub_180107925 @ 0x180107925 (sub_180107925.c)
 * Callees:
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 */

__int64 __fastcall sub_18002DA80(__int64 a1)
{
  char **v1; // rbx

  v1 = (char **)(a1 + 136);
  sub_18002CCFC(a1 + 136, a1 + 136, *(char **)(*(_QWORD *)(a1 + 136) + 8LL));
  return sub_180010884(*v1, 0x58uLL);
}
