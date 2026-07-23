/*
 * XREFs of sub_140401BCC @ 0x140401BCC
 * Callers:
 *     sub_1404019F4 @ 0x1404019F4 (sub_1404019F4.c)
 * Callees:
 *     sub_1403FF880 @ 0x1403FF880 (sub_1403FF880.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400CA8 @ 0x140400CA8 (sub_140400CA8.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 */

__int64 __fastcall sub_140401BCC(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v7; // ebx

  v7 = 0;
  if ( a3 > (unsigned int)sub_1403FF880(a1) )
    return 209715726;
  if ( a5 < (unsigned int)sub_1403FF880(a1) )
    return 209715726;
  if ( a3 == (unsigned int)sub_1403FF880(a1) )
  {
    sub_140401350();
    sub_140400BBC();
    v7 = sub_140400D10();
    if ( !v7 )
    {
      sub_140400C30();
      if ( !(unsigned int)sub_140400CA8() )
        return 209715726;
    }
  }
  return v7;
}
