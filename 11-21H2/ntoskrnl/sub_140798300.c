/*
 * XREFs of sub_140798300 @ 0x140798300
 * Callers:
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140798300(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // rax

  for ( i = *(_QWORD **)(a1 + 56); ; i = (_QWORD *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      if ( a2 >= i[3] )
        break;
      i = (_QWORD *)*i;
    }
    if ( a2 <= i[3] )
      break;
  }
  return i - 2;
}
