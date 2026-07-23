/*
 * XREFs of sub_1402166A4 @ 0x1402166A4
 * Callers:
 *     sub_1402137E4 @ 0x1402137E4 (sub_1402137E4.c)
 *     sub_140215D78 @ 0x140215D78 (sub_140215D78.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402166A4(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C53158;
  while ( result )
  {
    if ( a1 + a2 - 1 < result[3] )
    {
      result = (_QWORD *)*result;
    }
    else
    {
      if ( a1 <= result[4] )
        return result;
      result = (_QWORD *)result[1];
    }
  }
  return 0LL;
}
