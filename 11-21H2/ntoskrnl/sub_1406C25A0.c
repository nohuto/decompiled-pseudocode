/*
 * XREFs of sub_1406C25A0 @ 0x1406C25A0
 * Callers:
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409100F4 @ 0x1409100F4 (sub_1409100F4.c)
 */

__int64 __fastcall sub_1406C25A0(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
  {
    result = a1 + 72;
    if ( i == (_QWORD *)(a1 + 72) )
      break;
    sub_14042A5E0(*(_QWORD *)(i[5] + 32LL), 40LL);
  }
  return result;
}
