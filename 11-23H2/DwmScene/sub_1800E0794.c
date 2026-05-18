/*
 * XREFs of sub_1800E0794 @ 0x1800E0794
 * Callers:
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 */

__int64 **__fastcall sub_1800E0794(__int64 **a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( sub_180015678(i, a4) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !sub_180015678(j, a4) )
      {
        sub_180011020(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
