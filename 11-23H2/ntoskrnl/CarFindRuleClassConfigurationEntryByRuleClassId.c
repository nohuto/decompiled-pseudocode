/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D41FC
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1405D40F0 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D4190 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x1405D46E0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D47D0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x1405D48F0 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x1405D4B80 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1405D4BD0 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CarFindRuleClassConfigurationEntryByRuleClassId(__int64 a1, int a2)
{
  __int64 *i; // rax

  for ( i = (__int64 *)CarConfigurationEntries; ; i = (__int64 *)*i )
  {
    if ( i == &CarConfigurationEntries )
      return 0LL;
    if ( *((_DWORD *)i - 21) == a2 )
      break;
  }
  return i - 11;
}
