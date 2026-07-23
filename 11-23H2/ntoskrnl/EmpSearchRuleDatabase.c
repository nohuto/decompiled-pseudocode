/*
 * XREFs of EmpSearchRuleDatabase @ 0x14032DB7C
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x14093C664 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A87D30 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140B55ED8 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140B56520 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B56A50 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
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
