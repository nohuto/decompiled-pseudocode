/*
 * XREFs of sub_14060392C @ 0x14060392C
 * Callers:
 *     CarQueryReportActionForTriage @ 0x140603BD0 (CarQueryReportActionForTriage.c)
 *     CarRegisterRuleOverride @ 0x140603DE0 (CarRegisterRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14060392C(_QWORD **a1, int a2)
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
