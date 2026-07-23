/*
 * XREFs of sub_1402DCBFC @ 0x1402DCBFC
 * Callers:
 *     sub_14092C834 @ 0x14092C834 (sub_14092C834.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     sub_140B0C230 @ 0x140B0C230 (sub_140B0C230.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402DCBFC(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)qword_140C48C28; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
