/*
 * XREFs of sub_140603950 @ 0x140603950
 * Callers:
 *     CarDeregisterRuleOverride @ 0x140603890 (CarDeregisterRuleOverride.c)
 *     CarSetCustomIdInRuleOverride @ 0x140604280 (CarSetCustomIdInRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140603950(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 0LL;
    if ( *((_DWORD *)i - 16) == a2 )
      break;
  }
  return i - 8;
}
