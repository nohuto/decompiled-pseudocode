/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140B569FC
 * Callers:
 *     EmpParseEntryTypes @ 0x140B55B34 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B55CAC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B56520 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B56824 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B56A50 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B57100 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B57130 (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
