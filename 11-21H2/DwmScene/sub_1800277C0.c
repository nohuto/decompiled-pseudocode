/*
 * XREFs of sub_1800277C0 @ 0x1800277C0
 * Callers:
 *     sub_180100171 @ 0x180100171 (sub_180100171.c)
 *     sub_180100896 @ 0x180100896 (sub_180100896.c)
 *     sub_1801008EE @ 0x1801008EE (sub_1801008EE.c)
 *     sub_180100968 @ 0x180100968 (sub_180100968.c)
 *     sub_180100A49 @ 0x180100A49 (sub_180100A49.c)
 *     sub_180100ADF @ 0x180100ADF (sub_180100ADF.c)
 *     sub_180100BAE @ 0x180100BAE (sub_180100BAE.c)
 *     sub_180100C06 @ 0x180100C06 (sub_180100C06.c)
 *     sub_180100C80 @ 0x180100C80 (sub_180100C80.c)
 *     sub_180100D61 @ 0x180100D61 (sub_180100D61.c)
 *     sub_180100DF7 @ 0x180100DF7 (sub_180100DF7.c)
 *     sub_180101EC6 @ 0x180101EC6 (sub_180101EC6.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800277C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    sub_180011138(v5, *(_QWORD *)(a1 + 40));
    sub_180010884(*(char **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 16) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 8), a2, a3, a4);
  return sub_1800FC250(a1);
}
