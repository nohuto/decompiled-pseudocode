/*
 * XREFs of sub_14036C8EC @ 0x14036C8EC
 * Callers:
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 * Callees:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 */

__int64 __fastcall sub_14036C8EC(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return sub_1402AC010(*(_QWORD *)(a1 + 1384), a1, 3, a3);
}
