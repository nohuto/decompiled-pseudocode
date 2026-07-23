/*
 * XREFs of EmpSearchTargetRuleList @ 0x14032DB54
 * Callers:
 *     EmpUpdateRuleState @ 0x14032E38C (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14093C664 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A87D30 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140B56A50 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
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
