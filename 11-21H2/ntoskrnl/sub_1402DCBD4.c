/*
 * XREFs of sub_1402DCBD4 @ 0x1402DCBD4
 * Callers:
 *     sub_1402DCC34 @ 0x1402DCC34 (sub_1402DCC34.c)
 *     sub_14092C834 @ 0x14092C834 (sub_14092C834.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402DCBD4(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)qword_140C48C18; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
