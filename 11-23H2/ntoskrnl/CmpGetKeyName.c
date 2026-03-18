/*
 * XREFs of CmpGetKeyName @ 0x140B570C0
 * Callers:
 *     EmpParseCallbacks @ 0x140B55CAC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B56520 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B56A50 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B57018 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B57100 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B57130 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
