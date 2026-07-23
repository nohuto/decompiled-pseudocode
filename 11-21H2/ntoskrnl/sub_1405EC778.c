/*
 * XREFs of sub_1405EC778 @ 0x1405EC778
 * Callers:
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1405EC778(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *result; // rax

  if ( a3 )
  {
    for ( result = (_WORD *)(a2 - 2); result >= a1; --result )
    {
      if ( *result == 64 )
        return result;
    }
  }
  else
  {
    while ( (unsigned __int64)a1 < a2 )
    {
      if ( *a1 == 46 )
        return a1;
      ++a1;
    }
  }
  return (_WORD *)a2;
}
