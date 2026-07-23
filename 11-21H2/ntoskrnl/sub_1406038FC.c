/*
 * XREFs of sub_1406038FC @ 0x1406038FC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1406037F0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x140603890 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x140603DE0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x140603ED0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x140603FF0 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x140604280 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1406042D0 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1406038FC(__int64 a1, int a2)
{
  __int64 *i; // rax

  for ( i = (__int64 *)qword_140C1A8E0; ; i = (__int64 *)*i )
  {
    if ( i == &qword_140C1A8E0 )
      return 0LL;
    if ( *((_DWORD *)i - 21) == a2 )
      break;
  }
  return i - 11;
}
