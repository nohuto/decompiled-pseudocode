/*
 * XREFs of sub_1800DE174 @ 0x1800DE174
 * Callers:
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 *     sub_1800F1DFA @ 0x1800F1DFA (sub_1800F1DFA.c)
 * Callees:
 *     sub_1800DE2BC @ 0x1800DE2BC (sub_1800DE2BC.c)
 */

__int64 __fastcall sub_1800DE174(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800DE2BC(v2 + 16);
  return sub_1800DE0DC(a1);
}
