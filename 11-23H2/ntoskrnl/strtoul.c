/*
 * XREFs of strtoul @ 0x1403D9018
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140B55CAC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B56520 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x140B57318 (EmpParseRuleTermArgMapping.c)
 *     EmpCacheBiosDate @ 0x140B57728 (EmpCacheBiosDate.c)
 *     CmpGetBiosDate @ 0x140B9847C (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1403D8D90 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
