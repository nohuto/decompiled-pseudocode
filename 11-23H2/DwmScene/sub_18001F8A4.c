/*
 * XREFs of sub_18001F8A4 @ 0x18001F8A4
 * Callers:
 *     sub_1800DBDE0 @ 0x1800DBDE0 (sub_1800DBDE0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18001F8A4(_WORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *result; // rax

  result = 0LL;
  if ( a2 )
  {
    while ( *a1 != *a3 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
