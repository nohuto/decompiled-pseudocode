/*
 * XREFs of sub_180071B9C @ 0x180071B9C
 * Callers:
 *     sub_180071120 @ 0x180071120 (sub_180071120.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180047DEC @ 0x180047DEC (sub_180047DEC.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 */

_QWORD *__fastcall sub_180071B9C(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  _QWORD *i; // r14
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v9 = _RTtypeid(*i);
    if ( sub_180047DEC(*a5, v9) )
    {
      v10 = *(_QWORD **)(a4 + 8);
      if ( v10 == *(_QWORD **)(a4 + 16) )
      {
        sub_180071228((char **)a4, *(char **)(a4 + 8), i);
      }
      else
      {
        sub_18001246C(v10, i);
        *(_QWORD *)(a4 + 8) += 16LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
