/*
 * XREFs of sub_140216EB4 @ 0x140216EB4
 * Callers:
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

__int64 __fastcall sub_140216EB4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return sub_1403493B0(*(_QWORD *)(a1 + 1384), a1, 3LL, a3);
  return result;
}
