/*
 * XREFs of sub_18002768C @ 0x18002768C
 * Callers:
 *     sub_18010034E @ 0x18010034E (sub_18010034E.c)
 *     unknown_libname_20 @ 0x180100384 (unknown_libname_20.c)
 *     sub_180107850 @ 0x180107850 (sub_180107850.c)
 *     sub_1801078DD @ 0x1801078DD (sub_1801078DD.c)
 *     sub_1801078EF @ 0x1801078EF (sub_1801078EF.c)
 *     sub_180107901 @ 0x180107901 (sub_180107901.c)
 *     sub_180107913 @ 0x180107913 (sub_180107913.c)
 *     sub_180107937 @ 0x180107937 (sub_180107937.c)
 *     sub_180107A94 @ 0x180107A94 (sub_180107A94.c)
 *     sub_180107AA6 @ 0x180107AA6 (sub_180107AA6.c)
 * Callees:
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 */

__int64 __fastcall sub_18002768C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return j_LanguageEnumProc(*a1, a2, a3, a4);
}
