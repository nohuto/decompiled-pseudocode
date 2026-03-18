/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D3C8C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1405D3B80 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D3C20 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x1405D4170 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D4260 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x1405D4380 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x1405D4610 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1405D4660 (CarSetCustomRuleIdRange.c)
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
