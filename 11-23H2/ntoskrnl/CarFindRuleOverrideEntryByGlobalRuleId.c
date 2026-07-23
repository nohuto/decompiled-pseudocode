/*
 * XREFs of CarFindRuleOverrideEntryByGlobalRuleId @ 0x1405D422C
 * Callers:
 *     CarQueryReportActionForTriage @ 0x1405D44D0 (CarQueryReportActionForTriage.c)
 *     CarRegisterRuleOverride @ 0x1405D46E0 (CarRegisterRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CarFindRuleOverrideEntryByGlobalRuleId(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 0LL;
    if ( *((_DWORD *)i - 1) == a2 )
      break;
  }
  return i - 8;
}
