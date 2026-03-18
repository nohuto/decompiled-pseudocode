/*
 * XREFs of CarSetCustomRuleIdRange @ 0x1405D4660
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D4F40 (DifRegisterKernelPlugin.c)
 * Callees:
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D3C8C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 */

__int64 __fastcall CarSetCustomRuleIdRange(__int64 a1)
{
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  unsigned int v2; // r9d
  int v3; // r10d
  int v4; // r11d

  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
  if ( RuleClassConfigurationEntryByRuleClassId )
  {
    *((_DWORD *)RuleClassConfigurationEntryByRuleClassId + 16) = v4;
    *((_DWORD *)RuleClassConfigurationEntryByRuleClassId + 17) = v3;
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v2;
}
