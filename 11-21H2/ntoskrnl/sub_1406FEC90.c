/*
 * XREFs of sub_1406FEC90 @ 0x1406FEC90
 * Callers:
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

signed __int64 __fastcall sub_1406FEC90(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return sub_1403493B0(*(char **)(a1 + 1384), a1, 2, a2);
  return result;
}
