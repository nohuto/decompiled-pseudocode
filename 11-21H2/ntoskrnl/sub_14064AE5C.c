/*
 * XREFs of sub_14064AE5C @ 0x14064AE5C
 * Callers:
 *     sub_14064A96C @ 0x14064A96C (sub_14064A96C.c)
 *     sub_14064ABF8 @ 0x14064ABF8 (sub_14064ABF8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14064AE5C(unsigned __int8 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool result; // al

  switch ( a1 )
  {
    case 0x80u:
      return a2 == a3;
    case 0x81u:
      return a2 != a3;
    case 0x82u:
      return a2 < a3;
    case 0x83u:
      return a2 <= a3;
    case 0x84u:
      return a2 > a3;
  }
  result = 0;
  if ( a1 == 133 )
    return a2 >= a3;
  return result;
}
